#include<iostream>
#include<vector>
#include<algorithm>
#include<stdio.h>
using namespace std;
struct yuebing{
    float total;
    float price;
    float per_price;
};
int cmp(yuebing a,yuebing b){
    return a.per_price > b.per_price;
}
int main(){
    
    int count,demand;
    cin >> count>>demand;
    vector<yuebing> yb(count);
    int t,c;
    for(int i=0;i<count;i++){
        //cin>> t;
        //yb[i].total.push_back(t);
        scanf("%f",&yb[i].total);
    }
    for(int i=0;i<count;i++){
        //cin >> c;
        //yb[i].price.push_back(c);
        scanf("%f",&yb[i].price);
        //(yb[i].per_price).push_back(yb[i].price/yb[i].total);
        //yb[i].per_price=yb[i].price/yb[i].total;
    }
    for(int i=0;i<count ; i++){
        yb[i].per_price = yb[i].price / yb[i].total;
    }
    sort(yb.begin(),yb.end(),cmp);
    float result=0.0;
    /*if(demand<=yb[0].total){
        //printf("%.2f",demand*yb[1].per_price);
        result=demand*yb[0].per_price;
    }else if(demand <= yb[0].total+yb[1].total){
        //printf("%.2f",(demand-yb[1].total)*yb[2].per_price+yb[1].total*yb[1].per_price);
        //result=(demand-yb[0].total)*yb[1].per_price+yb[0].total*yb[0].per_price;
        result=(demand-yb[0].total)*yb[1].per_price+yb[0].price;
    }else if(demand <  yb[0].total+yb[1].total+yb[2].total){
        //printf("%.2f",(demand-yb[1].total-yb[2].total)*yb[3].per_price+yb[1].total*yb[1].per_price++yb[2].total*yb[2].per_price);
        //result=(demand-yb[0].total-yb[1].total)*yb[2].per_price+yb[0].total*yb[0].per_price+yb[1].total*yb[1].per_price;
        result=(demand-yb[0].total-yb[1].total)*yb[2].per_price+yb[0].price+yb[1].price;
    }else{
        //printf("%.2f",yb[3].total*yb[3].per_price+yb[1].total*yb[1].per_price++yb[2].total*yb[2].per_price);
        result=yb[0].price+yb[1].price+yb[2].price;
        
    }*/
    for(int i=0 ;i<count;i++){
        if(demand < yb[i].total){
            result += yb[i].per_price*demand;
            break;
        }else{
            result +=yb[i].price;
        }
        
        demand -= yb[i].total;
    }
    /*for(int i=0 ;i < count;i++){
        if( yb[i].total <= demand ){
            result =result + yb[i].price;
        }else{
            result =result +  yb[i].per_price*demand;
            break;
        }
        demand =demand - yb[i].total;
    }*/
    printf("%.2f",result);
    return 0;
}
