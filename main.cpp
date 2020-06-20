#include <iostream>


using namespace std;




int main(){

    cout << "Welcome to my first C++ program!" << endl;


  bool repeat = true;
  do{


    int choice = 0;
    do {
        cout << "Please select a task to perform (-1 to exit):" << endl;
        cout << "1) Draw a pyramid" << endl;
        cout << "2) Draw a star" << endl;
        cout << "3) Compute the Fibonacci numbers" << endl;

        cin >> choice;

        switch(choice){

            case 1: {
                int height, i, j, space;

                cout <<"Please enter the height of the pyramid (between 1 and 40): " <<endl;
                cin >> height;

                while(height < 0 || height > 40) {

                cout<< "You have entered an invalid height" << endl;
                cout <<"Please enter the height of the pyramid (between 1 and 40): " <<endl;
                cin >> height;

                }
                    for(i = 1; i <= height; i++)
                   {

                      for(space = i; space < height; space++)
                      {
                         cout << " ";
                      }

                      for(j = 1; j <= (2 * i - 1); j++)
                      {
                         cout << "*";
                      }

                      cout << "\n";
                   }

            }
                break;





            case 2: {
                int GivenValue; {

                cout <<"Please enter the size of the star (between 1 and 20): " << endl;
                cin >> GivenValue;

                while(GivenValue < 0 || GivenValue > 20) {

                cout<< "You have entered an invalid size" << endl;
                cout <<"Please enter the size of the star (between 1 and 20): " <<endl;
                cin >> GivenValue;

                }
                        for (int i = 1; i <= GivenValue * 2 + 1; i++) {
                            for (int j = 1; j <= GivenValue * 2 + 1; j++) {

                                if (i == j){
                                    cout << "*";
                            }
                    else if (i + j == GivenValue * 2 + 2){
                        cout << "*";
                    }
                    else {
                        cout << " ";
                    }
                }
                cout << endl;
            }
                cout << endl;
                }
            }

                break;






            case 3: { // You can not calculate more than 47 Fibonacci numbers with this program.
                int fvalue, num1 = 0, num2 = 1, i, result; {



                cout <<"Please enter the index of the Fibonacci number to be computed: " <<endl;
                cin >> fvalue;
                cout << endl;


                while(fvalue < 0 || fvalue == 0) {

                cout<< "You have entered an invalid value for index." << endl;
                cout <<"Please enter the index of the Fibonacci number to be computed: " <<endl;
                cin >> fvalue;
                }

                for(i = 0; i < fvalue ; i++) {
                    if(i <= 1)
                        result = i;
                    else {
                        result = num1 + num2;
                        num1 = num2;
                        num2 = result;

                    }
                    cout << result << endl;
                }



                break;


                }

            }





            case -1:
                if (choice == -1) {
                cout << "\nGoodbye" << endl;

                    while(choice == -1);
                        bool repeat = false;
                }
                break;



            default:
                cout << "You have entered an invalid value for selection." << endl;



            }







    }while(choice != 1 && choice != 2 && choice != 3 && choice != -1);

 }while(repeat);

           }



























