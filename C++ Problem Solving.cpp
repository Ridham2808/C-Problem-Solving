// // Q-1. Write a function to check the grade of a student based on the score:
// //90-100: A
// //80-89: B
// //70-79: C
// //60-69: D
// //Below 60: F


//#include<iostream>
//#include<string>
//
//using namespace std;
//
//string checkmarks(int marks) {
//    if (marks >= 90 && marks <= 100) {
//        return "A";
//    } else if (marks >= 80 && marks < 90) {
//        return "B";
//    } else if (marks >= 70 && marks < 80) {
//        return "C";
//    } else if (marks >= 60 && marks < 70) {
//        return "D";
//    } else if (marks < 60 && marks >= 0) {
//        return "F";
//    } else {
//        return "Invalid marks";
//    }
//}
//
//int main() {
//    int marks=78;
//
//    string grade = checkmarks(marks);
//    cout << "The student's grade is: " << grade << std::endl;
//
//    return 0;
//}


// // Q-2. Write a function to determine whether a given number is positive, negative, or zero.


//#include <iostream>
//using namespace std;
//
//void i(int number){
//    if(number>0){
//        cout << "The number is positive." << endl;
//    }else if(number<0){
//        cout << "The number is Negative" << endl;
//    }else{
//        cout << "Number is zero" << endl;
//    }
//}
//
//int main(){
//    int number=65;
//    i(number);
//    return 0;
//}


// // Q-3 .Write a function that takes three sides of a triangle and checks whether the triangle is equilateral, isosceles, or scalene.

//#include <iostream>
//using namespace std;
//
//void i(int one,int two , int three){
//    if(one == two && two == three){
//        cout << "equilateral" <<endl;
//    }
//    else if(one == two || two == three || one == three){
//        cout << "isosceles" << endl;
//    }
//    else{
//        cout << "scalene" << endl;
//    }
//}
//
//int main(){
//    int one=1;
//    int two=2;
//    int three=1;
//    
//    i(one,two,three);
//    return 0;
//}

// // Q-4 . Write a function to check whether a given character is a vowel or consonant.


//#include <iostream>  
//using namespace std; 
//
//void i(char ch){
//    if(ch == 'a' || ch == 'e' || ch == 'i' || ch== 'o' || ch == 'u'){
//        cout << ch << " is a vowel." << endl;
//    }
//    else{
//        cout << ch << " is consonant. " << endl;
//    }
//}
//
//int main(){
//    char ch='z';
//    i(ch);
//    return 0;
//}


// // Q-5. Write a function that checks if a person is eligible to vote. The person is eligible if they are 18 years old or older.


//#include <iostream>  
//using namespace std;
//
//void i(int age){
//    if(age>=18){
//        cout << "eligible to vote" << endl;
//    }
//    else{
//        cout << "not eligible to vote" << endl;
//    }
//}
//
//int main(){
//    int age=18;
//    i(age);
//  return 0;
//}


// // Q-6. Write a function that checks if a username and password match predefined values. If the username is "admin" and the 
// // password is "1234", print "Login successful"; otherwise, print "Login failed."


//#include <iostream>
//#include <string>
//using namespace std;
//
//void i(string username, string password) {
//    if (username == "admin" && password == "1234") {
//        cout << "Login successful" << endl;
//    } else {
//        cout << "Login failed" << endl;
//    }
//}
//
//int main() {
//    i("admin", "1234");
//    i("user", "password");
//    return 0;
//}


// // Q-7. Write a function that simulates a traffic light system. The function should take the current light color 
// //(red, yellow, green) as input and print the corresponding action:
// // "red" ? "Stop"
// // "yellow" ? "Slow down"
// // "green" ? "Go"


//#include <iostream>
//#include <string>
//using namespace std;
//
//void i(string Color) {
//    if (Color == "red") {
//        cout << "Stop" << endl;
//    } else if (Color == "yellow") {
//        cout << "Get Ready" << endl;
//    } else if (Color == "green") {
//        cout << "Go" << endl;
//    } else {
//        cout << "Invalid light color" << endl;
//    }
//}
//
//int main() {
//    i("green");
//    return 0;
//}


// // Q-8. Find the Average of an Array. Example: Input: arr=[1,2,3,4,5]; Output: 3


