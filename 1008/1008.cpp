#include<iostream>
#include<vector>
using namespace std;
int main(){
    int count;
    //char a1,a2;
    string a1,a2;
    //vector<char> b1[4],b2[4];
    vector<string> b1[4],b2[4];
    cin>>count;
    for(int i=0;i<count;i++){
        cin>>a1>>a2;
        //if((a1-'A')>(a2-'A')){
        if(a1=="B" && a2=="J" || a1=="J" && a2=="C" || a1=="C" && a2=="B" ){
            b1[3].push_back(a1);
            b2[1].push_back(a2);
        //}else if((a1-'A')==(a2-'A')){
        }else if(a1=="B" && a2=="B" || a1=="J" && a2=="J" || a1=="C" && a2=="C"){
            b1[2].push_back(a1);
            b2[2].push_back(a2);
        }else{
            b1[1].push_back(a1);
            b2[3].push_back(a2);
        }
    }
        cout<< b1[1].size()<<" "<<b1[2].size()<<" "<<b1[3].size()<<endl;
    
        cout<< b2[1].size()<<" "<<b2[2].size()<<" "<<b2[3].size()<<endl;
        int c1[3]={0},c2[3]={0};
        for(size_t i=0;i<b1[1].size();i++){
            //if(b1[1][i]=='B'){
            if(b1[1][i]=="B"){
                c1[0]++;
            //}else if(b1[1][i]=='C'){
            }else if(b1[1][i]=="C"){
                c1[1]++;
            }else{
                c1[2]++;
            }
        }
        for(size_t i=0;i<b2[1].size();i++){
            //if(b2[1][i]=='B'){
            if(b2[1][i]=="B"){
                c2[0]++;
            //}else if(b2[1][i]=='C'){
            }else if(b2[1][i]=="C"){
                c2[1]++;
            }else{
                c2[2]++;
            }
        }
        int maxjia=c1[0]>=c1[1]? 0:1;
        maxjia=c1[maxjia]>=c1[2]?maxjia:2;
        int maxyi=c2[0]>=c2[1]?0:1;
        maxyi=c2[maxyi]>=c2[2]? maxyi:2;
        char str[4]={"BCJ"};
		cout<< str[maxjia]<<" "<< str[maxyi]<<endl;
    
    return 0;
}
