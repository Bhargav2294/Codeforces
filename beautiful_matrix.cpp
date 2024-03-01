#include<iostream>
using namespace std;

int main(){

    int arr[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[i][j]==1){
                if ((i == 0 || i == 4) && (j == 0 || j == 4))
                {
                    cout << "4" << endl;
                }
                
                else if ((i != 0 && i != 4) && (j != 0 && j != 4))
                {
                    if ((i == 1 || i==3) && (j == 1 || j==3)){
                        cout << "2" << endl;
                    }
                    else if (i == j)
                    {
                        cout << "0" << endl;
                    }
                    else{
                        cout << "1" << endl;
                    }
                }
                else if ((i ==  0 ||i == 2 ||i == 4) && (j == 0 ||j == 2 ||j == 4))
                {
                    cout << "2" << endl;
                }
                else
                {
                    cout << "3" << endl;
                }
            }
        }
    }

    return 0;
}