//#include <iostream>
//using namespace std;
//
//float i(int arr[], int size){
//int sum = 0;
//
//for(int i=0;i<size;i++){
//    sum += arr[i];
//}
//
//return sum/size;
//}
//
//int main() {
//    int arr[] = {1, 2, 3, 4, 5};
//    int size = sizeof(arr) / sizeof(arr[0]);
//    cout << "Average: " << i(arr, size) << endl;
//return 0;
//}



// // Q-9.Sort an Array in Ascending Order Example: Input: nums = [4,2,8,5,1]; Output: nums = [1,2,4,5,8].

//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//void i(int arr[], int size){
//    sort(arr, arr + size);
//}
//
//int main(){
//    int num[]={5,4,3,2,1};
//    int len=sizeof(num)/sizeof(num[0]);
//    
//    i(num,len);
//    
//    cout << "Sorted array=";
//    for (int i = 0; i < len; i++) {
//        cout << num[i] << " ";
//    }
//    
//    cout << endl;
//    return 0;
//}


// // Q-10.Given an array of integers, count how many numbers are even and how many are odd.
// //Example:
// //Input: [1, 2, 3, 4, 5]
// //Output: Even: 2, Odd: 3


//#include <iostream>
//using namespace std;
//
//void i(int array[],int len){
//    int even=0,odd=0;
//    for (int i=0;i<len;i++){
//        if(array[i]%2==0){
//            even++;
//        }else{
//            odd++;
//        }
//    }
//    cout << "even:" << even << " and odd:" << odd << endl;
//}
//
//int main(){
//    int arr[] = {1,2,3,4,5};
//    int size=sizeof(arr)/sizeof(arr[0]);
//    i(arr,size);
//    return 0;
//}


// // Q-11.Remove duplicate elements from the array arr = [1, 2, 2, 3, 4, 4, 5] and print the updated array.


//#include <iostream>
//using namespace std;
//
//void i(int arr[], int n) {
//    int temp[n], j = 0;
//    for (int i = 0; i < n - 1; i++) {
//        if (arr[i] != arr[i + 1]) {
//            temp[j++] = arr[i];
//        }
//    }
//    temp[j++] = arr[n - 1];
//    for (int i = 0; i < j; i++) {
//        arr[i] = temp[i];
//    }
//    for (int i = 0; i < j; i++) {
//        cout << arr[i] << " ";
//    }
//}
//
//int main() {
//    int arr[] = {1, 2, 2, 3, 4, 5, 5, 6};
//    int len = sizeof(arr) / sizeof(arr[0]);
//    i(arr, len);
//    return 0;
//}


// // Q-12.Add the number 6 to the end of the array arr = [1, 2, 3, 4, 5] and print the updated array. Output:[1,2,3,4,5,6]


//#include <iostream>
//using namespace std;
//
//void addToEnd(int arr[], int &size, int value) {
//    arr[size] = value;
//    size++;
//}
//
//int main() {
//    int arr[6] = {1, 2, 3, 4, 5}; 
//    int size = 5; 
//    addToEnd(arr, size, 6);
//
//    cout << "Updated Array: ";
//    for (int i = 0; i < size; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//
//    return 0;
//}


// // Q-13.Check if the array arr = [1, 2, 3, 4, 5] contains the number 3 and print true or false.


//#include <iostream>
//using namespace std;
//
//bool containsNumber(int arr[], int size, int number) {
//    for (int i = 0; i < size; i++) {
//        if (arr[i] == number) {
//            return true;
//        }
//    }
//    return false;
//}
//
//int main() {
//    int arr[] = {1, 2, 3, 4, 5};
//    int size = sizeof(arr) / sizeof(arr[0]);
//    bool result = containsNumber(arr, size, 3);
//    cout << (result ? "true" : "false") << endl;
//    return 0;
//}


// // Q-14.Add Element to the Beginning of an Array Example: Input: nums = [1, 2, 3, 4]; Output: nums = [0,1,2,3,4].


// Approach-1

//#include <iostream>
//using namespace std;
//
//int main() {
//    int nums[] = {1, 2, 3, 4};
//    int size = 4;
//    int newNums[size + 1];
//
//    newNums[0] = 0;
//    for (int i = 0; i < size; i++) {
//        newNums[i + 1] = nums[i];
//    }
//
//    for (int i = 0; i <= size; i++) {
//        cout << newNums[i] << " ";
//    }
//    cout << endl;
//
//    return 0;
//}


// Approach-2

