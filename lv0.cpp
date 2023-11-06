#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
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