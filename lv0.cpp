#include <string>
#include <vector>
#include <iostream>
#include <unordered_map>
#include <stack>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <unordered_set>
#include <list>
#include <queue>
//#include <bits/stdc++.h>


using namespace std;
// 전국 선발 고사 
//0번부터 n-1 번까지 선발고사 , 등수높은 3명선발 ( 참여가능한 )
//등수배열 rank , 참여가능여부 목록 attendance , 높은순서대로 a,b,c 
// 10000 * a + 100 * b + c를 return 
//적어도 attendance의 3 원소는 true 
// int solution(vector<int> rank, vector<bool> attendance) {
//     int answer = 0;
//     int a = 0 , b = 0 , c = 0;
//     vector<int> numbers;
//     std::vector<pair<int,bool>> temp;

//     for( int i = 0 ; i < rank.size() ; i++)
//     {
//             temp.push_back(make_pair(rank[i] , attendance[i]));
//     }


    
//     int cnt = 1;
    
//     while(numbers.size() != 3)
//     {
        
//         for(int i = 0 ; i < temp.size() ; i++)
//         {
//              if(numbers.size() == 3)
//                 break;
            
//             if(temp[i].first == cnt )
//             {
//                 if(temp[i].second )
//                 {
//                      numbers.push_back(i);
//                      cnt++;
//                 }
//                 else
//                 {
//                     cnt++;
//                 }

//             }
//         }
//     }
    
//     for(auto k : numbers)
//         cout << k << "  , ";

//     return numbers[0] * 10000 + numbers[1] * 100 + numbers[2] ;

// }


// 배열 요소 지우기 
// vector<int> solution(vector<int> arr, vector<int> delete_list) {
//     vector<int> answer;
    
//     int cnt = 0;
//     for(int i = 0 ; i < arr.size() ; i++)
//     {
//             auto p = find(delete_list.begin() , delete_list.end(), arr[i]);
//         if(p != delete_list.end())
//         {

//         }
//     }
    
    
//     return answer = arr;
// }

//달리기 경주 
// vector<string> solution(vector<string> players, vector<string> callings)
// {
//     vector<string> answer;
//     map<int, string> m1;
//     map<string, int> m2;
//     for(int i=0;i<players.size();i++)
//     {
//         m1[i] = players[i]; // 등수 , 이름 
//         m2[players[i]] = i; // 이름 , 등수 
//     }
//     for(int i=0;i<callings.size();i++)
//     {
//         int cur_idx = m2[callings[i]];//호출 |  선수 이름, 순위 / 순위를 알아냄 
//         string change = m1[cur_idx - 1];//앞선  선수 이름, 순위 / 바꿀 선수 순위 
//         m1[cur_idx - 1] = callings[i]; // swap 과정 
//         m1[cur_idx] = change;
//         m2[callings[i]] = cur_idx - 1;
//         m2[change] = cur_idx;
//     }
//     for(auto c : m1) answer.push_back(c.second);
//     return answer;
// }


// 추억 점수 programmers 
// vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
//     vector<int> answer;
//     map<string , int> mymap;
//     for(int i = 0 ; i < name.size() ; i++)
//     {
//         mymap.insert(make_pair(name[i] , yearning[i]));
//     }
//     int temp = 0;
//     for(int i = 0 ; i <photo.size() ; i++)
//     {
//         for(int j = 0 ; j < photo[i].size() ; j++)
//         {
//             temp += mymap[photo[i][j]];
//         }
//         answer.push_back(temp);
//         temp = 0;
//     }
    
//     return answer;
// }


// 햄버거 만들기 ( stack ) 
// int solution(vector<int> ingredient) {
//     int answer = 0;
//     vector<int> burger = {-1};
//     for(int n : ingredient)
//     {
        
//         if(burger.back() == 1 && n == 2) burger.back() = 12;
//         else if(burger.back() == 12 && n == 3 ) burger.back() = 123;
//         else if(burger.back() == 123 && n == 1) burger.pop_back() , answer++;
//         else
//             burger.push_back(n);
//     }
    
    
//     return answer;
// }

// 대충 만든 자판
// vector<int> solution(vector<string> keymap, vector<string> targets) {
//   vector<int> answer;
    
//     for(int i = 0 ; i < targets.size() ; i++)
//     {
//         answer.push_back(0);
//         for(int j = 0 ; j < targets[i].size() ; j++)
//         {
//             char c = targets[i][j]; // 타겟문자 
//             int type = 101 , flag = 1;
//             // 1 <= keymap의 원소길이 <= 100 이고 , flag 는 타겟문자를 못받았을때를 위한 플래그 
//             for(int k = 0 ; k < keymap.size() ; k++)
//             {
//                 for(int l = 0 ; l < keymap[k].size() ;l++)
//                 {
//                     if(keymap[k][l] == c)
//                     {
//                         type = min(type, l +1); // 둘중 작은 타입을 저장 
//                         flag = 0; // 타입 가능한 문자면 false  
//                         break;
//                     }
//                 }
//             }
//             if (flag) // if 타입이 한번이라도 이루어지지않았다면 
//             {
//                 answer[i] = -1;
//                 break;
//             }
//             answer[i] += type;
//         }
        
//     }

    
    
    
//     return answer;
// }

//숫자짝궁 ( 해시 ) 
// string solution(string X, string Y) {
//     string answer = "";
    
//     map<char,int> mX;
//     map<char,int> mY;
    
//     for(auto &c : X) mX[c]++;
    
//     for(auto &c : Y) mY[c]++;
    
//     for(int i = 0 ; i < X.size() ; i++)
//     {
//         if(mY[X[i]] > 0 )
//         {
//             answer+= X[i];
//             mY[X[i]] -=1;
//         }
//     }
    