//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int main() {
//    int nums[] = {1, 2, 3, 4};
//    int size = 4;
//    int newNums[size + 1];
//
//    newNums[0] = 0;
//    memmove(newNums + 1, nums, size * sizeof(int));
//
//    for (int i = 0; i <= size; i++) {
//        cout << newNums[i] << " ";
//    }
//    cout << endl;
//
//    return 0;
//}


// Approach-3
 
//#include <iostream>
//using namespace std;
//
//int main() {
//    int nums[] = {1, 2, 3, 4};
//    int size = 4;
//    int* newNums = new int[size + 1];
//
//    newNums[0] = 0;
//    for (int i = 0; i < size; i++) {
//        newNums[i + 1] = nums[i];
//    }
//
//    for (int i = 0; i <= size; i++) {
//        cout << newNums[i] << " ";
//    }
//    cout << endl;
//
//    delete[] newNums;
//    return 0;
//}



// // Q-15.Remove the Last element Input: nums = [1, 2, 3, 4,5]; Output: nums = [1,2,3,4].


// Approach-1

//#include <iostream>
//using namespace std;
//
//void i(int arr[] , int size){
//    int newarr[size-1];
//    
//    for(int i=0;i<size-1;i++){
//        newarr[i]=arr[i];
//        cout << newarr[i] << " ";
//    }
//    cout << endl;
//}
//
//int main(){
//    int arr[]={1,2,3,4,5};
//    int len=sizeof(arr)/sizeof(arr[0]);
//    i(arr,len);
//    return 0;
//}

// // Approach-2

//#include<iostream>
//using namespace std;
//
//void i(int arr[], int&size){
//    if(size>0){
//        
//        size--;
//        for(int i=0;i<size;i++){
//            cout << arr[i] << " ";
//        }
//        cout << endl;
//    }
//}
//
//int main(){
//    int arr[] = {1,2,3,4};
//    int len=sizeof(arr)/sizeof(arr[0]);
//    i(arr,len);
//    return 0;
//}

// // Approach-3

//#include<iostream>
//using namespace std;
//
//void i(int arr[], int &size) {
//    if (size > 0) {
//        int u = arr[size - 1];
//        size--;
//    }
//}
//
//int main() {
//    int arr[] = {1,2,3,4,5};
//    int size = sizeof(arr) / sizeof(arr[0]);
//
//    i(arr,size);
//    for (int i=0;i<size;i++) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//
//    return 0;
//}


// // Q-16.Check if all the elements in arr = [3, 5, 9, 1, 7] are positive numbers, and print true or false.

// Approach-1

//#include <iostream>
//using namespace std;
//
//bool even(int arr[], int size){
//  for(int i=0; i<size;i++){
//        if(arr[i]<=0){
//        return false;
//    }
//  }
//  return true;
//}
//
//int main(){
//    int arr[]={1,2,3,4,45,5};
//    int size = sizeof(arr)/sizeof(arr[0]);
//    
//    if(even(arr, size)){
//        cout << "true" << endl;
//    } else{
//         cout << "false" << endl;
//    }
// return 0;   
//}

// // Approach-2

//#include<iostream>
//using namespace std;
//
//bool i(int arr[], int size){
//    bool positive=true;
//    
//    for(int i=0;i<size;i++){
//        if(arr[i]<=0){
//            positive=false;
//            break;
//        }
//    }
//    
//    return positive;
//}
//
//int main() {
//    int arr[] = {3,5,9,1,7};
//    int size = sizeof(arr)/sizeof(arr[0]);
//
//    if(i(arr, size)){
//        cout << "true" << endl;
//    } else {
//        cout << "false" << endl;
//    }
//
//    return 0;
//}

// // Approach-3

//#include <iostream>
//using namespace std;
//
//bool negative(int num) {
//    return num <= 0;
//}
//
//bool i(int arr[], int size) {
//    for (int i = 0; i < size; i++) {
//        if (negative(arr[i])) {
//            return false;
//        }
//    }
//    return true;
//}
//
//int main() {
//    int arr[] = {3,5,9,1,7};
//    int size = sizeof(arr)/sizeof(arr[0]);
//
//    if (i(arr, size)) {
//        cout << "true" << endl;
//    } else {
//        cout << "false" << endl;
//    }
//
//    return 0;
//}

// // Approach-4

