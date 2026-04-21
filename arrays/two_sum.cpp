#include <vector>
#include <unordered_map>

/*
 * Problem: Two Sum
 * Link: https://leetcode.com/problems/two-sum/
 * Difficulty: Easy
 */



using namespace std ;



/*
    * Time Complexity: O(n)
    * Space Complexity: O(n)
 */



class FirstSolution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int> values ; 

        for(int i = 0 ; i < nums.size() ; i++) {
                int first = target - nums[i] ; 

                if(values.find(first) != values.end()) {
                    return {values[first] , i};
                }

                values[nums[i]] = i ;
        }

return {};
        
    }
};


/*
    * Time Complexity: O(n²)
    * Space Complexity: O(1)
 */

class SecondSolution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

      
       int n , m ; 

        for(int i = 0 ; i < nums.size() ; i++) {
            for(int j = i + 1  ; j < nums.size() ;j++) {
                if(nums[i] + nums[j] == target) {
                   n = i ; 
                   m = j ;
                }
            }
        }

        return {n , m};
    }
};