//     sort(answer.begin() , answer.end() , greater<>());
//     if(answer.size() == 0) return answer = "-1";
//     else if(answer[0] == '0') return answer = "0";
//     else return answer;

// }



//성격 유형 검사하기 ( 2022 kakao tech internship)
//같은경우 사전순으로 빠른 유형 , askii 작은 게 먼저 와야함 
// 1 -> N +=3  , 7 -> A+= 3 , 4 - n = | a | ; 
// 4 - 점수 를 해서 만약 양수면 survey[i][0] += abs|4-점수|;
// string solution(vector<string> survey, vector<int> choices) {
//     string answer = "";
    
//     map<char,int> mymap;
//     for(int i = 0 ; i < survey.size() ; i++)
//     {
//         int score = 4-choices[i];
//         if(score > 0)
//         {
//             mymap[survey[i][0]] += abs(score);
//         }
//         else
//         {
//             mymap[survey[i][1]] += abs(score);
//         }
//     }
    
//     answer += mymap['R'] >= mymap['T'] ? 'R' : 'T';
//     answer += mymap['C'] >= mymap['F'] ? 'C' : 'F';
//     answer += mymap['J'] >= mymap['M'] ? 'J' : 'M';
//     answer += mymap['A'] >= mymap['N'] ? 'A' : 'N';
    
    
//     return answer;
// }


//덧칠하기 ( 그리디 )
//n 미터의 벽 , 1미터씩 n 개로 구역나누고 ,  1번부터  n 번까지 번호
//롤러의 길이는 m 미터 section은 다시 칠해야하는 구역 
// 1미터단위 로 n 개의 벽이있다 



// int solution(int n, int m, vector<int> section) {
//     int answer = 0;
    
//     int cur = 0;
//     for(int i = 0 ; i < section.size() ; i++)
//     {
//         if(cur > section[i])
//         {
//             continue;
//         }
        
//         cur = section[i]+ m ;
//         answer++;
        
//     }
    
    
//     return answer;
// }


//삼총사 ( 3중 for문 ) 
//3명이 합쳐서 0 이 되면 3총사 
// int solution(vector<int> number) {
//     int answer = 0;
//     for(int i = 0 ; i < number.size() ; i++)
//     {
//         for(int j = i ; j < number.size() ; j++)
//         {
//             if(i == j) continue;
//             for(int k = j ; k < number.size() ; k++)
//             {
//                 if( j == k || i == k)
//                     continue;
                
//                 if(number[i] + number[j] + number[k] == 0)
//                 {
//                     answer++;
//                 }
//             }
//         }
//     }
//     return answer;
// }


//신고 결과 받기 
// 만약 신고되서 정지당하면 처리결과메일 발송 
// vector<int> solution(vector<string> id_list, vector<string> report, int k) {
//     unordered_map<string,unordered_set<string>> reportHash;
//     unordered_map<string,unordered_set<string>> resultHash;
    
//     for(string r : report){
//         int pos = r.find(' '); // 공백찾기
//         string user = r.substr(0,pos); // 문자열 자르기로 구분 
//         string bad = r.substr(pos+1);
//         reportHash[user].insert(bad);
//         resultHash[bad].insert(user);
//     }
//         vector<int> answer(id_list.size()); // 기본값으로 0 으로 생성 
//     for(int i = 0 ; i < id_list.size() ; ++i){
//         string user = id_list[i];
//         auto it = reportHash.find(user);
//         if(it == reportHash.end()) continue;//만약 없다면 
        
//         for(string bad : it->second) // first -key , second value , map이니깐
//         {
//             if(resultHash[bad].size() >= k ) // size가 2이상이면 정지니깐 
//             {
//                 answer[i]++;
//             }
//         }
//     }
    
    

//     return answer;
// }


//완주하지 못한 선수 
// string solution(vector<string> participant, vector<string> completion) {

    
//     sort(participant.begin() , participant.end());
//     sort(completion.begin(), completion.end());
    
//     for(int i = 0 ; i < completion.size() ; i++)
//     {
        
//         if(participant[i] != completion[i])
//         {
//             return participant[i];
//         }
//     }

//     return participant[participant.size()-1];;
// }

// 공원 산책 (구현)
// vector<int> solution(vector<string> park, vector<string> routes) {
//     vector<int> answer;
//     int Width = park[0].length();
//     int Height = park.size();
//     pair<int, int> position; 
    
//     for(int i = 0 ; i < park.size() ; i++)
//     {
//         for(int j = 0 ; j < park[i].size() ; j++)
//         {
//             if( park[i][j] == 'S')
//             {
//                 position = make_pair(i,j);
//                 park[i][j] = 'O'; // 다시 지나갈수도있으니깐 O 로 바꿔주자 
//                // cout <<position.first << " " << position.second << endl;
//                             break;
//             }        
//         }
//     }
//     bool Isbreak = false;
//     for(string s : routes)
//     {
//         Isbreak = false;
//         int pos = s.find(' ');
//         string direction = s.substr(0,pos);
//         int strength = stoi(s.substr(pos+1));
//         pair<int,int> temp;
//         temp = position;    
//         for(int i = 0 ; i < strength ; i++)
//         {
//             if(direction[0] == 'E')
//             {
//                 if(park[temp.first][temp.second+1] == 'O' && temp.second + 1 < Width)
//                 {
//                     temp.second += 1;
//                 }
//                 else
//                 {
//                     Isbreak = true;
//                     break;
//                 }
//             }
//             else if(direction[0] == 'W')
//             {
//                 if(park[temp.first][temp.second-1] == 'O' && temp.second - 1 >= 0)
//                 {
//                     temp.second -= 1;
//                 }
//                 else
//                 {
//                     Isbreak = true;
//                     break;
//                 }
//             }
//             else if(direction[0] == 'S')
//             {
//                 if(park[temp.first+1][temp.second] == 'O' && temp.first + 1 <  Height )
//                 {
//                     temp.first += 1;
//                 }
//                 else
//                 {
//                     Isbreak = true;
//                     break;
//                 }            
//             }
//             else if(direction[0] == 'N')
//             {
//                 if(park[temp.first-1][temp.second] == 'O' && temp.first - 1 >= 0)
//                 {
//                     temp.first -= 1;
//                 }
//                 else
//                 {
//                     Isbreak = true;
//                     break;
//                 }            
//             }  
//         }
//         position = Isbreak ? position : temp ;
//     } 
//     answer.push_back(position.first);
//     answer.push_back(position.second);
//     return answer;
// }


