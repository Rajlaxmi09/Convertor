#include<iostream>
using namespace std;
int Reverse(int*arr,int size,char t){
    for(int i=size-1 ; i>=0 ; i--){
        if (t == 'h' && arr[i] >= 10)
            cout << char('a' + (arr[i] - 10));
        else
            cout << arr[i];
    }
    return 0;
}
int main(){
    int value;
    char c;
    cout<<"Enter 'h' for hexadecimal"<<endl;
    cout<<"Enter 'b' for binary"<<endl;
    cout<<"Enter 'd' for decimal"<<endl;
    cout<<"Enter 'o' for octal"<<endl;
    cout<<"Enter the number"<<endl;
    cin>>value;
    cout<<"To what do you want to convert it to";
    cin>>c;
    int a[100];
        int i = 0;
    if(c=='b'){
        
        while(value>0){
            a[i] = value%2;
            value = value/2;
            i++;
        }
        Reverse(a,i,'b');
     }
     if(c=='o'){
        while(value>0){
            a[i]= value%8;
            value = value/8;
            i++;
        }
        Reverse(a,i,'o');
     }
     if(c=='h'){
        while(value>0){
            while (value > 0) {
                a[i++] = value % 16;
                value /= 16;
            }
        }
        Reverse(a,i,'h');
     }
}