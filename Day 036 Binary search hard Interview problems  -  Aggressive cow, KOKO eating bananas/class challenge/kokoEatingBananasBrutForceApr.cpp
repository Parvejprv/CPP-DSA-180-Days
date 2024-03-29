/*  
Question 2. 
------------
875. Koko Eating Bananas
*/

#include<iostream>
#include<vector>
#include<climits>

using namespace std;
int kokoEatingBananas(vector<int>& piles, int h){
  
  for(int i=1; i<INT_MAX; i++){
    int hours = 0;
    // Calculate total hours needed to eat all bananas with current speed i
    for(int bananas : piles){
      hours = hours + (bananas + i - 1) / i;
    }
    if(hours <= h) return i;
  }
  return -1;
}

int main() {
  int n;
  cout << "Enter the number of elements: ";
  cin >> n;

  vector<int> piles(n); //create vector of size n
  cout << "Input the elements into the vector:";
  for(int i=0; i<n; i++){
    cin >> piles[i];
  }

  int h;
  cout << "Enter the Integer value of hours:";
  cin >> h;

  // kokoEatingBananas
  int kokoEatingBananasRes = kokoEatingBananas(piles, h);
  cout<<"Koko eats bananas: "<<kokoEatingBananasRes << endl ;

  return 0;
}








/*  
Output:-
--------
Enter the number of elements: 4
Input the elements into the vector:3 6 11 7
Enter the Integer value of hours:8
Koko eats bananas: 4


Enter the number of elements: 5
Input the elements into the vector:30 11 23 4 20
Enter the Integer value of hours:5
Koko eats bananas: 30


Enter the number of elements: 5
Input the elements into the vector:30 11 23 4 20
Enter the Integer value of hours:6
Koko eats bananas: 23

*/