#include <iostream>
#include <algorithm>
using namespace std;

bool isPrime(int num){
    if(num <= 1) return false;
    for (int =2; i*i <= num; i++){
        if (num%i==0) return false;
    }
    return true;
}

int linearSearch(int arr[], int n, int x){
    //ini cari
}

int main (){
    int n, m;
    cin >> n >> m;

    int array_A[n];
    int array_B[m];

    for(int i=0; i<n; i++){
        cin >> array_A[i];
    }

    for(int i=0; i<m; i++){
        cin >> array_B[i];
    }

    int result[n + m];
    int result_count=0;

    //cari nilai yang memenuhi syarat
    for(int i=0; i<n; i++){

    }

    sort(result, results+result_count);

    if(result_count==0){
        cout << "TIDAK ADA" << endl;
    } else {
        //..istilah untuk mengeluarkan output sesuai dengan deskripsi soal
    }

    return 0;
}