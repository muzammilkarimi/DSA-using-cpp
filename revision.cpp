#include <bits/stdc++.h>
using namespace std;
// binary to decimal
int btod(int n)
{
    int ans = 0, pow = 1;
    while (n > 0)
    {
        int last = n % 10;
        ans += pow * last;
        pow *= 2;
        n /= 10;
    }
    return ans;
}
// octal to decimal
int otod(int n)
{
    int ans = 0, pow = 1;
    while (n > 0)
    {
        int last = n % 10;
        ans += last * pow;
        pow *= 8;
        n /= 10;
    }
    return ans;
}
// hexadecimal to decimal
int htod(char n[])
{
    int s = strlen(n), ans = 0, pow = 1;
    for (int i = s - 1; i >= 0; i--)
    {
        if (n[i] <= '9' and n[i] >= '0')
        {
            ans += pow * (n[i] - 48);
        }
        else if (n[i] >= 'A' and n[i] <= 'F')
        {
            ans += pow * (n[i] - 55);
        }
        pow *= 16;
    }
    return ans;
}
//decimal to hexadecimal
void dtoh(int n)
{
    char ans[50];
    int i = 0;
    while (n != 0)
    {
        int reminder = n % 16;
        if (reminder < 10)
        {
            ans[i++] = reminder + 48;
        }
        else
        {
            ans[i++] = reminder + 55;
        }
        n /= 16;
    }
    for (int j = i-1; j >= 0; j--)
    {
        cout << ans[j] << " ";
    }
    cout << endl;
}
//decimal to octal
void dtoo(int n){
    int ans[50];
    int i=0;
    while(n!=0){
        int reminder = n%8;
        ans[i++] = reminder;
        n/=8;
    }
    for(int j = i-1; j>=0; j--){
        cout<<ans[j]<<" ";
    }cout<<endl;
}
//decimal to binary
void dtob(int n){
    int ans[20];
    int i=0;
    while(n!=0){
        int reminder = n%2;
        ans[i++] = reminder;
        n/=2;
    }
    for(int j=i-1; j>=0; j--){
        cout<<ans[j]<<" ";
    }
}
//linear search 
int lsearch(int arr[], int n, int k ){
    for(int i=0; i<n; i++){
        if(arr[i]==k){
            return i;
        }
    }
    return -1;
}
// binary search
int bsearch(int arr[], int n, int k ){
    int start=0,end=n,mid;
    while(start<=end){
        mid=(start+end)/2;
        if(k>arr[mid]){
            start = mid+1;
        }
        else if(k<arr[mid]){
            end = mid -1;
        }
        else if(k==arr[mid]){
            return mid;
        }

    }
    return -1;
}
//selection sorting
void ssort(int arr[],int n){
    for(int i=0; i<n-1; i++){
        for(int j=i; j<n; j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }

    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
// bubble sort
void bsort(int arr[],int n){
    int count = 1;
    while(count<n){
        for(int i=0; i<n-count; i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
        count++;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
// insertion sort
void isort(int arr[],int n){
    for(int i=1; i<n; i++){
        int temp = arr[i];
        int j = i-1;
        while(j>=0 and temp<arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1] =  temp;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
class medicine{
    string name,cname;
    int exp,quantity;
    float price;
    public:
    void setvalue(string n,string cn,int e,int q,float p){
        name=n;
        cname= cn;
        exp = e;
        quantity = q;
        price = p;

    }    
    void getvalue(){
        cout<<"name = "<<name<<endl;
        cout<<"cname = "<<cname<<endl;
        cout<<"expiry = "<<exp<<endl;
        cout<<"quantity = "<<quantity<<endl;
        cout<<"price = "<<price<<endl;
    }
    
};
int main()
{
       medicine m;
       m.setvalue("dolo","d",2211,5,30);
       m.getvalue();

    // int n=5;
    // int arr[n]={6,5,4,3,2};
    // isort(arr,n);
    // int n=5;
    // int arr[n]={6,5,4,3,2};
    // bsort(arr,n);
    // int n=5;
    // int arr[n]={6,5,7,9,2};
    // ssort(arr,n);
    // int n=5, k=9;
    // int arr[n] = {1,2,5,6,8};
    // cout<<bsearch(arr,n,k);
    // int n=5,k=8;
    // int arr[n] = {1,3,5,4,2};
    // cout<<lsearch(arr,n,k)<<endl;
    // cout << btod(10) << endl;
    // cout << otod(10) << endl;
    // char n[] = "10";
    // cout << htod(n);
    // dtoh(16);
    // dtoo(64);
    // dtob(8);

    return 0;
}