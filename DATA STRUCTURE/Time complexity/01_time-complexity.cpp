// Time complexity - Not the actual time taken but amount
// of time taken as function of input size(n).

// Big O notion --> worst case comp(upper bound)

// worst case    avg.case      best case
// O             theta            omega
// upper bound                lower bound

// space complexity - Amount of space taken by an algorithm as function of input size(n)


/*

Common time complexities
1. O(1) constant time complexity

sum of number from 1 to N

int n; 
cin>> n;
int ans = n * (n+1)/2; 

time complexity
O(k) - so ignore the k and it will be O(1)
here no. of operation is 1.

2. linear time complexity
O(n)

here every loop runs for n times so that tc will be O(n)

N Factorial 
int fact = 1;
for(int i = 1; i<=n; i++) {
fact *= i;
} 


Nth Fibonacci - DP
for (int i = 2; i <=n; i++){
 dp[i] = dp[i-1] + dp[i-2];
 } 

Kadane's Algorithm

int currSum = 0; ans = INT_MIN;

for (int i =0; i< n; i++) {
    currSum += arr[i];
    ans = max(currSum, ans);
    currSum = currSum < 0 ? 0 : currSum;
 }

3. O(n^2) & O(n^3)
pattern question

Bubble sort 

for (int i=0; i<n-1; i++){
    for (int j = 0; j< n-i-1; j++){
        if(arr[j] > arr[j+1]) {
            swap(arr[j], arr[j+1]);
                // if and swap are constant tc and both for loop has tc O(n)
                // so tc will be O(n^2)
        }
    }
}

to print subarray of a array we have to use three for loop 
that's why tc will be O(n^3)

4. O(logn)

Binary search

int s=0 , e=n-1;
while(s<=e) {
    int mid = s + (e-s)/2;
    if(arr[mid] < target){
        s = mid + 1;
    } else if (arr[mid] > target) {
        e = mid - 1;
    } else {
        return mid; // ans
    }
}


5. O(nlogn)

  sorting
  merge sort 
  quick sort(average)
  greedy algorithm 

6. O(2^n)
     exponential

     recursion (Brute force)

7. O(n!)

    nQueens
    knight tour
    string all possible permutation - recursion



// Solve Question 
1.    // prime number - Time complexity
    for (int i =2; i*i <= n; i++) {
        if(n% i ==0) {
        cout<< "Non prime";
        break;

        }

    }

    time complexity for this will be O(sqrt(n))
which one is better from this two?
    O(sqrt(n))  > O(n)
    O(sqrt(n))  < O(logn)


2. Selection sort
     for(int i =0 ; i < n-1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++){
            if(arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
    }   swap(arr[i], arr[minIdx]);

    tc will be O(n^2)

*/
