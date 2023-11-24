## Array Size

Let's take an Array : arr[]  
Let's see how we find size of arr[] in different cases :

  ### 1. arr.size()
  
  ##### size() built-in-function can be used with array to find its size only if we are using STL array Declaration.

    Step 1. Import the following Header into your C++ Program : include <array> 
    Step 2. STL Array Declaration : array<datatype , size> arr{elements separated by commas/or leave empty in case of user input}
            Example 1 : array<float , 0> arr{}; //arr.size() Output : 0
            Example 2 : array<int , 5> arr{}; //arr.size() Output : 5
            Example 1 : array<int , 5> arr{8,14,2,20,13}; //arr.size() Output : 5

 ### 2. sizeof(arr)/sizeof(arr[0])
   Here , We are using sizeof() built-in-function. 

   ##### sizeof() : gives size in bytes

   ###### Example : 
   
   int arr[]={14,9,15,12,6,8,13};
   int N = sizeof(arr)/sizeof(arr[0]); 
              
               /* 
               size of "int" datatype in bytes = 4 bytes ; 
               sizeof(arr) = 4+4+4+4+4+4+4 = 28 bytes and sizeof(arr[0]) = 4 bytes ; 
               Therefore N = 28/4 = 7 
               */


### 3. end(arr) - begin(arr)

  ##### end() and begin() built-in-functions are used to get the iterators pointing to last and first elements of array respectively.

  ###### Example : 

  int arr[]={14,9,15,12,6,8,13};
  int N = end(arr) - begin(arr); // 7-0 = 7


### 4. Using Loop

  Counting by iterating over the elements using loops and increasing the count variable at each iteration.
