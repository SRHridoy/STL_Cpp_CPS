# <mark>STL Basics: </mark>

## Headerfile : 
```cpp
#include<bits/stdc++.h>
```

## Vector : 
```cpp
    //User Vector Input : 
    int n;
    vector<int>v;

    cin >> n;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }

    cout << v.size() << endl;
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    //Manual Input :
    vector<int>v1 = {1, 2, 3, 4, 5};

    cout << v1.size() << endl;
    for(int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
    cout << endl;

    //Clearing Vector:
    v1.clear();
    
    //Checking empty or not :
    cout << v1.empty() << endl;

    v1 = {3,5};
    cout << v1.empty() << endl;

```

### Resizing Vector:
```cpp
    vector<int> v = {2, 3, 4, 5};

    v.resize(10);

    cout << v.size() << endl;

    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
    /*Output : 
    10
    2 3 4 5 0 0 0 0 0 0 
``` 

>NOTE: 
```cpp
//We use Shortcutly:
    vector<int>v1(10);
    v1[4] = 10;
    cout << v1[4] << endl;
    //Output : 10
//If we want to print all 5 other than 0:
    vector<int>v2(10,5);
    for(int i = 0; i < v2.size(); i++){
        cout << v2[i] << " ";
    }
    cout << endl ;
    //Output :
    //5 5 5 5 5 5 5 5 5 5 
```

### Coping Vector : 
```cpp
vector<int> v = { 2, 3, 4, 5};
    vector<int> temp;

    //Coping: v to temp.
    temp = v;

    cout << temp.size() << endl;
    for(int i = 0; i < temp.size(); i++){
        cout << temp[i] << " ";
    }cout << endl;

    /*
    4
    2 3 4 5
    */
```

### Iterator and Vector Printing : 
```cpp
vector<int>v = {2, 3, 4};
    
    //Iterator: 
    vector<int>::iterator it;
    for(it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }cout << endl;
    //Output : 2 3 4

    //Egula Use korbo : Shortcut vabe for each-loop use korbo:
    for(int element : v){
        cout << element << " ";
        //element+=2; doesn't work...
    }cout << endl;
    //Output : 2 3 4

    //EKhane int na likhe auto likhbo : 
    for(auto u:v){
        cout << u << " ";
    }cout << endl;
    //Output : 2 3 4

```
### Taking input till get 0 : 
```cpp
    while (cin>>n)
    {
        if(n==0) 
            break;
        v.push_back(n);
    }
```

### Sorting :

>Increasing : 1 2 3 4 

>Non - decreasing : 1 2 2 3 

>Decreasing : 4 3 2 1 

>Non - increasing : 4 4 2 1

Sorting of Array : 
```cpp
    int a[] = {2, 3, 4, 5};
//Array without index is a pointer...
// here , a means a+0 means starting pointer...a+4 means end pointer...
    sort(a, a+4);
    //a+0 থেকে a+4 এর আগ পর্যন্ত শর্ট করবে।
```

> Vector Sorting in Non-decreasing Order : 
```cpp
vector<int>v = {5, 3, 2, 1, 2};
    sort(v.begin(),v.end());

    for(auto u : v)
        cout << u << " ";
    cout << endl;
```

একটা রেঞ্জের মধ্যে শর্ট করা ঃ পার্সিয়াল শর্ট

```cpp
//O(nlog(n))
    sort(v.begin(), v.begin()+4);

    for(auto u : v)
        cout << u << " ";
    cout << endl;
    //output : 1 2 3 5 2
```

> Vector Sorting in Non - increasing Order: 

```cpp
//greater<int>() is a comparator which says to start with greater values...
sort(v.begin(),v.end(),greater<int>());

for(auto u : v)
        cout << u << " ";
    cout << endl;
//Output : 5 3 2 2 1
```

<mark>কিন্তু এটা ইউজ করব ঃ </mark>
```cpp
    sort(v.rbegin(),v.rend());
    for(auto u : v)
        cout << u << " ";
    cout << endl;
    //Output : 5 3 2 2 1
```
### Reverse a Vector : 

```cpp
    vector<int> v = {5, 3, 1, 4};

    reverse(v.begin(),v.end());
    for(auto u : v)
        cout << u << " ";
    cout << endl;
    //Output : 4 1 3 5
```


# STL_Cpp_CPS