// 크레인 인형뽑기 ( 프로그래머스 lv 1 )
// int solution(vector<vector<int>> board, vector<int> moves) {
//     int answer = 0;

//     vector<stack<int>> stackboard;
//     stack<int> bag;
//     bag.push(0);
//     stack<int> temp;
//     for(int i = 0 ; i < board.size() ; i++)stackboard.push_back(temp);

//     for(int i = board.size()-1 ; 0 <= i; i--)
//     {
//         for(int j = 0 ; j < board.size(); j++)
//         {
//             if(board[i][j] != 0)
//             stackboard[j].push(board[i][j]);
//         }
//     }
    

//     int location;
//     int puppet;
//    for(int i = 0 ; i < moves.size() ; i++)
//    {
//        puppet = -1;
//        location = moves[i] - 1;
//        if(!stackboard[location].empty())
//        {
//            puppet = stackboard[location].top();
//            stackboard[location].pop();
//        }
//        else
//            continue;      
//        if(bag.top() != puppet) bag.push(puppet);
//        else if(bag.top() == puppet) 
//        {
//           bag.pop();
//           answer++;
//        }       
//    }  
//     return answer*2;
// }

// 키패드 누르기 
// 왼손 오른솜 엄지
// 왼손 start * , 오른손엄지 start # 
//엄지는 상하좌우 4가지 , 한칸은 1 
//1,4,7은 왼 , 369는 오 , 2580은 둘중에 가까운거 거리가같다면 오른손잡이는 오 , 왼손잡이는 왼 
// 누를 번호가담긴배열 numbers , 
// 

// string solution(vector<int> numbers, string hand) {
//     string answer = "";
//     int ll = 10 , rl = 12 ; // left right location 
//     int keypad;
//     string H;
//     if(hand[0] == 'r') H += 'R';
//         else H+='L';
//     for(int i = 0 ; i < numbers.size() ; i++)
//     {
//         keypad = numbers[i];
//         if(numbers[i] == 3 || numbers[i] == 6 || numbers[i] == 9) answer += 'R' , rl = numbers[i];
//         else if(numbers[i] == 1 || numbers[i] == 4 || numbers[i] == 7) answer+= 'L' , ll = numbers[i];
//         else
//         {
//             if(numbers[i] == 0) numbers[i] = 11;
//            
//             int leftlen = abs(numbers[i]-ll)/3 + abs(numbers[i]-ll)%3;
//             int rightlen = abs(numbers[i]-rl)/3 + abs(numbers[i]-rl)%3;
//            
//             if(leftlen < rightlen)
//             {
//                 answer += "L";
//                 ll = numbers[i];
//             }
//             else if(leftlen > rightlen)
//             {
//                 answer += "R";
//                 rl = numbers[i];
//             }
//             else
//             {
//                 if(hand == "left")
//                 {
//                     answer += "L";
//                     ll = numbers[i];
//                 }
//                 else
//                 {
//                     answer += "R";
//                     rl = numbers[i];
//                 }
//             }
//            
//            
//         }
//     }
//    
//    
//     return answer;
// }


// int arr[100];
// void insert(int idx , int num , int arr[] , int& len){
//     len++;
//     for(int i = len ; i > 0 ; i--)
//     {
//             arr[i] = arr[i-1];
//     }
//     arr[idx] = num;
// }
// void erase (int idx , int arr[] , int &len){
//     for(int i = 0 ; i < len ; i++)
//     {
//         if(i == idx && i + 1 < len)
//         {
//             arr[i] = arr[i+1];
//             idx++;
//         }
//     }
//     len--;
// }
// void printArr(int arr[] , int&len)
// {
//     for(int i = 0 ; i < len;i++) cout << arr[i] << ' ' ;
//     cout << "\n\n";
// }
// void insert_test(){
//   cout << "***** insert_test *****\n";
//   int arr[10] = {10, 20, 30};
//   int len = 3;
//   insert(3, 40, arr, len); // 10 20 30 40
//   printArr(arr, len);
//   insert(1, 50, arr, len); // 10 50 20 30 40
//   printArr(arr, len);
//   insert(0, 15, arr, len); // 15 10 50 20 30 40
//   printArr(arr, len);
// }
// void erase_test(){
//   cout << "***** erase_test *****\n";
//   int arr[10] = {10, 50, 40, 30, 70, 20};
//   int len = 6;
//   erase(4, arr, len); // 10 50 40 30 20
//   printArr(arr, len);
//   erase(1, arr, len); // 10 40 30 20
//   printArr(arr, len);
//   erase(3, arr, len); // 10 40 30
//   printArr(arr, len);
// }
// int freq[26]; // 전역으로 선언하면 0 으로 자동초기화 
// bool solution(int arr[] , int length){
//     unordered_map<int , int> hash;
//     for(int i = 0 ; i < length ; i++)
//     {
//         if(hash[100 - arr[i]] != 0 )
//         {
//             return true;
//         }
//         else
//         {
//             hash[arr[i]]++;
//         }
//     }
//     return false;
// }

