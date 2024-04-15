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

একটা রেঞ্জের মধ্যে শর্ট করাঃ পার্সিয়াল শর্ট

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

<mark>কিন্তু এটা ইউজ করবঃ </mark>
```cpp
    sort(v.rbegin(),v.rend());
    for(auto u : v)
        cout << u << " ";
    cout << endl;
    //Output : 5 3 2 2 1
```
### Reverse a Vector : 
পার্সিয়ালি রিফার্স পসিবল।

```cpp
    vector<int> v = {5, 3, 1, 4};

    reverse(v.begin(),v.end());
    for(auto u : v)
        cout << u << " ";
    cout << endl;
    //Output : 4 1 3 5
```

### Accessing Last Element, First Element and Erase : 

```cpp
    vector<int> v = {2, 3, 4, 5};

    //O(1)
    cout << v.back() << endl;//5


    //Delete last element : 
    //O(1)
    v.pop_back();
    cout << v.back() << endl;//4


    //O(1)
    //First element : 
    cout << *v.begin() << endl;//2

    //Erase :যেকোনো পয়েন্টার দিলেই এরেজ করবে। আর পরের গুলা শিফট করে তাই এটার কম্পেক্সিটি O(n)
    v.erase(v.begin());
    cout << *v.begin() <<endl;//3
```
Example : 
```cpp
    vector<int>v1 = {3, 4, 2, 1 ,6};
    v1.erase(v1.begin()+4);
    for(auto u:v1) cout << u << " ";
    cout << endl;
    //Output : 3 4 2 1 
```
যদি ফাস্ট থেকে ইরেজ করে করে কোন কোড করা লাগে তাইলে ইরেজ অনেক টাইম নিবে প্রায় O(n^2) তাই এটাকে রিভার্স করে pop_back() করব টাইম কম্পেক্সিটি কমবে।

```cpp
    vector<int>v = {2, 3, 4, 5};

    reverse(v.begin(), v.end());//5 4 3 2 

    while (!v.empty())
    {
        cout << v.back() << endl;
        v.pop_back();
    }
```

### ইউনিক এলিমেন্ট ইন ভেক্টর(Remove Consecutive Duplicates):

<mark>Remove all the duplicate elements from a container:</mark>

```cpp
    vector<int>v = {2, 2, 1, 1, 3, 3, 4, 5, 6, 9, 1};

    //Firstly Sort:
    sort(v.begin(),v.end());

    vector<int>::iterator it;
    
    //Apply unique:
    it = unique(v.begin(),v.end());

    //Resize to remove the undefined terms:
    v.resize(distance(v.begin(),it));

    //Print:
    for(auto u:v) cout << u << " ";
    cout << endl;
    //Output : 1 2 3 4 5 6 9 
```


<mark> Count unique elements:</mark>


```cpp
    vector<int>v={1, 1, 2, 2, 3, 3, 4, 5, 6, 6, 1, 10, 3, 2};
    vector<int>::iterator it;

    int count = 0;
    sort(v.begin(),v.end());

    it = unique(v.begin(),v.end());
    count = distance(v.begin(),it);

    cout << count << endl;
```
### এভাবে ইউজ করব
```cpp
    vector<int>v = {1,2,2,3,3,4,5,6,6,7,8,8,9};
    int cntUnique = unique(v.begin(),v.end())-v.begin();
    cout << "No. of unique elements is " << cntUnique << endl;
    for(int i = 0; i < cntUnique; i++){
        cout << v[i] << " ";
    }cout << endl;

    //Output : No. of unique elements is 9
                //1 2 3 4 5 6 7 8 9
```


### max_element and min_element:

```cpp
    vector<int>v = {9, 2, 3, 4, 1, 6};

    //Gives the maximum element's Index:
    cout << max_element(v.begin(), v.end()) - v.begin() << endl;//0
     //Gives the maximum element:
    cout << *max_element(v.begin(), v.end()) << endl;//9

    //Gives the minimum element's Index:
    cout << min_element(v.begin(), v.end()) - v.begin() << endl;//4
     //Gives the minimum element:
    cout << *min_element(v.begin(), v.end()) << endl;//1
```





