#include<iostream> 
#include<vector> 
#include<algorithm> 


using namespace std; 

class Solution{
public: 
    long long minimumHealth(vector<int>& damage, int armor){
      long long ans=0; 
      int maxDamage=0; 
      for(int d:damage){
        ans +=d; 
        maxDamage = max(maxDamage,d); 
      }
      return ans-min(maxDamage, armor)+1; 
    }
};
int main(){
  vector<int> damage ={2,7,4,3}; 
  int armor =4; 
  Solution sol; 
  cout << sol.minimumHealth(damage, armor) <<endl; 
  return 0; 
}

