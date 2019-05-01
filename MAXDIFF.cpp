/*
Author : Krishna
Problem : Maximum Weight Difference
Contest : Codechef April Challenge 2013 
Solution Link : https://www.codechef.com/viewsolution/1986392
*/


#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
#include <map>
#include <set>
#include <stack>
#include <list>
#include <vector>
#include <queue>
#include <deque>
#include <ctype.h>
#include<assert.h>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
#define MAX 100
using namespace std;

int main()
{
	// input number of tests
	int T,K,N,chef,q,t,i,min,max;
int son;
  int diff;
cin>>T;	
assert( 1<=T && T<=100);
	// loop over tests
	for( t=0;t<T;t++)
	{
           // int a[100000]={0};
           int a[MAX]={0};
           cin>>N>>K;
           int sum=0;
	
           for( i=0;i<N;i++){
           cin>>a[i];
           sum+=a[i];
	  }
   
          //printf("%d\n",sum);
          min=max=0;
          sort(a,a+N);
          if(K>=N-K){
            min=N-K;
            max=K; }
          else if (K<N-K){
           min=K;
           max=N-K;
}

//printf("%d\t%d\n",min,max);
          son=diff=chef=0;
          //for(int q=0;q<N;q++)	printf("%d\t",a[q]);
          //printf("\n");

         //REP(i,0,K) 
         for(i=0;i<min;i++) { son+=a[i];} 
         //REP(i,K,N)  
         for(i=min;i<N;i++){ chef+=a[i];}

//printf("%d\t%d\n",son,chef);

        //printf("%d\n",chef);
        //printf("%d\n",son);
        diff=chef-son;
        //printf("%d\n",diff);
        //if(K==0) printf("%d\n",sum);
        cout<<abs(diff)<<"\n";
     }
	return 0;
}
