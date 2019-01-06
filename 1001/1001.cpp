#include <iostream>
using namespace std;
int main(){
    int count;
    cin>> count;
    double arg[count][3];
    string outstr[count];
    for(int i=0 ;i<count;i++){
        cin>>arg[i][0]>>arg[i][1]>>arg[i][2];
        if(arg[i][0]+arg[i][1]>arg[i][2]){
            outstr[i]="true";
        }else{
            outstr[i]="false";
        }
    }
    for(int j=0;j<count;j++){
        cout<<"Case #"<<j+1<<": "<<outstr[j]<<endl;
    }
    return 0;
}
