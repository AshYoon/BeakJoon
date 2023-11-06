#include <string>
#include <iostream>
#include <algorithm>
#include <queue>
#include <unordered_map>
#include <map>
#include <vector>
#include <cmath>
#include <sstream>
#include <climits>

using namespace std;
int check(vector<int> v , int n)
{
    int cnt = 0;
    for(int i = 0 ; i < v.size() ; i++)
    {
        if(n == v[i]) cnt++;
    }
    
    return cnt;
}

// BOJ 13305 greedy 주유소 함수 
    int cost[100001] , dist[100001];
long long solve(int n)
{
    int MinCost = INT_MAX; // int max 로 mincost 초기화 
    long long dist_sum = 0; // -> 지나온거리 * 주유소 비용 = > 총 비용 

    for(int i = 1; i<n;i++)
    {
        if(cost[i] < MinCost) MinCost = cost[i]; // 만약 cost[i] 가 mincost 보다 낮다면 MinCost 교체 
        dist_sum += (long long)MinCost * (long long)dist[i]; // long long 으로 변환해서 비용 추가 
    }

    return dist_sum;  // 총 비용 return 

}


        int n ;
        int max_happy = 0;
        vector<int> health;
        vector<int> happy;
void solve(int idx , int strong , int pleasure)
{
    if(strong <= 0 || idx >= n)
    {
        if(max_happy < pleasure)
        {
            max_happy = pleasure;
        }
        return;
    }

    solve(idx+1,strong-health[idx] , pleasure + happy[idx]);
    solve(idx+1,strong , pleasure);

}

//vscode test