//#include <iostream>
//using namespace std;
//
//bool positive(int arr[], int len) {
//    for (int i = 0; i < len; i++) {
//        if (!(arr[i] > 0)) {
//            return false;
//        }
//    }
//    return true; 
//}
//
//int main() {
//    int arr[] = {3,5,9,1,7};
//    int len = sizeof(arr)/sizeof(arr[0]);
//
//    if (positive(arr, len)) {
//        cout << "true" << endl;
//    } else {
//        cout << "false" << endl;
//    }
//
//    return 0;
//}


// // Q-17.Count how many positive and negative numbers are in arr = [1, -2, 3, -4, 5, -6] and print the result.

// Approach-1

//#include <iostream>
//using namespace std;
//
//void i(int arr[], int size) {
//    int pnum = 0;
//    int nnum = 0;
//
//    for (int i = 0; i < size; i++) {
//        if (arr[i] > 0) {
//            pnum++;
//        } else if (arr[i] < 0) { 
//            nnum++;
//        }
//    }
//
//    cout << "Positive number: " << pnum << endl;
//    cout << "Negative number: " << nnum << endl;
//}
//
//int main() {
//    int arr[] = {1,-2,3,4,5,-6};
//    int size = sizeof(arr) / sizeof(arr[0]);
//
//    i(arr, size);
//
//    return 0;
//}

// // Approach-2

//#include <iostream>
//using namespace std;
//
//void i(int arr[], int size) {
//    int positive = 0, negative = 0;
//
//    for (int i = 0; i < size; i++) {
//        (arr[i] > 0) ? positive++ : negative++;
//    }
//
//    cout << "Positive number: " << positive << endl;
//    cout << "Negative number: " << negative << endl;
//}
//
//int main() {
//    int arr[] = {1,-2,3,4,5,-6};
//    int size = sizeof(arr) / sizeof(arr[0]);
//
//    i(arr, size);
//
//    return 0;
//}

// // Approach-3

//#include <iostream>
//using namespace std;
//
//void analyzeArray(int numbers[], int length) {
//    int positive = 0, negative = 0;
//
//    for (int i = 0; i < length; i++) {
//        if (numbers[i] > 0) {
//            positive++;
//        } else {
//            negative++;
//        }
//    }
//    cout << "Positive number: " << positive << endl;
//    cout << "Negative number: " << negative << endl;
//}
//
//int main() {
//    int numbers[] = {1,-2,3,4,5,-6};
//    int length = sizeof(numbers) / sizeof(numbers[0]);
//
//    analyzeArray(numbers, length);
//
//    return 0;
//}


// // Q-18.Print all elements that are at even indexes in the array arr = [10, 20, 30, 40, 50]. Output:[10,30,50].

// Approach-1

//#include <iostream>
//using namespace std;
//
//void i(int arr[], int len) {
//    for (int i = 0; i < len; i++) {
//        if (i % 2 == 0) {
//            cout << " " << arr[i];
//        }
//    }
//}
//
//int main() {
//    int arr[] = {10,20,30,40,50,60,70};
//    int len = sizeof(arr)/sizeof(arr[0]);
//    i(arr, len);
//    return 0;
//}

// // Approach-2

//#include <iostream>
//using namespace std;
//
//void i(int arr[],int len) {
//    for (int i = 0; i < len; i += 2){
//        cout << " " <<arr[i];
//        }
//    }
//
//int main() {
//    int arr[] = {10, 20, 30, 40, 50};
//    int len = sizeof(arr) / sizeof(arr[0]);
//    i(arr, len);
//    return 0;
//}


// // Q-19.Check if the array arr = [1, 2, 3, 4, 5] is sorted in ascending order, and print true or false.

// Approach-1

//#include <iostream>
//using namespace std;
//
//bool i(int arr[], int len) {
//    for (int i = 0; i < len - 1; i++){
//        if (arr[i] > arr[i + 1]) {
//            return false;
//        }
//    }
//    return true;
//}
//
//int main() {
//    int arr[] = {1,2,3,4,5};
//    int len = sizeof(arr)/sizeof(arr[0]);
//
//    bool result = i(arr,len);
//    if (result) {
//        cout << "True" << endl;
//    } else {
//        cout << "False" << endl;
//    }
//    return 0;
//}

// // Approach-2

//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//bool i(int arr[], int len) {
//    return std::is_sorted(arr, arr + len);
//}
//
//int main() {
//    int arr[] = {1,2,3,4,5};
//    int len = sizeof(arr)/sizeof(arr[0]);
//
//    bool result = i(arr,len);
//    if (result) {
//        cout << "True" << endl;
//    } else {
//        cout << "False" << endl;
//    }
//
//    return 0;
//}


