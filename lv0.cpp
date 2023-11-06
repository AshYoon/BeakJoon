#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <stack>
#include <algorithm>
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