//BOJ 3273 SumX 
// int a[1000001] = {};
// bool occur[2000001];
// int n , x;
// int main()
// {
//     ios::sync_with_stdio(0),cin.tie(0);// 입출력 시간 줄이는 코드 
//     // insert_test();
//     // erase_test();
//     int ans = 0;
//     cin >> n;
//     for(int i = 0 ; i < n ; i++) cin >> a[i];
//     cin >> x;
//     for(int i = 0 ; i < n ; i ++)
//     {
//         if(x-a[i] > 0 && occur[x-a[i]]) ans++;
//         occur[a[i]] = true;
//     }
//     cout << ans << '\n';
// }

    // flying safely 9372
    // int T;
    // cin >> T;
    // for(int i = 0 ; i < T ; i++)
    // {
    //     int node , edge , a , b;
    //     cin >> node >> edge;
    //     for(int j = 0 ; j < edge ; j++)
    //     {
    //         cin >> a >> b;
    //     }
    //     cout << node -1 << '\n';
    // }

// boj 13414
//     vector<string> a;
//     string temp;
//     unordered_map<string , int> hash;
//     int K , L;
//     cin >> K >> L;
//     for(int i = 0 ; i< L ; i++)
//     {
//         cin >> temp;
//         a.push_back(temp);
//         hash[temp]++;
//     }
//    // cout << "-----------------------------" << "\n";
//     for(int i = 0 ; i< K ; i++)
//     {
//         if(i==a.size())
//         break;
//        if(hash[a[i]] == 1)
//         {
//             cout << a[i] <<"\n";
//         }
//         else
//         {
//             K++;
//             hash[a[i]]--;          
//         }
//     }


    //boj1406 에디터  영어 소문자만 기록 , 커서 , 길이가 L인 문자열  , 커서는 L+1까지 위치가능 
    // L, 커서 왼쪽으로한칸 , D , 커서 오른쪽으로 한칸 , B  커서 왼쪽 문자 삭제 , P$ , $라는 문자를 커서 왼쪽에추가 
    // list<char> lt;
    // string s;
    // cin >> s;
    // int N = s.length();
    // for (int i = 0; i < N; i++)
    //     lt.push_back(s[i]);
    // list<char>::iterator t = lt.end(); // 첫위치는 해당 배열의 끝 + 1 즉 insert하면 끝에 추가 -- 하면 끝에 커서가 가는것 
    // int M;
    // cin >> M;
    // for (int i = 0; i < M; i++)
    // {
    //     char temp;
    //     cin >> temp;
    //     if (temp == 'P')
    //     {
    //         char add;
    //         cin >> add;
    //         lt.insert(t, add);
    //     }
    //     else if (temp == 'L')
    //     {
    //         if (t!=lt.begin())
    //         {
    //             t--;
    //         }
    //     }
    //     else if (temp == 'B')
    //     {
    //         if (t != lt.begin())
    //         {
    //            t--;
    //            t = lt.erase(t);
    //         }
    //     }
    //     else if (temp == 'D')
    //     {
    //         if (t != lt.end())
    //         {
    //             t++;
    //         }
    //     }
    // }
    // for (auto i : lt) cout << i ;

//문제 원형연결리스트 내의 임의의 노드 하나가 주어졌을때 해당 list 길이를 효율적으로 구하는방법 ? 같은노드가 나올때까지 순회한다? O 

    //boj 10828 스택 구현 
    // const int MX = 1000005;
    // int pos =  0;
    // int st[MX] = {};
    // int N;
    // cin >> N;
    // for(int i = 0 ; i < N ;i++)
    // {
    //     string temp;
    //     cin >> temp;
    //     if(temp == "push")
    //     {
    //         int add ;
    //         cin >> add;
    //         st[pos] = add;
    //         pos++;
    //     }
    //     else if( temp == "top")
    //     {
    //         if(pos == 0) cout << "-1" << '\n';
    //         else
    //         {
    //             cout << st[pos-1] << '\n';
    //         }
    //     }
    //     else if( temp == "size")
    //     {
    //         cout << pos << '\n';
    //     }
    //     else if( temp == "empty")
    //     {
    //         if(pos == 0) cout << "1" << '\n';
    //         else
    //         cout<< '0'<<'\n';
    //     }
    //     else if( temp == "pop")
    //     {
    //         if( pos == 0)
    //         {
    //             cout << "-1" << '\n';
    //         }
    //         else 
    //         {
    //             cout << st[pos-1] << '\n';
    //             pos--;
    //         }
    //     }
    // }



// 요격 시스템 (그리디)
// int solution(vector<vector<int>> targets) {
//     int answer = 0;
//     sort(targets.begin(),targets.end() , [](vector<int>& a , vector<int>& b) { return a[1] < b[1];}); // 이게 핵심 
//     pair<int, int> range = {targets[0][0] , targets[0][1] };
//     // 현재 e 값을 기준으로 정렬했으니깐 만약에 n번째의 e 보다 큰값의 s 값이 들어온다면 해당 미사일은 포함되지않음 
//     int minVal = -1;
//     for(int i = 0 ; i < targets.size() ; i ++)
//     {
//          pair<int, int> range = {targets[i][0] , targets[i][1] }; 
//         if(minVal <= range.first)
//         {
//             answer++;
//             minVal = range.second;
//         }
//     } 
//     return answer;
// }