// // Q-20.Find and print the difference between the maximum and minimum elements in arr = [80, 30, 70, 50, 20].

// Approach-1

//#include <iostream>
//using namespace std;
//
//int i(int arr[], int len) {
//    int maximum = arr[0];
//    int minimum = arr[0];
//
//    for (int i=1;i<len;i++) {
//        if (arr[i] > maximum) {
//            maximum = arr[i];
//        }
//    }
//
//    for (int i = 1; i < len; i++) {
//        if (arr[i] < minimum) {
//            minimum = arr[i];
//        }
//    }
//    return maximum - minimum;
//}
//
//int main() {
//    int arr[] = {1,2,3,4,5};
//    int len = sizeof(arr)/sizeof(arr[0]);
//    
//    cout << "Difference is: " << i(arr, len) << endl;
//    return 0;
//}

// // Approach-2

//#include <iostream>
//using namespace std;
//
//int i(int arr[], int len) {
//    int maximum = arr[0];
//    int minumum = arr[0];
//
//    for (int i = 1; i < len; i++) {
//        if (arr[i] > maximum) {
//            maximum = arr[i];
//        }
//        if (arr[i] < minumum) {
//            minumum = arr[i];
//        }
//    }
//    return maximum - minumum;
//}
//
//int main() {
//    int arr[] = {1,2,3,4,5};
//    int len = sizeof(arr)/sizeof(arr[0]);
//
//    cout << "Difference is: " << i(arr, len) << endl;
//    return 0;
//}

// // Approach-3

//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int i(int arr[], int len) {
// 
//    int maximum = *max_element(arr,arr + len);
//    int minimum = *min_element(arr,arr + len);
//    return maximum - minimum;
//}
//
//int main() {
//    int arr[] = {1,2,3,4,5};
//    int len = sizeof(arr)/sizeof(arr[0]);
//    cout << "Difference is:" << i(arr, len) << endl;
//    return 0;
//}


// // Q-21.Write a program to convert a given string to uppercase.Example: Input: "hello", Output: "HELLO".

// Approach-1

//#include <iostream>
//#include <string>
// using namespace std;
//
//void Case(string& str){
//    for(int i=0; i< str.length();i++){
//        str[i]=toupper(str[i]);
//    }
//}
//
//int main(){
//    string str= "hello";
//    Case(str);
//    cout << str << endl;
//    return 0;
//}

// Approach-2

//#include <iostream>
//#include <algorithm>
//#include <string>
// using namespace std;
//
//void Case(string& str){
//    transform(str.begin(),str.end(),str.begin(), ::toupper);
//}
//
//int main(){
//    string str= "hello";
//    Case(str);
//    cout << str << endl;
//    return 0;
//}


// Approach-3

//#include <iostream>
//using namespace std;
//
//string Case(string str) {
//    for (int i = 0; i < str.length(); i++) { 
//       
//        if (str[i] >= 'a' && str[i] <= 'z') { 
//            
//            str[i] = str[i] - 32; 
//        }
//    }
//    return str;
//}
//
//int main() {
//    string input = "hello"; 
//    cout << Case(input) << endl;
//    return 0;
//}


// // Q-22.Write a program to find the length of a given string.Example:Input:inputString = "Hello, World!"; Output:13;

// Approach-1

//#include <iostream>
//using namespace std;
//
//int length(string str) {
//    int count = 0; 
//    for (int i = 0; str[i] != '\0'; i++) {
//        count++;
//    }
//    return count;
//}
//
//int main() {
//    string inputString = "Hello, World!";
//    cout << length(inputString) << endl;
//    return 0;
//}


// Approach-2

//#include <iostream>
//using namespace std;
//
//int length(string str) {
//    return str.length();
//}
//
//int main() {
//    string inputString = "Hello, World!";
//    cout << length(inputString) << endl;
//    return 0;
//}



// // Q-23. Write a program to concatenate two given strings. Example: Input: ("hello", " world"), Output: "hello world".

// Approach-1

//#include <iostream>
//using namespace std;
//
//
//string add(string str1, string str2){
//    return str1 + str2;
//}
//int main() {
//    string str1 = "hello";
//    string str2 = "world";
//    cout << add(str1, str2) << endl;
//    return 0;
//}


// Approach-2

