#include "da.h"
using namespace std;
#include <iostream>
#include <algorithm>
// implement all the methods in da.h
// feel free to add new helper methods whether private or public

My_DA::My_DA(){
    size = 0;
    capacity = 1;
    data = new int [capacity];
}



My_DA::My_DA(int arr[], int size){
    size = size;
    capacity = size;
    data = new int [capacity];

    for(int i = 0 ; i < size ; i++){
    data[i] = arr[i];
    } 
}



void My_DA::expand_arr(){
          capacity *= 2;
        int* old_arr = data;
        int * data = new int [capacity];
        for(int i=0; i < size; i++)
            data[i] = old_arr[i];
        delete []old_arr;
}



int My_DA::get_size(){
    return size;
}



int My_DA::get_capacity(){
    return capacity;
}



int My_DA::get(int index){
    return data[index];
}


void My_DA::push(int element){
    if(size == capacity){
        expand_arr();
    }
        data[size] = element;
        size++;
    
}


int My_DA::pop(){
    if(size > 0){
        int P = data[size-1];
        size--;
        return P;
    }
    else{
        return (-1);
    }
}



void My_DA::insert(int index, int element){
    if(index < size){
         if(size == capacity){
        expand_arr();
        }
        int* old_arr = data;
        int * data = new int [capacity];

        for (int i = 0; i < index ; i++){
            data[i] = old_arr[i];
        }

        data[index] = element;

        for (int i =+ index; i <= size; i++){
            data[i] = old_arr[i-1];
        }
        size++;
        delete []old_arr;
    }
}
   



int My_DA::remove(int index){
    int R = data[index];
    if(index < size){
        int* old_arr = data;
        int * data = new int [capacity];

        for (int i = 0; i < index ; i++){
            data[i] = old_arr[i];
        }

        for (int i = index; i < size; i++){
            data[i] = old_arr[i+1];
        }

        size--;
        delete []old_arr;
        return R;  
    }
    else{
        return (-1);
    }
}


void My_DA::print(){

    for (int i = 0; i < size ; i++){
        cout << data[i] <<" ";
    }
    cout << endl;
}




int My_DA::find(int element){

    bool A = true;
   for(int i = 0; i < size; i++){
    if(data[i] == element){
        A = false;
        return i;
    }
   }
    if(A == true){
         return (-1);
    }
    return 0;
}



void My_DA::shrink(){
    if(size == capacity/2){
        int* old_arr = data;
        int * data = new int [capacity/2];
        for(int i = 0; i < size; i++){
         data[i] = old_arr[i];   
        }
    }
}


void My_DA::clear(){
   //for(int i = 0; i < size; i++){}
    size = 0;
}

 My_DA::~My_DA(){
    delete[] data;
 }









