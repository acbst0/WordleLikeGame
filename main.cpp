#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
   bool flag= true;
   srand(time(0));
   int right=0;
   int guess[4];
   int ints[4];
   for (int i = 0; i < 4; i++) {
      ints[i] = rand() % 9 + 1;
      for (int j = 0; j < i; j++) {
         if (ints[i] == ints[j]) {
            i--;
            break;
         }
      }
   }
   
   /*
   for (int i = 0; i < 4; i++) {
      cout << sayilar[i] << " ";
   }
   cout << endl;
   */
   cout << " Welcome To Game " << endl;
   cout << "-----------------" << endl;
   cout << " []  []  []  [] " << endl << endl;
   do
   {
   	if(right==8){
   		cout << "-------------" << endl;
		cout << "  You've Lost!  " << endl;
		cout << "-------------" << endl;
		cout << "Answer is : " << ints[0] << " " << ints[1] << " " << ints[2] << " " << ints[3] << endl;
   		break;
	   }
   	cin >> guess[0] >> guess[1] >> guess[2] >> guess[3];
   	right++;
   int compTrue=0; //Completely True
   int halfTrue=0; // Half True
   for(int i=0;i<=3;i++){
   		 for(int b=0;b<=3;b++){
   		 	if(i==b){
   		 	if(guess[i]==ints[b]){
   		 		compTrue++;
				}	
			}
			else{
				if(guess[i]==ints[b]){
   		 		halfTrue++;
				}
			}
			}
	   }
	if(compTrue==4){
		cout << "------------" << endl;
		cout << "  You Won!  " << endl;
		cout << "------------" << endl;
		flag=false;
	}
	else{
		cout << "Right Position, Right Number : " << compTrue << endl;
	    cout << "Wrong Position, Right Number : " << halfTrue << endl << endl;
	}
	
	
   } while(flag);
   
   
   
/*
   for (int i = 0; i < 4; i++) {
      cout << sayilar[i] << " ";
   }
   cout << endl;
*/
   return 0;
}