//#include <iostream>
//using namespace std;
//
//string add(string str1, string str2) {
//    str1.append(str2); 
//    return str1; 
//}
//
//int main() {
//    string str1 = "hello";
//    string str2 = " world";
//    cout << add(str1, str2) << endl;
//    return 0;
//}


// // Q-24. Write a program to remove whitespace from both ends of a string. Example: Input: " hello ", Output: "hello".

// Approach-1

//#include <iostream>
//using namespace std;
//
//void trim(char str[]) {
//    int start = 0, end = 0;
//    while (str[start] == ' ') start++;
//    for (end = start; str[end] != '\0'; end++);
//    end--;
//    while (str[end] == ' ') end--;
//    for (int i = start; i <= end; i++) {
//        cout << str[i];
//    }
//}
//
//int main() {
//    char input[] = " hello ";
//    trim(input);
//    return 0;
//}


// Approach-2

//#include <iostream>
//#include <algorithm>
// #include <cctype>
// using namespace std;
// 
// string hello(string str){
//     str.erase(str.begin(),find_if(str.begin(),str.end(),[](unsigned char ch){
//         return !isspace(ch);
//     }));
//     
//     str.erase(find_if(str.rbegin(), str.rend(),[](unsigned char ch){return !isspace(ch);}).base(), str.end());
//     return str;
// }
// 
// int main(){
//     string str ="  hello ";
//     cout << hello(str) << endl;
//     return 0;
// }
 
 
// Approach-3

//#include <iostream>
//#include <algorithm>
//#include <cctype>
//using namespace std;
//
//string hello(string str){
//    auto start = find_if_not(str.begin(), str.end(), [](unsigned char ch){return !isspace(ch);});
//    
//    auto end = find_if_not(str.rbegin(), str.rend(),[](unsigned char ch){
//        return  !isspace(ch);
//    }).base();
//    return(start < end ? string(start, end): "");
//}
//
//int main(){
//    string str = " hello ";
//    cout << hello(str);
//    return 0;
//}


// // Q-25. Write a program to split a string into an array of words. 
// // Example: Input: inputString = "Hello world, welcome to JavaScript!";Output:'Hello', 'world', 'welcome', 'to', 'JavaScript'

// Approach-1

//#include <iostream>
//#include <cstring>
//using namespace std;
//
//void splitManualArray(string str) {
//    int start = 0;
//    int length = str.length();
//    for (int i = 0; i < length; i++) {
//        if (str[i] == ' ' || ispunct(str[i])) {
//            if (i > start) {
//                cout << "'" << str.substr(start, i - start) << "', ";
//            }
//            start = i + 1;
//        }
//    }
//
//    if (start < length) {
//        cout << "'" << str.substr(start) << "'" << endl;
//    }
//}
//
//int main() {
//    string inputString = "Hello world, welcome to JavaScript!";
//    cout << "Words (Manual Array Split): ";
//    splitManualArray(inputString);
//    return 0;
//}


// // Q-26. Write a program to check if a string ends with a specific character.Example: Input: ("codinggita", "a"), Output: true.

// Approach-1

//#include <iostream>
//#include <string>
//using namespace std;
//
//bool endsWith(string str, char ch) {
//    return str[str.length() - 1] == ch;
//}
//
//int main() {
//    string inputString = "codinggita";
//    char ch = 'a';
//
//    cout << (endsWith(inputString, ch) ? "true" : "false") << endl; 
//    return 0;
//}

// Approach-2

//#include <iostream>
//using namespace std;
//
//bool end(string str, char ch) {
//    return !str.empty() && str.back() == ch;
//}
//
//int main() {
//    string inputString = "codinggita";
//    char targetChar = 'a';
//    
//    if (end(inputString, targetChar)) {
//        cout << "Output: true" << endl;
//    } else {
//        cout << "Output: false" << endl; 
//    }
//    return 0;
//}


// // Q-27. Write a program to extract the file extension from a given filename.Example: Input: "document.pdf", Output: "pdf".

// Approach-1

//#include <iostream>
//#include <string>
//using namespace std;
//
//string file(string filename) {
//    size_t pos = filename.find_last_of('.');
//    
//    if (pos != string::npos && pos != 0) {
//        return filename.substr(pos + 1);
//    }
//    return "";
//}
//
//int main() {
//    string filename = "document.pdf";
//    cout << file(filename) << endl;
//    return 0;
//}


// Approach-2


