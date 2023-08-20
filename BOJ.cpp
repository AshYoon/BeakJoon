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

int solution(int a, int b, int c, int d) {
    int answer = 0;
    vector<int> numbers = { a, b ,c ,d};
    vector <int> test ;
    
    sort(numbers.begin(), numbers.end());
    for(auto n : numbers) cout << n << " ," ;
    cout << endl;
    int p =0,q=0,r=0;
    for(int i = 0 ;i <4;i++)
    {
        test.push_back(check(numbers,numbers[i]));
    }
    for(auto n : test) cout << n << " ," ;
    
    if(test.front() == test.back())
    {
        if(test.front() == 4 ) return 1111 * a; // 모든 숫자가 같을때 
        else if( test.front() == 1 ) return numbers[0]; // 모든숫자가 1개씩 다른 숫자일때 
        else if( test.front() == 2 )  // 모든숫자가 2개씩 일때 
        {
            
            p = numbers.front();
            
            q = numbers.back();

            return (p + q) * abs(p -q);
        }
    }
    else
    {
        vector < pair<int ,int> > check;
        int cnt1 =0 , cnt2 = 0;
        cout << endl;
        for(int i =0;i< 4 ; i++)
        {
            check.push_back(make_pair(numbers[i],test[i]));
            if( test[i] == 1 ) cnt1++;
            else if( test[i] == 2) cnt2++;
            
        }
        for(auto it : check) cout << it.first << " ," << it.second << endl;
        if(cnt1 >= 2 && cnt2 >= 2) // 2개의 숫자가 같은 p , q ,r ( q != r)
        {
            for(auto it : check) 
            {
                
                if( it.second == 1 && q == 0) 
                {
                    q = it.first;

                    continue;
                }
                else if( it.second == 1  && q != 0) r = it.first;
                
                
            }
            
            return q * r;
        }
        else      // 세 주사위가 같고 나머지 다른주사위가 q ( p!= q) 라면 ( 10 x p + q)^2
        {
            cout << "test2" << endl;
            auto it1 = find( test.begin(), test.end() , 3);
            auto it2 = find( test.begin(), test.end() , 1);
            p = numbers[*it1-1] , q = numbers[*it2-1]; // 인덱스 접근이라 -1씩 해준다 ? 
            
            answer = (10 * p) + q;
            return pow(answer , 2);
        }
    }
        
    return 567568;
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

    // a == b ==c ==d -> 1111* p 
// a == b == c -> (10 * p + q ) sprt 
// a == b , c ==d -> ( a + c ) * | a -c | 
// a == b , q r ->q * r 
// a != b != c != d -> 가장 작은수 







    







}