//1926 BOJ ( BFS )
// #define X first
// #define Y second
// int board[502][502];
// bool vis[502][502];
// int dx[4] = { 1 , 0 , -1 , 0};
// int dy[4] = {0 , 1 , 0 , -1};
// {
//         int m , n;
//     cin >> n >> m;
//     for(int i = 0 ; i < n ; i++)
//         for(int j = 0 ; j < m ; j++)
//         {
//             cin >> board[i][j];
//         }
//         int num = 0 ;  // 그림의 수 
//         int mx = 0 ; // 그림의 최댓값
//         for(int i = 0 ; i < n ; i++){
//             for(int j = 0 ; j < m ; j++){
//                 if(board[i][j] == 0 || vis[i][j]) continue;
//                 num++;
//                 queue<pair<int,int>> q;
//                 vis[i][j] = 1;
//                 q.push({i,j});
//                 int area = 0;
//                 while(!q.empty())
//                 {
//                     pair<int,int> cur = q.front() ; q.pop();
//                     area++;
//                     for(int dir = 0 ; dir < 4 ; dir++)
//                     {
//                         int nx = cur.X + dx[dir];
//                         int ny = cur.Y + dy[dir];
//                         if(nx <  0 || nx >= n || ny < 0 || ny >= m) continue;
//                         if(vis[nx][ny] || board[nx][ny] != 1) continue;
//                         vis[nx][ny] = 1;
//                         q.push({nx,ny});
//                     }                  
//                 }
//                 mx = max(mx,area);
//             }
//         }
//         cout << num << '\n' << mx;
// }

// BOJ 1697 숨바꼭질 ( BFS 선형)
// {
//     int moves[3] = { -1 , 1  , 2};
//     int board[100002];
//     int n , m;
//         ios::sync_with_stdio(0);
//         cin.tie(0);
//         cin >> n >> m;
//         if(n == m) // 0 예외처리 
//         {
//             cout << "0" << '\n';
//             return 0;
//         }
//         fill(board, board + 100001 , -1);
//         queue<int> Q;
//         board[n] = 0 ;
//         Q.push(n);
//         while(!Q.empty())
//         {
//             int cur = Q.front(); Q.pop();
//             for(int i = 0 ; i < 3 ; i++)
//             {
//                 int np = cur + moves[i];
//                 if(i == 2 ) np = cur * moves[i];
//                 if( np < 0 || np >= 100002) continue;
//                 if(board[np] != -1 ) continue;
//                 if(np == m )
//                 {
//                     cout << board[cur] + 1 << '\n';
//                     return 0;
//                 }
//                 board[np] = board[cur] + 1;
//                 Q.push(np);
//             }
//         }
//         return 0;
// }

//BOJ 4179 불 ! ( BFS )
// {
// int N , M;
// #define X first
// #define Y second
// int dx[4] = {-1 , 1 , 0,0 };
// int dy[4] = { 0 , 0 , 1, -1};
// string board[1002];
// int dist[1002][1002];
// int firedist[1002][1002];
// int main()
// {   
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     // board에 넣으면서  J 와 F 의 위치를 찾고 
//     // bfs를 의 dir을 돌릴때 J와 F를 같이 돌려서 만약 만나면 impossible ? 
//     // 만약 J의 bfs를 돌릴때 탈출에 성공하게되면 바로 return ? 
//     // 해답 , fire bfs를 먼저 돌려서 해당 firedist 배열을 바탕으로 
//     // jihoon bfs를 돌려서 fire보다 값이 적은곳만 돌아다닐수있게 조건을 설정하고 만약 N 혹은 M 에 도달한다면 
//     // dist[cur.X][cur.Y] + 1 값을 해줘서 return 하면 탈출값이 나오고 만약 탈출을 못하고 bfs가 끝나게될경우 
//     // 해당 경우는 탈출이 불가능하니 "IMPOSSIBLE" 을 출력하면 된다 
//     pair<int, int> jihoon;
//     pair<int, int> fire;
//     cin >> N >> M;
//     for(int i = 0 ; i < N ;i++) fill(dist[i],dist[i]+M,-1); // -1로 배열 초기화 
//
//     for(int i = 0 ; i< N ; i++) fill(firedist[i],firedist[i]+M,-1);
//
//     for(int i = 0 ; i < N ;i++)
//         cin >> board[i];
//
//     queue<pair<int,int>> Q1;
//     queue<pair<int,int>> Q2;
//     for(int i = 0; i < N ;i++) // 불의 시작점이 여러개일경우 동시에 시작해야하니 해당 시작점을 미리 넣어줘야한다 
//     {
//         for(int j = 0 ; j < M ; j++)
//         {
//             if(board[i][j] == 'J') 
//             {
//                 jihoon = {i, j};
//                 Q2.push({i,j});
//             }
//             if(board[i][j] == 'F') 
//             {
//                 firedist[i][j] = 0;
//                 Q1.push({i,j});
//             }
//         }
//     }
//     //fire부터 
//     //firedist[fire.X][fire.Y] = 0;
//     //Q.push({fire.X,fire.Y});
//     while(!Q1.empty())
//     {
//         pair<int,int> cur = Q1.front();Q1.pop();
//         for(int dir = 0 ; dir < 4 ; dir++)
//         {
//             int nx = cur.X + dx[dir];
//             int ny = cur.Y + dy[dir];
//             if(nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
//             if(board[nx][ny] == '#' || firedist[nx][ny] >= 0 ) continue;
//
//             firedist[nx][ny] = firedist[cur.X][cur.Y] + 1;
//             Q1.push({nx,ny});
//         }
//     }
//     for(int i = 0 ; i < N ;i++)
//     {
//         for(int j = 0 ; j < M ;j++)
//         {
//             cout << firedist[i][j] << " ";
//         }
//         cout << '\n';
//     }
//     int ans = 0;
//     dist[jihoon.X][jihoon.Y] = 0;
//     //Q.push({jihoon.X , jihoon.Y});
//     while(!Q2.empty())
//     {
//         pair<int,int> cur = Q2.front() ; Q2.pop();
//         for(int dir = 0; dir < 4 ; dir++)
//         {
//             int nx = cur.X + dx[dir];
//             int ny = cur.Y + dy[dir];
//             if(nx < 0 || ny < 0 || nx >= N || ny >= M )
//             {
//                 cout << dist[cur.X][cur.Y] + 1 << '\n';
//                 return 0;
//                 ans = dist[cur.X][cur.Y] + 1;
//             }
//             if(board[nx][ny] == '#' || dist[nx][ny] >= 0) continue;
//             if(firedist[nx][ny] != -1 && firedist[nx][ny] <= dist[cur.X][cur.Y] + 1) continue;
//             dist[nx][ny] = dist[cur.X][cur.Y] + 1;
//             Q2.push({nx,ny}); 
//         }
//     }
//     for(int i = 0 ; i < N ;i++)
//     {
//         for(int j = 0 ; j < M ;j++)
//         {
//             cout << dist[i][j] << " ";
//         }
//         cout << '\n';
//     }
//     ans == 0 ? cout << "IMPOSSIBLE" : cout << ans ;
//     //cout << "IMPOSSIBLE" << '\n';
//     return 0;
// }