//#include <iostream>
//#include <string>
//using namespace std;
//
//string file(string filename) {
//    int pos = filename.rfind('.');
// 
//    if (pos != string::npos && pos != 0) {
//        return filename.substr(pos + 1);
//    }
//    return "";
//}
//
//int main() {
//    string filename = "document.pdf";
//    cout << file(filename) << endl;
//    return 0;
//}


// // Q-28. Write a function that takes two numbers and prints the largest one.Example:Input:number1 = 10;, Number2= 20; Output:20;

// Approach-1

//#include <iostream>
//using namespace std;
//
//void large(int num1, int num2) {
//    if (num1 > num2) {
//        cout << num1 << endl;
//    } else {
//        cout << num2 << endl;
//    }
//}
//
//int main() {
//    int num1 = 10;
//    int num2 = 20;
//    large(num1, num2);
//    return 0;
//}

// Approach-2

//#include <iostream>
//using namespace std;
//
//void large(int num1, int num2) {
//    cout << (num1 > num2 ? num1 : num2) << endl;
//}
//
//int main() {
//    int num1=10;
//    int num2=20;
//    large(num1,num2);
//    return 0;
//}

// Approach-3 

//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//void Max(int number1, int number2) {
//    cout << max(number1, number2) << endl;
//}
//
//int main() {
//    int number1 = 10; 
//    int number2 = 20; 
//    Max(number1, number2);
//    return 0;
//}


// // Q-29. Write a program to find all pairs in an array whose sum is equal to a given number.
// // Example :  Input: nums = [2,7,11,15], target = 9 , Output: [0,1].


// Approach-1

//#include <iostream>
//using namespace std;
//
//void pairs(int nums[], int n, int target) {
//    bool foundPair = false;
//
//    for (int i = 0; i < n; i++) {
//        for (int j = i + 1; j < n; j++) {
//            if (nums[i] + nums[j] == target) {
//                cout << "[" << i << ", " << j << "]" << endl;
//                foundPair = true;
//            }
//        }
//    }
//
//    if (!foundPair) {
//        cout << "No pairs found!" << endl;
//    }
//}
//
//int main() {
//    int nums[] = {2, 7, 11, 15};
//    int n = sizeof(nums) / sizeof(nums[0]);
//    int target = 9;
//    pairs(nums, n, target);
//    return 0;
//}


// // Q-30.Write a program to input an integer 'n' and print the sum of all its even digits 
// // and the sum of all its odd digits separately. Example : Input: n = 132456, Output: 12, 9

// Approach-1

//#include <iostream> 
//using namespace std;
//
//void sum(int n) {
//    int evenSum = 0, oddSum = 0;
//    while (n > 0) { 
//        int digit = n % 10;
//        if (digit % 2 == 0) { 
//            evenSum += digit;
//        } else {
//            oddSum += digit;
//        }
//        
//        n /= 10;
//    }
//    
//    cout << "Sum of even : " << evenSum << endl; 
//    cout << "Sum of odd : " << oddSum << endl;
//}
//
//int main() {
//    int n;
//    cout << "Enter a number: "; 
//    cin >> n;
//    sum(n);
//    return 0;
//}


// // Q-31.Write a program to repeat a string a specified number of times.Example: Input: ("hello", 3), Output: "hellohellohello".


// // //approach-1


//#include<iostream>
//using namespace std;
//
//string repet(string str,int n){
//    string result ="";
//    
//    for(int i=0;i<n;i++){
//        result += str;
//    }
//    return result;
//}
//
//int main(){
//    
//    string str;
//    int n;
//    
//    // string str="hello";
//    // int n=3;
//    
//    cout<<"enter a string : ";
//    cin >> str;
//    
//    cout << "enter the number of repeat : ";
//    cin>>n;
//    
//    cout << repet(str,n) ;
//    return 0;
//}


// // //approach-2


//#include<iostream>
//#include<sstream>
//using namespace std;
//
//string repet(string str, int n){
//    stringstream ss;
//    
//    for (int i = 0; i < n; i++) {
//        ss << str;
//}
//return ss.str();
//}
//
//int main(){
//    string str;
//    int n;
//    
//    // string str="hello";
//    // int n=3;
//    
//    cout<<"enter a string : ";
//    cin >> str;
//    
//    cout << "enter the number of repeat : ";
//    cin>>n;
//    
//    cout << repet(str,n) ;
//    return 0;
//}



// // Q-32.Write a program that categorizes a person’s age group based on the given age:


// // Approach-1

