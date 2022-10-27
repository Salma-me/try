#ifndef __DA_H__
#define __DA_H__

class My_DA{
    private:
        int size = 0;
        int capacity = 1;
        int* data = nullptr;
        
    public:
        //D
        My_DA();


        ~My_DA();

        // Constructor that takes an array and its size so it is added directly to data D
        My_DA(int[], int size);
        
        // return the element at given index D
        int get(int index);
        //D
        void push(int element);
        
        // remove the last element, return the removed element D
        int pop();
        //D
        void insert(int index, int element);

        // remove the element at a given index, return the removed element D
        int remove(int index);
        
        // print the whole array D
        void print();

        // clear the whole array D
        void clear();

        // given an element, return the first index of the given element if found, return -1 if not found D
        int find(int element);
        //D
        int get_size();
        //D
        int get_capacity();
        //D
        void expand_arr();
        /// shrink to fit D 
        void shrink();
};

#endif