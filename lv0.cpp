#include <string>
#include <vector>
#include <iostream>
#include <unordered_map>
#include <stack>
#include <algorithm>
#include <sstream>
#include <unordered_set>


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


int main()
{
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