// BOJ 2178 미로찾기 ( bfs) 

// #define X first
// #define Y second
// int dx[4] = {0 , 0 , -1 , 1};
// int dy[4] = {1 , -1 , 0 , 0};
// int dist[102][102];
// string board[102];
//     cin >> N >> M;
//
//     for(int i = 0 ; i < N ; i++)
//         cin >> board[i];
//
//     for(int i = 0 ; i < N ;i++) fill(dist[i],dist[i]+M,-1); // -1로 배열 초기화 
//
//     for(int i = 0 ; i < N ; i++)
//     {
//         for(int j = 0 ; j < M ; j++)
//         {
//             cout << board[i][j] << " " ;
//         }
//         cout << '\n';
//     }
//     queue<pair<int,int>> q;
//     dist[0][0] = 0;
//     q.push({0,0});
//     while(!q.empty())
//     {
//         pair<int,int> cur = q.front(); q.pop();
//         for(int dir = 0 ; dir < 4 ; dir++)
//         {
//             int nx = cur.X + dx[dir];
//             int ny = cur.Y + dy[dir];
//             if(nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
//             if(dist[nx][ny] >= 0 || board[nx][ny] != '1') continue;
//             dist[nx][ny] = dist[cur.X][cur.Y] + 1;
//             q.push({nx,ny});
//             //cout << nx << " " << ny << " " << '\n';
//         }
//     }
//     cout << dist[N-1][M-1] + 1 << '\n';

//BOJ 토마토 ( bfs ) 
//  {
//     int N , M;
// #define X first
// #define Y second
// int dx[4] = {-1 , 1 , 0,0 };
// int dy[4] = { 0 , 0 , 1, -1};
// int tomato[1002][1002];
// int dist[1002][1002];
// int main()
// {   
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     cin >>  M >> N;
//     queue<pair<int,int>> Q;
//     for(int i = 0 ; i < N;i++)
//     {
//         for(int j = 0 ; j < M;j++)
//         {
//             cin >> tomato[i][j];
//
//             if(tomato[i][j] == 1) 
//             {
//                 Q.push({i,j});
//             }
//             else if(tomato[i][j] == 0)
//             {
//                 dist[i][j] = -1;
//             }
//         }
//     }
//     while(!Q.empty())
//     {
//         pair<int,int> cur = Q.front() ; Q.pop();
//         for(int dir = 0 ; dir < 4 ; dir++)
//         {
//             int nx = cur.X + dx[dir];
//             int ny = cur.Y + dy[dir];
//             if(nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
//             if( dist[nx][ny] >= 0 ) continue; // 0이거나 0보다 크면 이미 방문한 노드로 처리함 -> -1 로된 부분만 처리하니깐 
//             // 만약 빈공간이라면 0 으로 처리되어있으니 자연스럽게 넘어감 
//             //  if(tomato[nx][ny] == -1) continue;
//             dist[nx][ny] = dist[cur.X][cur.Y] + 1;
//            
//             Q.push({nx,ny});
//         }
//     }
//     int ans = 0;
//     for(int i = 0 ; i < N ; i++)
//     {
//         for(int j = 0 ; j < M ;j++)
//         {
//             if(dist[i][j] == -1) // 만약 -1 이있다면 우리가 초기화한 토마토값(-1) 이 남아있다는뜻이니 바로 -1 리턴 
//             {
//                 cout << -1 << '\n';
//                 return 0;
//             }
//             ans = max(dist[i][j], ans);  // -1 값이없다면 계속해서 최대값을 가져온다 
//         }
//         cout << '\n';
//     }
//     cout << ans ;   
//  }

