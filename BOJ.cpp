#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

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

//vscode test
int N;
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


    // BOJ 2839
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
 
 
// BOJ 1931 회의실 배정
// 시작 시간보다 종료시간이 더 중요하게 작용한다 
// vector에 회의 스케줄을 저장하고 각각 스케줄 종료시점에 대해 정렬 ( 종료시점에 대해서만 정렬) 
// time 변수를 활용해서 각각 회의를 저장하고 종료시점이 가장빠른 걸로 초기화 
	int N, end, begin;

	vector<pair<int, int>> schedule;

	cin >> N ;

	for (int i = 0; i < N; i++)
	{
		cin >> begin >> end;
		schedule.push_back(make_pair(end, begin));
	}
	
	sort(schedule.begin(), schedule.end());
	
	int time = schedule[0].first;
	int count = 1;
	for (int i = 1 ;i < N; i++) 
	{
		if (time <= schedule[i].second )
		{
			count++;
			time = schedule[i].first;
		}
	}

	cout << count;









    







}