#include<iostream>
using namespace std;
void product(int *p,int *q){
    cout<<(*p)*(*q);
}
int main(){
    int n,m;
    cout<<"Enter the Numbers : ";
    cin>>n>>m;
    product(&n, &m);
}

//                             2 Solution

//   (1) option is correct

//                             3 Solution

#include<iostream>
using namespace std;
int main(){
    int a = 10, b = 20;
    int *ptr = &a;
    b = *ptr + 1;
    ptr = &b;
    cout << *ptr <<" "<< a <<" "<< b;
}                                                 // (3) option is correct

//                             4 Solution

#include<iostream>
using namespace std;
int main(){
    int a = 15, b = 20;
    int *ptr = &a;
    int *ptr2 = &b;
    *ptr = *ptr2;
}                                                   // (3) option is correct

//                             5 solution

#include<iostream>
using namespace std;
int main(){
    int a = 10, b = 20;
    int *ptr;
    *ptr = 5;
}                                       //  No, the following program snippet is incorrect: