//insert element

/*
#include<iostream>
using namespace std;
int main(){
	int i,n,j,k=6;
	int arr[] = {2,3,4,3,6,8};
	cout<<"Enter no. you want to insert and index : "<<endl;
	cin>>n>>j;
	k++;
	for(i=6;i>=j;i--){
		arr[i] = arr[i-1];
	}
	arr[j-1]=n;
	for(i=0;i<k;i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}

*/
//delete element 

/*
#include<iostream>
using namespace std;
int main(){
	int i,n,j,k=6;
	int arr[] = {2,3,4,3,6,8};
	cout<<"Enter index you want to delete : "<<endl;
	cin>>n;
		for(i=n+1;i<k;i++){
		arr[i-1]=arr[i];
	}
	k--;
	for(i=0;i<k;i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}
*/

//Binary Search 

/*
 #include<iostream>
using namespace std;
int arr[] = {2,4,6,8,10,12,14,16,18,20};
int bin(int l,int h,int key){
		if(l<=h){
			int mid = (l+h)/2 ;
			if(arr[mid]==key){
				cout<< mid;
			}else if(key<arr[mid]){
			     return bin(l,mid-1,key);
			}else{
				return bin(mid+1,h,key);
			}
			}else{
				return -1;
			}
		}
	
int main(){
	bin(0,9,16);
	return 0;
}
*/
//or
/*
 #include <iostream>
using namespace std;
int main() {
    int A[] = {1, 2, 3, 4, 5, 6};
     int l = 0;
    int h = 6 - 1;
    while (l <= h) {
        int c = (l + h) / 2;
        if (A[c] == 4) {
            cout<<c;
            break;
        } else if (A[c] > 4) {
            h = c - 1; 
        } else {
            l = c + 1; 
        }
    }
    return -1;
}
*/

//reverse using aux array
/*
#include<iostream>
using namespace std;
int main(){
	int i,n,j;
	int arr[6] = {2,3,4,3,6,8};
	int ar[6];
	for(j=0;j<6;){
		for(i=5;i>=0;i--){
		ar[j] = arr[i];
		j++;
	}
	}
	for(i=0;i<6;i++){
		arr[i] = ar[i];
	}
	for(i=0;i<6;i++){
			cout<<arr[i]<<endl;
	}
	return 0;
}
*/

//reverse by swapping

/*
 #include<iostream>
using namespace std;

int main() {
    int arr[6] = {2, 3, 4, 3, 6, 8};
    int i, j;

    for (i = 0, j = 5; i < j; i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    for (i = 0; i < 6; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}

*/

//sort an array
/*

 #include<iostream>
using namespace std;
int main(){
	int a[6] = {2,5,4,10,6,1};
	for(int i=0; i<6; i++)
    {
        for(int j=i+1; j<6; j++) { if(a[i]>a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
	for(int i=0;i<6;i++){
		cout<<a[i]<<endl;
	}
	return 0;
}

*/
//merge array (doubtful)

/*
#include<iostream>
using namespace std;

int main() {
	int a[6] = {1,2,3,4,5,6};
	int b[7] = {7,8,9,10,11,12,13};
	int c[13];

	int i = 0;
	int k = 0;
	int j = 0;

	while (i < 6 && j < 7) {
		if (a[i] > b[j]) {
			c[k++] = b[j++];
		} else {
			c[k++] = a[i++];
		}
	}

	for (; i < 6; i++) {
		c[k++] = a[i];
	}

	for (; j < 7; j++) {
		c[k++] = b[j];
	}

	for (i = 0; i < 13; i++) {
		cout << c[i] << endl;
	}

	return 0;
}
*/

//set operations

//union : merge
//intersection :

/*
#include<iostream>
using namespace std;

int main() {
	int a[5] = {1,2,3,4,5,};
	int b[5] = {3,5,7,8,9};
	int c[10];

	int i = 0;
	int k = 0;
	int j = 0;

	while (i < 5 && j < 5) {
		if (a[i] > b[j]) {
			j++;
		} else if(a[i] < b[j]){
			i++;
		}else{
			c[k++] = a[i++];
			j++;
		}
	}

  for (i = 0; i < 2; i++) {
		cout << c[i] << endl;
	}
  return 0;
}
*/

//difference

/*
#include<iostream>
using namespace std;

int main() {
	int a[5] = {1,2,3,4,5,};
	int b[5] = {3,5,7,8,9};
	int c[10];

	int i = 0;
	int k = 0;
	int j = 0;

	while (i < 5 && j < 5) {
		if (a[i] > b[j]) {
		       j++;
		} else if(a[i] < b[j]){
			c[k++] = a[i++];
		}else if(a[i]==b[j]){
		    i++;
			j++;
		}
	}

  for (i = 0; i < 3; i++) {
		cout << c[i] << endl;
	}
  return 0;
}
*/

//missing by difference 

/*
#include<iostream>
using namespace std;
int main(){
	int a[6]={1,3,4,6};
	int l=1;
	int diff=1;
	for(int i=0;i<6;i++){
		if(a[i]-i!=diff){
			while(diff<a[i]-i){
				cout<<diff+i<<endl;
				diff++;
			}
		}
	}
	return 0;
}
*/

//missing by new array of 0

/*
 #include<iostream>
using namespace std;
int main(){
	int a[6]={1,3,4,6};
	int l=1;
	int diff=1;
	int b[7] = {0,0,0,0,0,0,0};
	for(int i=0;i<6;i++){
				b[a[i]]++;
		}
	for(int i=0; i<=6;i++){
		if(b[i]==0){
			cout<<i<<endl;
		}
	}
	return 0;
}
*/


//duplicate by hashing

/*
#include<iostream>
using namespace std;
int main(){
	int a[6]={1,3,4,1,6};
	int l=1;
	int diff=1;
	int b[7] = {0,0,0,0,0,0,0};
	for(int i=0;i<6;i++){
				b[a[i]]++;
		}
	for(int i=0; i<=6;i++){
		if(b[i]==2){
			cout<<i<<endl;
		}
	}
	return 0;
}
*/

//pairs by hashing

/*
#include<iostream>
using namespace std;
int main(){
	int a[5]={1,3,4,1,6};
	int k=10;
	int b[6] = {0,0,0,0,0,0};
	int i,j;
    for(int i=0;i<5;i++){
				b[a[i]]++;
		}
	for(i=0;i<4;i++){
		for(j=i+1;j<5;j++){
			if(b[k-a[i]]!=0){
				cout<<a[i]<<endl<<k-a[i]<<endl;
			}
			b[a[i]]++;
		}
	}
	return 0;
}
*/