//programmers 미로탈출 ( bfs )
// int Ldist[102][102];
// int Edist[102][102];
// int dx[4] = { -1 ,1 ,0 , 0};
// int dy[4] = { 0, 0, -1 , 1};
// int solution(vector<string> maps) {
//     int answer = 0;
//     pair<int,int> start , lever , exit;
//     for(int i = 0 ; i < maps.size() ; i++)
//     {
//         fill(Ldist[i] , Ldist[i] + 102,-1);
//         fill(Edist[i] , Edist[i] + 102,-1);
//     }   
//     for(int i = 0 ; i < maps.size();i++)
//     {
//         for(int j = 0 ; j < maps[0].length() ;j++)
//         {
//             if(maps[i][j] == 'S') start = { i , j };
//             if(maps[i][j] == 'L') lever = { i , j };
//             if(maps[i][j] == 'E') exit = { i , j };
//         }
//     }
//     queue<pair<int,int>> q;
//     q.push({start.X , start.Y});
//     Ldist[start.X][start.Y] = 0;
//     while(!q.empty())
//     {
//         pair<int,int> cur = q.front() ; q.pop();
//         for(int dir = 0 ; dir < 4 ; dir++)
//         {
//             int nx = cur.X + dx[dir];
//             int ny = cur.Y + dy[dir];
//             if(nx < 0 || maps.size() <= nx || ny < 0 || maps[0].length() <= ny) continue;
//             if(maps[nx][ny] == 'X') continue;
//             if(Ldist[nx][ny] > 0) continue;
//             Ldist[nx][ny] = Ldist[cur.X][cur.Y] + 1;
//             q.push({nx,ny});
//         }
//     }
//     if(Ldist[lever.X][lever.Y] == -1) return -1;
//     q.push({lever.X , lever.Y});
//     Edist[lever.X][lever.Y] = Ldist[lever.X][lever.Y];
//     while(!q.empty())
//     {
//         pair<int,int> cur = q.front() ; q.pop();
//         for(int dir = 0 ; dir < 4 ; dir++)
//         {
//             int nx = cur.X + dx[dir];
//             int ny = cur.Y + dy[dir];
//             if(nx < 0 || maps.size() <= nx || ny < 0 || maps[0].length() <= ny ) continue;
//             if(maps[nx][ny] == 'X') continue;
//             if(Edist[nx][ny] > 0) continue;
//             Edist[nx][ny] = Edist[cur.X][cur.Y] + 1;
//             q.push({nx,ny});
//         }
//     }
//     Edist[exit.X][exit.Y] == -1 ? answer = -1 : answer = Edist[exit.X][exit.Y]; 
//     for(int i = 0 ; i < maps.size();i++)
//     {        
//         for(int j = 0 ; j < maps[0].length() ; j++)
//         {
//             cout << Ldist[i][j] << " ";
//         }
//         cout << '\n';
//     }
//     return answer;
// }

//BOJ 11729 하노이 탑 이동순서 
// void func ( int a , int b , int n)
// {
//     if( n == 1 ) // base condition 
//     {
//         cout << a << " " << b << '\n';
//         return ;
//     }
//     func ( a , 6 -a -b , n-1); // 먼저 n -1 개를 a 와 b 가 아닌 기둥으로 옮기고 
//     cout << a << " " << b << '\n'; // 그 다음 a 기둥의 제일 마지막 원판을 b 기둥으로 옮긴뒤 
//     func( 6 -a - b , b , n-1); // a 와 b 가 아닌 기둥에 있는 n -1 개의 원판을 b 로 옮겨 준다 
// }
// {
//         int k;
//         cin >> k;
//         cout << (1 << k) -1 << '\n'; // 하노이 탑 최소 횟수 식 
//         func( 1 ,3 ,k);
// }

// void recursion(int n)
// {
//     if( n > 0 )
//     {
//         cout << n << '\n';
//         recursion( n -1 );
//     }   
// }
// int recursionPlus(int n)
// {
//     if(n==0) return 0;
//     return n + recursionPlus(n -1 );
// }

//BOJ 1074 번 Z 
// int func( int n , int r , int c)
// {
//     if(n == 0 ) return 0;
//     int half = 1 <<(n-1);
//     if(r < half && c < half)  return func(n-1 , r , c );
//     if(r < half && c >= half) return half * half + func( n - 1 , r , c - half);
//     if( r >= half && c < half)  return 2 * half * half + func(n - 1 , r - half , c);
//     return 3 * half * half + func( n -1 , r - half , c - half);
// }
// {
//     int  n , r , c;
//     cin >> n >> r >> c;
//     cout << func(n ,r ,c) << '\n';
// }


const int MX = 1000005;
int dat[MX];
int head = 0 , tail = 0;

#define X first
#define Y second

char myboard[102][102];
int visited[102][102];

int dx[4] = {1, 0 , -1 , 0};
int dy[4] = {0 , 1 , 0 , -1};



// int solution(vector<string> board)
// {
//     int answer = 0;
//     pair<int ,int> goal;   
//     for(int i = 0 ; i < board.size(); i++)
//     {
//         for(int j = 0 ; j < board[i].length() ; j++)
//         {
//             myboard[i][j] = board[i][j];
//             if(board[i][j] == 'G') goal = make_pair(i,j);    
//         }
//     }
//     int moves = 0;
//     int minmove = 100000;
//     for(int i = 0 ; i < board.size();i++)
//     {
//         for(int j = 0 ; j < board[i].length(); j++)
//         {
//             if(board[i][j] != 'R') continue;
//             queue<pair<int,int>> q;
//             visited[i][j] = 1;
//             q.push({i,j});
//             while(!q.empty())
//             {
//                 moves++;
//                 pair<int,int> cur = q.front() ; q.pop();
//                 for(int dir = 0 ; dir < 4 ; dir++)
//                 {
//                     int nx = cur.X + dx[dir];
//                     int ny = cur.Y + dy[dir];
//                     if(nx < 0 || nx >=100 || ny < 0 || ny >= 100) continue;
//                     if(visited[nx][ny] || myboard[nx][ny] != '.') continue;
//                     cout << nx << ny << '\n';
//                     if(visited[nx][ny] != 0) 
//                     {
//                         //cout << visited[nx][ny] << " " << moves << " " << '\n';
//                         visited[nx][ny] = min(moves,visited[nx][ny]);
//                     }
//                     else if(visited[nx][ny] == 0 ) visited[nx][ny] = moves;
//                     q.push({nx,ny});
//                 }
//                 //cout << moves << '\n';
//             }        
//         }
//     }
//     cout << goal.X << " " << goal.Y << '\n';
//     return -1;
// }

