#include<iostream>

int pm(int n,int m,int k,int side=1){
  std::cout<<n<<"^"<<m<<"*"<<side<<std::endl;
  if(m==1 || n==1){
    return (side*n)%k;
  }
  if(m%2 ==0 ){ //偶数
    return pm((n*n)%k,m/2,k,side%k);
  }else{
    return pm((n*n)%k,(m-1)/2,k,(side*n)%k);
  }
}

int main(){
  int a,b,c;
  std::cin>>a>>b>>c;
  std::cout<<pm(a,b,c)<<std::endl;
  return 0;
}