int main()
{
    // BOJ 1436
    {
    // BOJ 1436번 문제 
   /* int n = 0;
   long long startnumber = 666;
   int targetnumber ;
   int cnt = 0;
   int checkcnt = 0;
   string temp = "";
   cin >> targetnumber;
   for(long long i = startnumber ; i < 9999999; i++)
   {

    temp = to_string(i);
    checkcnt = 0;
    for(auto c : temp)
    {
        if(c == '6') checkcnt++;
        else 
        checkcnt = 0;

        if( checkcnt == 3 )
        {
            cnt++;
            break;
        }
        

    }
    if(cnt == targetnumber)
    {
        cout << i ;
        break;
    } 
    else 
    {
        continue;
    }


   }
   */
    }


    // BOJ 2839 greedy 
    {
    // n 킬로의 설탕 배달 , 3킬로 패키지 , 5키로 패키지 두종류 사용가능
    // 가능한 적은수 패키지를 가져간다 , n 킬로를 정확히 운송하는 최소한의 패키지 수 
    // 입력값 n 은 3 <=  N <= 5000
    // n 킬로를 정확이 운송할수없다면 -1 return 
    // 	cin >> N;
	// int ans = 0;
	// while (N>=0) {
	// 	if (N % 5 == 0) {	//가장 큰 수로 나누는게 가장 작은수랑 섞어서 나누는 것보다 유리
	// 		ans += (N / 5);	//나눈 몫을 더한 것이 정답
	// 		cout << ans << endl;
	// 		return 0;
	// 	}
	// 	N -= 3;	//3kg을 빼고 
	// 	ans++;	//가방 하나 늘어남
	// }
	// cout << -1 << endl;
    }
//programmers 주사위 게임 3 

{
// a == b ==c ==d -> 1111* p 
// a == b == c -> (10 * p + q ) sprt 
// a == b , c ==d -> ( a + c ) * | a -c | 
// a == b , q r ->q * r 
// a != b != c != d -> 가장 작은수 
// int solution(int a, int b, int c, int d) {
//     int answer = 0;
//     vector <int> numbers = { a , b ,c ,d };
//     sort(numbers.begin() , numbers.end());
    
//     if( numbers[0] == numbers[3]) answer = 1111* numbers[0]; // 4개 숫자가 모두같음 
//     else if( numbers[0] == numbers[1] && numbers[2] == numbers[3]) answer = (numbers[0] + numbers[2]) * abs(numbers[0] - numbers[2]); // 3개의 숫자가 같음 
//     else if( numbers[1] == numbers[2] && (numbers[0] == numbers[1] || numbers[2] == numbers[3])) answer = pow(10*numbers[1] + (numbers[0] != numbers[1] ? numbers[0] : numbers[3]) ,2);
//     else if( numbers[0] != numbers[1] && numbers[1] != numbers[2] && numbers[2] != numbers[3] ) answer = numbers[0]; // 모두 다른 숫자일때 
//     else
//     {
//         answer = numbers[0] == numbers[1] ? numbers[2] * numbers[3] : (numbers[1] == numbers[2] ? numbers[0] * numbers[3] : numbers[0] * numbers[1]);
//     }
    
//     return answer;
// }

}
 
 
// BOJ 1931 회의실 배정 greedy
// 시작 시간보다 종료시간이 더 중요하게 작용한다 
// vector에 회의 스케줄을 저장하고 각각 스케줄 종료시점에 대해 정렬 ( 종료시점에 대해서만 정렬) 
// time 변수를 활용해서 각각 회의를 저장하고 종료시점이 가장빠른 걸로 초기화 
	{
    // int N, end, begin;

	// vector<pair<int, int>> schedule;

	// cin >> N ;

	// for (int i = 0; i < N; i++)
	// {
	// 	cin >> begin >> end;
	// 	schedule.push_back(make_pair(end, begin)); // end begin pair 로 저장하는것까진 ok 
	// }
	
	// sort(schedule.begin(), schedule.end());
	
	// int time = schedule[0].first; // time 변수 활용 생각못함 
	// int count = 1;
	// for (int i = 1 ;i < N; i++) 
	// {
	// 	if (time <= schedule[i].second )
	// 	{
	// 		count++; // 아예 count 로 return 
	// 		time = schedule[i].first;
	// 	}
	// }

	// cout << count;
    }


    //BOJ 11399
    //인하은행에 ATM은 1대 - N 명의 사람이 줄을 서있다 , 1번부터 N 번까지 번호가메겨진 사람들이 줄서있고 
    // i 번 째 사람이 돈을 인출하는데 걸리는 시간은 P_i분 
    // 줄을 서는 순서에 따라 돈을 인출하는데 필요한 시간으이 합이 달라진다 
    // 총 5명이 있고 p1 =3 , p2 = 1 , p3 = 4 , p4 = 3 ,p5 = 2 
    // 1, ,2 ,3 ,4,5 순으로 줄을 선다면 1번은 3분만에 돈을 뽑을수있고 2번은 1번이 뽑을때까지 기다려야하므로 3 + 1 분 총 4분이걸림 
    // 줄을 서있는 사람의 수 N 과 돈을 인출하는데 걸리는 시간 Pi 가 주어질때 각 사람이 인출하는데 필요한 시간의 합의 최솟값
    {
    // int N , P_i;
    // vector <pair<int,int>> times;
    // cin >> N;
    // for(int i = 0 ; i < N ; i++) 
    // {
    //     cin>>P_i;
    //     times.push_back({P_i ,i});
    // }
    // int total = 0;
    // sort(times.begin(),times.end());
    // for(auto n : times) cout << n.first << " , " << n.second << endl;

    // vector <int> numbers;
    // int beforenumber = 0;


    // for(int i = 0 ; i < times.size(); i++)
    // {
    //     if(beforenumber == 0)
    //     {
    //         numbers.push_back(times[i].first);
    //         beforenumber = times[i].first;
    //         continue;
    //     }
    //     else
    //     {
    //         numbers.push_back(times[i].first + beforenumber);
    //         beforenumber += times[i].first;
    //     }
        


    // }
    // for(auto n : numbers) total += n;
    // cout << total;
    // return 0;
    }
     // greedy 
     
     //1541 잃어버린 경로
     // 양수와 + , - , 그리고 괄호로 식을 만들었다가 괄호를 모두 지웠다 
     // 그리고 괄호를 적절히 쳐서 이 식의 값을 최소로 만들려고한다 
     // 최소로 만드는 프로그램 작성 
     //식은 0 ~ 9 , + , - 만으로 이루어져있고 처음과 마지막은 숫자 , 연속해서 2개의 연산자 x , 5자리보다 많이 연속되는 숫자는 없다 
     // 수는 0으로 시작가능 , 입력으로 주어지는 식의 길이는 50보다 작거나 같음 -> for문을 2개이상 사용가능 
     // 기본적인 알고리즘 ->  ' - ' 뒤에 나오는 식을 전부 뺄셈 처리하면 식의 최솟값이 나온다 
     // isMinus 변수를 활용해보자 
     {
    //  string input ;
    //  cin >> input;

    //  string num;
    //  bool isMinus = false;
    //  int answer = 0;

    //  for( int i = 0 ; i <= input.size() ;i++)
    //  {
    //     if(input[i] == '-' || input[i] == '+' || i == input.size()) // ?? i == input.size()는 무슨 예외처리 ?
    //     {
    //         if(isMinus) 
    //         {
    //             answer -= stoi(num);
    //             num = "";

    //         }
    //         else 
    //         {
    //             answer += stoi(num);
    //             num = "";
    //         }
            
    //     }
    //     else
    //     {
    //         num += input[i];
    //     }

    //     if( input[i] == '-')
    //     {
    //         isMinus = true;
    //     }
    //  }
    //  cout << answer;
     }
    
    // programers lv2 그리디 조이스틱 
    {
        /*
        #include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

// askii A = 65 , Z = 90 


int solution(string name) {
    int answer = 0;
    string clone(name.size() , 'A');
    
    
    vector <int> Move(name.size() , 0);
    int n= name.size();
    
    int turn = n-1; //한번에 움직일수있는 최대거리 
    
    
    int temp = 0;
    
    for(int i = 0 ; i< Move.size() ; i++)
    {
        temp = 91 - name[i]; // A에서 한번움직여야하니깐 
        if(temp > 13 )Move[i] = name[i] - clone[i]; 
        else if( temp <= 13) Move[i] = 91 - name[i] ;
        answer+= Move[i];
        

        int ind = i + 1;
        while ( ind < n && name[ind] == 'A') ind++;
        
        turn = min(turn , i + n - ind + min( i , n - ind));
        
        
    
    }
    answer += turn;
    

    
    
    
    
    return answer;
}
        */
    }


    //programmers lv 1 그리디 체육복 
     {
        /*
        #include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
//  n 번은 n-1 or n + 1 한테만 빌려줄수있음 
//최대한 많은 학생이 들어야함 , 체육복없는번호 lost , 전체학생수  n , 여벌체육복 reserve
// 전체 학생 2이상 30 이하 , 도난당한 학생은 1이상 n이하 , 중복 x 
// 


int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    int give1 ;
    int give2 ;
    
    vector<int> student(n,1);
    
    for(int i = 0 ; i < reserve.size() ; i++)
    student[reserve[i]-1] += 1; //index직접접근이니깐 -1 씩 
    
    for(int j = 0 ; j < lost.size() ; j++)
    student[lost[j]-1] -=1;
    
    for(int l = 0 ; l < student.size() ; l++)
    { 
        if(student[l] > 1)
        {
            if(student[l-1] == 0 && l != 0)
            {
                student[l] -=1;

                student[l-1] +=1;
            }
            else if(student[l+1] ==0 && l+ 1 < student.size())
            {
                student[l] -=1;

                student[l+1] +=1;
            }
        }


    }
    for(auto k : student)
    {
        if( k >= 1) answer++;
    }


    
    
    return answer;
}
        */
    }
    
    
    // 알고리즘 수업 DFS 
    // BOJ 실버 2 24479
    /* N 개의 정점과 M 개의 간선 의 무방향 그래프 , 1번ㄱ부터 N 번까지 , 모든간선 가중치는 1
    정점 R 에서 시작해서 깊이 우선 탐색으로 노드를 방문 , 노드 방문 순서출력 
    인접 접점 은 오름차순 
    dfs ( V ,E ,R) { # V: 정점 집합 , E: 간선집합 , R : 시작접점 
             visited[R] <- Yes
                for each x 가 E(R) 에 보함 , 즉 정점 R의 인접정접의 집함 
                if ( visitied [x] = No ) then (V, E ,x) ; }*/
 /* 첫쨰줄에 정점의수 N  ( 5 <= N <= 100,000) , 간선의 수 M ( 1<= M <= 200,000) , 시작정점 R ( 1 <= R <= N)
  첫째 줄부터 N 개의 줄에 정수를 한개씩 출력 , i 번째 줄에는 정점 i 의 방문순서 출력 시작정점 방문순서는 1 
  시작 정점에서 방문할수없는경우 0 을 출력 */



        cin >> n;

        for(int i = 0 ; i < n ; i++)
        {
            int b ;
            cin >> b;
            health.push_back(b);
        }

        for(int i = 0 ; i < n ; i++)
        {
            int c;
            cin >> c;
            happy.push_back(c);
        }

        solve(0,99,0);
        cout << max_happy<<endl;






  

    


   

    return 0;







}