// 보통 x 가행 , y 가 열 , 행 -> 가 , 열 - > 세 



// int testfunc(int a , int b , int m )
// {
//     int val = 1;
//     while(b--) val *= a;
//     cout << val << '\n';
//     return val % m;
// }
// using ll = long long;
// int func2(int a , int b , int m)
// {
//     ll val = 1;
//     while(b--) val*= a;
//     return val % m ;
// }
// ll POW(ll a , ll b , ll m) // 귀납적으로 사고해야 이런 올바른 답이 가능 
// {
//     if(b==1) return a % m; // b 가 1이라면 그냥 a / m 하면되는 예외처리 
//     ll val = POW(a , b/2 , m); // val 은 a 의 b /2 제곱 한거에 m 나눈거 
//     val = val * val % m; // val 은 val * val 의 m 으로나눈 나머지 
//     if( b % 2 == 0 ) return val; // b 가 2라면 val 그대로 return 
//     return val * a % m; // 아니라면 val에 a 한번더 곱해서 나눠서 리턴 
// }

//BOJ 15649 N 과 M 
// int n , m; // 입력값
// int arr[10]; // 수열을 담을 배열
// bool isused[10]; // 특정수가 쓰였는지 true 혹은 false 로 나타내는 배열
// // 만약에 n 이 6일때  m 이 4 라면 
// // ex ) 현재 상태가 4 ,2 가 채워진 상태라면 arr[0]은 4 , arr [1] 은 2 
// //  isused[4] 와 isused[2] 는 true고 나머지는 false 상태가된다 
// void Backtracking(int k)
// {
//     if(k==m)
//     {
//         for(int i = 0 ; i < m; i ++)
//         {
//             cout << arr[i] << ' ';
//         }
//         cout << '\n';
//         return;
//     }
//     for(int i = 1 ; i <= n ; i++)
//     {
//         if(!isused[i])
//         {
//             arr[k] = i;
//             isused[i] = 1;
//             Backtracking(k+1);
//             isused[i] = 0;
//         }
//     }
// }

int n, m;
int arr[10];
bool isused[10] = {false,};

void Backtracking(int num ,int k)
{
    if(k==m)
    {
        for(int i = 0 ; i < m; i ++)
        {
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for(int i = num ; i <= n ; i++)
    {
        if(!isused[i])
        {
            arr[k] = i;
            isused[i] = true;
            Backtracking(i + 1 , k+1);
            isused[i] = false;
        }
    }
}
int main()
{
         ios::sync_with_stdio(0),cin.tie(0);// 입출력 시간 줄이는 코드 


        //boj 15649 백트래킹
        //1부터 n 까지 의 숫자중에 중복없이 고른 m개를 고른 수열

        cin >> n >> m;

        Backtracking(1, 0);

        //cout << solution(b) << '\n';


        // int A , B , C;
        // cin >> A >> B >> C;
        // cout << POW(A,B,C);
        // //내가만약 A의 2승을 구할수있다면 A 의 11승은 A^2 을 5번곱한후 A를 곱해주면된다 
        // int APrime = A * A;
        // int temp = B % 2 != 0 ? B / 2 + 1 : B / 2 ;
        // cout << temp << '\n';
        // ll val = 1;
        // val = APrime * temp;
        // cout << val / C << '\n';



        // queue<pair<int,int>> Q;
        // vis[0][0] = 1;
        // Q.push({0,0});
        // while(!Q.empty())
        // {
        //     pair<int,int> cur = Q.front() ; Q.pop(); // 맨앞에 큐 값 받아오고 pop 
        //     cout << '(' << cur.X << " , " << cur.Y << ") - >";
        //     for(int dir = 0 ; dir < 4 ; dir++)
        //     {
        //         int nx = cur.X + dx[dir];
        //         int ny = cur.Y + dx[dir];
        //         if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
        //         if(vis[nx][ny] || board[nx][ny] != 1) continue;
        //         vis[nx][ny] = 1;
        //         Q.push({nx,ny});
        //     }
        // }
        

    



        






    //  for(char c : s) freq[c-'a']++;
    //  for(int i = 0 ; i < 26 ; i++)
    //     cout << freq[i] << ' ';

    //cout << solution(97615282) << endl;

    // std::map<std::string , int> mymap;
    
    // mymap.insert(std::make_pair("mike1",24));
    // mymap.insert(std::make_pair("mike2",21));
    // mymap.insert(std::make_pair("mike3",20));
    // mymap.insert(std::make_pair("mike4",33));
    // mymap.insert(std::make_pair("mike10",44));
    // std::cout << mymap["mike1"] << endl;
    // 인덱스 접근
    //std::pair<std::map<std::string,int>::iterator , bool > res = mymap.insert(std::make_pair("mike105",99));
    // res리턴값으로 나옴 , res를 넘겨주는데 pair임 , 하나는 bool , 하나는 iter /insert 하려면 해당 key값이없어야한다 (mike105) 만약 해당값이없다면 bool 이 true 값으로 
    // 그냥 넘겨주고 아니라면 bool값이 false 로되고 iterator 가 해당 값의 위치를 알려준다 
    // if(res.second == true)
    // {
    //     cout << "insertion success" << endl;
    // }else
    // {
    //     cout <<"insertion failed : " << (*(res.first)).first << endl;
    /// }
    //mymap.erase("mike4");
    // 해당요소 지우기 

    // for(auto & e : mymap)
    // {
    //     std::cout << e.first << " , " << e.second << endl;
    // }

    // auto pos = mymap.find("mike3"); // iter반환 

    // if(pos == mymap.end())
    // {
    //     cout << " fail to find" << endl;
    // }
    // else{
    //     cout << (*pos).first << " , " << (*pos).second <<endl;
    // }


    return 0;

}