//#include <iostream>
//using namespace std;
//
//void categorizeAgeGroup(int age) {
//    if (age < 13) {
//        cout << "Child" << endl;
//    }
//    else if (age >= 13 && age <= 19) {
//        cout << "Teenager" << endl; 
//    }
//    else if (age >= 20 && age <= 59) {
//        cout << "Adult" << endl;
//    }
//    else if (age >= 60) {
//        cout << "Senior" << endl; 
//    }
//    else {
//        cout << "Invalid age" << endl;
//    }
//}
//
//int main() {
//    int age;
//    cout << "Enter age: ";
//    cin >> age;
//    categorizeAgeGroup(age);
//    return 0;
//}



// // // // //approach-2

//#include <iostream>
//using namespace std;
//
//void categorizeAgeGroup(int age) {
//    switch (age) {
//        case 0 ... 12:
//            cout << "Child" << endl;
//            break;
//        case 13 ... 19:
//            cout << "Teenager" << endl;
//            break;
//        case 20 ... 59:
//            cout << "Adult" << endl;
//            break;
//        default:
//            if (age >= 60)
//                cout << "Senior" << endl;
//            else
//                cout << "Invalid age" << endl;
//            break;
//    }
//}
//
//int main() {
//    int age;
//    cout << "Enter age: ";
//    cin >> age;
//    categorizeAgeGroup(age);
//    return 0;
//}



// // Approach-3

//#include <iostream>
//using namespace std;
//
//int main() {
//    int age;
//    cout << "Enter age: ";
//    cin >> age;
//    string category = (age < 0) ? "Invalid age" :
//                      (age < 13) ? "Child" :
//                      (age <= 19) ? "Teenager" :
//                      (age <= 59) ? "Adult" :
//                      "Senior";
//                      
//    cout << category << endl; 
//    return 0;
//}




// // Q-33. Write a program that takes a year as input and checks whether it is a century year (a year divisible by 100).


// // Approach-1


//#include <iostream>
//using namespace std;
//
//void isCenturyYear(int year) {
//
//    if (year % 100 == 0) {
//        cout << year << " is a Century Year." << endl; 
//    } else {
//        cout << year << " is not a Century Year." << endl;
//    }
//}
//
//int main() {
//    int year; 
//    cout << "Enter a year: "; 
//    cin >> year;
//    isCenturyYear(year);  
//    return 0;
//}


// // Approach-2

//#include <iostream>  
//using namespace std;
//
//void isCenturyYear(int year) {
//
//    (year % 100 == 0) ? cout << year << " is a Century Year." << endl 
//                      : cout << year << " is not a Century Year." << endl;
//}
//
//int main() {
//    int year; 
//    cout << "Enter a year: ";
//    cin >> year;
//    isCenturyYear(year); 
//    return 0;
//}



// // Approach-3


//#include <iostream>  
//using namespace std;
//
//void isCenturyYear(int year) {
//    switch (year % 100 == 0) {
//        case true:
//            cout << year << " is a Century Year." << endl;
//            break;
//        case false:
//            cout << year << " is not a Century Year." << endl;
//            break;
//    }
//}
//
//int main() {
//    int year;
//    cout << "Enter a year: ";
//    cin >> year;
//    isCenturyYear(year);
//    return 0;
//}


// // Q-34. Access and print the first and last element of the array arr = [10, 20, 30, 40, 50]. Output:[10,50]


// // Approach-1

//#include <iostream>
//using namespace std;
//
//int main() {
//    int arr[] = {10, 20, 30, 40, 50};
//    cout << "[" << arr[0] << ", " << arr[4] << "]" << endl;
//    return 0;
//}


// // Approach-2

//#include <iostream>
//using namespace std;
//
//int main() {
//    int arr[] = {10, 20, 30, 40, 50};
//    cout << "[" << arr[0] << ", " << arr[sizeof(arr)/sizeof(arr[0]) - 1] << "]" << endl;
//    return 0;
//}


// // Approach-3

//#include <iostream>
//using namespace std;
//
//int main() {
//    int arr[] = {10, 20, 30, 40, 50};
//    int n = sizeof(arr) / sizeof(arr[0]);
//    
//    for (int i = 0; i < n; i++) {
//        if (i == 0 || i == n - 1) {
//            cout << arr[i] << " ";
//        }
//    }
//    cout << endl;
//
//    return 0;
//}


// // Q-35. Print an inverted right-angled triangle pattern with n rows.

// Approach-1


