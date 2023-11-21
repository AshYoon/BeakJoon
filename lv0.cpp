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
//


int main()
{
         ios::sync_with_stdio(0),cin.tie(0);// 입출력 시간 줄이는 코드 

        stack<int> st ;
        st.push(5);






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