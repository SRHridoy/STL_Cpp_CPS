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

## String : 
```cpp
    string s;
    s = s + 'a';//a
    s = s + 'b';//ab
    s += 'c';//abc

    cout << s << endl;

    //Initialization : 
    string name = "Hridoy";
    name += ' ';
    name += 'C';
    cout << name << endl;

    //Size : 
    cout << name.size() << endl;

    //Accessing :
    cout << name[0] << " " << name[1]<< " " << name[2] << endl;

    name[0] = 'R';
    cout << name << endl;

    //Concatinating : 
    string f = "Sohanur",l = "Rahman";
    char m = ' ';

    string fullName = f+m+l;
    cout << fullName << endl;

    //in same string : 
    f+=m;
    f+=l;
    cout << f << endl;
```

```cpp
    //clear():
    string s1 = "Sohanur";
    cout << s1 <<endl;
    s1.clear();
    cout << s1 << endl;

    //Empty():
    cout << s1.empty() << endl;

    s1 = "Rahman";

    //Copying :
    string s2 = "Hridoy";
    s1 = s2;
    cout << s1 << endl;

    cout << s1.empty() << endl;
```


### স্ট্রিং প্রিন্টিং ঃ 
```cpp
    string name = "Muhammad Sohanur Rahman";
    string::iterator it;
    for(it = name.begin(); it != name.end(); it++){
        cout << *it << " ";
    }cout << endl;
    //M u h a m m a d   S o h a n u r   R a h m a n 

    //এটা ইউজ করব ঃ 
    for(auto u:name){
        cout << u;
    }cout << endl;
    //Muhammad Sohanur Rahman
```
### String Compare and Reverse : 
```cpp
    //Compare two string : 
    string s1 = "Muhammad", s2 = "muhammad";

    //O(N)
    if(s1==s2) cout << "Equal" << endl;
    else cout << "Not equal" << endl;

    //Reverse : O(N)
    string s = "Hridoy";
    reverse(s.begin(),s.end());
    cout << s << endl;
```

### Palindrome : 
```cpp
    string s = "aabAa";
    string tmp = s;

    reverse(tmp.begin(),tmp.end());
    
    if(s == tmp) cout << "Palindrome\n";
    else cout << "Not Palindrome\n";

    //Not Palindrome
```

### স্টিং ইউজার ইনপুট ঃ 
```cpp
//User input : 
    string s;
    cin >> s;
```

### cin and cout কে optimize করার জন্যে এটা ইউজ করবঃ 
```cpp
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
```
### endl ইউজ করব না এটা করে তাই স্লো:
```cpp
#define endl '\n'
```
কিন্তু ইন্টারেক্টিভ প্রব্লেমের সময় endl ইউজ করব।


### স্পেসসহ ইনপুট নিব যেভাবে ঃ 
```cpp
    string s;
    //এখানে স্পেস থাকলে স্পেসের পরের গুলা নিবে নাহ।
    // cin >> s;//Hridoy king
    // cout << s << endl;//Hridoy

    //Getting full line input : 
    getline(cin, s);
    cout << s << endl;
```




### Testcase আকারে ইনপুট নিতে cin.ignore() use করব ঃ 
```cpp
//এখানে যদি cin.tie(0);cout.tie(0); ইউজ না করি একটা একটা ক্করে ইনপুট হবে আর প্রিন্ট হবে আর দিলে আগে সব ইনপুট নেওয়া হবে সবশেষে প্রিন্ট হবে।
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        string s;
        
        //cin.ignore();
        char c;
        cin >> c;
        getline(cin,s);
        s+=c;
        cout << "Case " << i << " " << s << endl;
    }
```

### String Sorting, Unique(Remove Duplicates) : 
```cpp
    //String Sorting : 
    string s = "adcbaBACA";
    sort(s.begin(),s.end());
    cout << s << endl;//AABCaabcd

    //String Decending Sorting :
    sort(s.rbegin(),s.rend());
    cout << s << endl;//dcbaaCBAA

    //Unique string : 
    sort(s.begin(),s.end());
    int size = unique(s.begin(),s.end())-s.begin();
    cout << "No. of unique elemets is : " << size << endl;
    for (int i = 0; i < size; i++)
    {
        cout << s[i];
    }cout << endl;

    //No. of unique elemets is : 7
    //ABCabcd
```

### max and min Element in lexicographical order and Erase in string : 
```cpp
    string s = "deacbAAA";

    cout << *max_element(s.begin(),s.end()) << endl;//e
    cout << *min_element(s.begin(),s.end()) << endl;//A

    s.erase(s.begin());
    cout << s << endl;//eacbAAA

    //Erase from back : 
    s.erase(s.end()-1);
    cout << s << endl;//eacbAA

    //Erase from back : 
    s.pop_back();

    //See last element:
    s.back();

```

### Vector of String Sorting : 
```cpp
    vector<string>v;
    v.push_back("Sohanur");
    v.push_back("Rahman");
    v.push_back("Hridoy");
    v.push_back("Hridu");
    v.push_back("Hrido");
    v.push_back("Tanha");
    v.push_back("Tasin");
    v.push_back("Rupa");
    v.push_back("Tobib");
    v.push_back("Sultana");
    v.push_back("nova");
    v.push_back("nita");
    v.push_back("Rafi");

    sort(v.begin(),v.end());

    for(auto u:v){
        cout << u << endl;
    }

    //Prefix:Samne theke jekono length pojonto nia...
    //Suffix : Pison theke jekono length pojonto nia...
    //Substring : String er jekono continuous part nia ar gap thakbe nah ...
    //Subsequece : String er gap thakle ar continuous thakle 

```

### How to delete specific element in String : 
```cpp
    string s = "AAHAAARAAAIAAADAAOAAYAA";
    s.erase(remove(s.begin(),s.end(),'A'),s.end());
    cout << s <<endl;//HRIDOY
```

### Calculate Unique Strings : 
```cpp
    vector<string>v;
    v.push_back("Sohanur");
    v.push_back("Sohanur");
    v.push_back("Sohanur");
    v.push_back("Rupa");
    v.push_back("Rupa");
    v.push_back("Rupa");
    v.push_back("Tanha"); 
    v.push_back("Tanha"); 
    v.push_back("Tanha"); 

    //sort first:
    sort(v.begin(),v.end());
    //calculate no of unique strings:
    int size = unique(v.begin(),v.end())-v.begin();

    for(int i = 0; i < size; i++) cout << v[i] << endl; 

// Rupa
// Sohanur
// Tanha
```

### Integer to String Conversion : 
```cpp
    int a = 123;
    string s = to_string(a);
    cout << s << endl;
    s[0]=2;//using this I got emojis...
    cout << s << endl;
    s[0]='2';
    cout << s << endl;
    //123
    //☻23
    //223
```

### String to Integer Conversion : 

```cpp
    string s = "222";

    int a = stoi(s);
    cout << a << endl;//222
    a++;
    cout << a << endl;//223
```


### Checking a char is lower or upper : 
```cpp
    char c = 'A';
    bool f1 = isupper(c);
    cout << f1 << endl;//1
    char ch = 'a';
    bool f2 = islower(ch);
    cout << f2 << endl;//1
    //Checking space or not : 
    char cs = ' ';
    bool f3 = isspace(cs);
    cout << f3 << endl;//
```
### Converting Uppercase char to lowercase:
```cpp
    char ch = 'v';
    ch = toupper (ch);
    cout << ch << endl;//V
    ch = tolower(ch);
    cout << ch << endl;//v
```
### Conversion full string of upper to lower and vice-versa:
```cpp
    string s;
    cin >> s;

    transform(s.begin(),s.end(),s.begin(),::tolower);
```


### Copy a specified substring : 
```cpp
    string s = "Sohanur ";
    string t = "Optimistic wise innocent";
    copy(t.begin()+17,t.begin()+25,back_inserter(s));
    cout << s << endl;
```

### Check a substring present or not : 
```cpp
    string s = "Hridoy";
    if(s.find("doy")!=-1)cout << "Substring" << endl;
    else cout << "Not Substring" << endl;
    //Substring
```


### Find Next Greater Permutaion in string returns 1 if greater possible return 0 otherwise but cyclicly change the string to next permutaion : 
```cpp
        string s;
        cin >> s;
        bool haveNextGreaterPermutaion = next_permutation(s.begin(),s.end());
        if(haveNextGreaterPermutaion)
            cout << s << endl;
        else    
            cout << "no answer" << endl;
```

### Finding all Permutations : 
```cpp
    string s = "ABC";
    int cnt = 0;
    do
    {
        cout << s << endl;
        cnt++;
    } while (next_permutation(s.begin(),s.end()));
    cout << "No of Permutaion is " << cnt << endl;

/*ABC
ACB
BAC
BCA
CAB
CBA
No of Permutaion is 6*/
```


### Substring in String : 
```cpp
    string s = "Hridoy007King";
    string subS = s.substr(6,3);
    cout << subS << endl;//007
```

### Generating all substring from a string :

```cpp
void genSubStr(string s, int n){
    for(int i = 0;i < n; i++){
        for(int j = 1; j <= n-i; j++){
            cout << s.substr(i,j) << endl;
        }

    }

    /*
        Hridoy
        H
        Hr
        Hri
        Hrid
        Hrido
        Hridoy
        r
        ri
        rid
        rido
        ridoy
        i
        id
        ido
        idoy
        d
        do
        doy
        o
        oy
        y
    */
}
```
### Split a String : 
```cpp
    string s = "Hello boys, I am doing cp!";
    vector<string>v;
    stringstream ss(s);
    string tmp;
    while(getline(ss,tmp,' ')) v.push_back(tmp);

    for(auto u:v)cout << u << endl;
    /*
    Hello
    boys,
    I
    am
    doing
    cp!
    */
```


## Pair : 

```cpp
    pair<int,int>pii;
    pii.first = 12;
    pii.second = 21;
    cout << pii.first << " " << pii.second << endl;

    pair<string,vector<int>>psv;

    psv.first = "Hridoy ";
    psv.second = {0,0,7};

    cout << psv.first;
    for(auto u:psv.second) cout << u ;
    cout << endl;

    /*
    12 21
    Hridoy007
    */


   //Initializing:
   pair<int,int>p;
   p = make_pair(2,3);
   p = {5,5};
   p.first++;
   cout << p.first << " " << p.second << endl;//6 5
```

### Comparing pair and find maximum and minimum pair : 
```cpp
    pair<int,int> p1,p2;

    p1 = {3,5};
    p2 = {1,6};

    if(p1<p2) cout << "YES\n";
    else cout << "NO\n";

    //Findig minimum pair:
    pair<int,int> p = min(p1,p2);
    cout << p.first << " " << p.second << endl;
```

### Sorting of pair : 
```cpp
    vector<pair<int,int>>v;

    v.push_back({6,5});
    v.push_back({2,3});
    v.push_back({4,5});
    v.push_back({6,1});
    v.push_back({1,9});

    cout << "Sort in ascending order : " << endl;
    //Sort in ascending order : 
    sort(v.begin(),v.end());

    for(auto u:v)cout << u.first << " " << u.second << endl;

    cout << "Sort in descending order : " << endl;
    //Sort in descending order : 
    sort(v.rbegin(),v.rend());

    for(auto u:v)cout << u.first << " " << u.second << endl;
```

### Array of Pair : 

```cpp
    pair<int,int>ap[] = {{6,5},{2,3},{4,5},{6,1},{1,9}};
    
    sort(ap,ap+5);
    
    for(auto u:ap) cout << u.first << " " << u.second << endl;
```

### Sorting Different type of pair : 
```cpp
    vector<pair<string,int>>v;

    v.push_back({"Hridoy",21});
    v.push_back({"Nova",6});
    v.push_back({"Rupa",95});
    v.push_back({"Hridoy",3});
    v.push_back({"Nova",6});

    sort(v.begin(),v.end());

    for(auto u:v) cout << u.first << " " << u.second << endl;
    /*
    Hridoy 3
    Hridoy 21
    Nova 6
    Nova 6
    Rupa 95
    */

```


### Finding Unique Pair : 

```cpp
    vector<pair<string,int>>v;

    v.push_back({"Hridoy",21});
    v.push_back({"Hridoy",21});
    v.push_back({"Nova",6});
    v.push_back({"Rupa",95});
    v.push_back({"Rupa",95});
    v.push_back({"Hridoy",3});
    v.push_back({"Hridoy",3});
    v.push_back({"Nova",6});

    sort(v.begin(),v.end());

    int size = unique(v.begin(),v.end())-v.begin();

    for(int i = 0; i < size; i++) cout << v[i].first << " " << v[i].second << endl;
    
    /*
    Hridoy 3
    Hridoy 21
    Nova 6
    Rupa 95
    */
```


### Taking user input in Pair : 

```cpp
    pair<int,int>p;
    cin >> p.first >> p.second;
    cout << p.first << " " << p.second << endl;
```


### Custom sort of pair using Comparator : 
//ট্রিক্সঃ যেটা অন্যভাবে দরকার সেটা ইনপুট নেবার সময় (-) দ্বারা গুন করে নিব।
```cpp
bool cmp(const pair<int,int>&p1, const pair<int,int>&p2){
    if(p1.first>p2.first) return 1;
    else if(p1.first==p2.first) return p1.second<p2.second;
    else return 0;
}

int main(){
    optimize();

    vector<pair<int,int>>v;
    v={{4,143},{3,120},{4,500},{1,20}};

    sort(v.begin(),v.end(),cmp);

    for(auto u:v) cout << u.first << " " << u.second << endl;
    /*
    4 143
    4 500
    3 120
    1 20
    */
}
```
## Map : 

### Finding frequencies using map : 
```cpp
    vector<int>v={1,1,2,1,2,2,3,3,4,4,5,1,3,2};
    map<int,int>mp;
    for(auto u:v) mp[u]++;

    for(auto u:mp){
        cout << u.first << " " << u.second << endl;
    }
    /*
    1 4
    2 4
    3 3
    4 2
    5 1
    */
```




## Set : 
```cpp
    set<int> s = {1, 1, 3, 3, 2, 2};

    cout << s.size() << endl;
    for(auto u:s) cout << u << " ";
    cout << endl;

    //print using iterator : 
    set<int>::iterator it;
    for(it = s.begin();it!=s.end();it++) cout << *it << " ";
    cout << endl;
    //1
    //2
    //3

    //clear() : 
    s.clear();
    //empty();
    cout << s.empty() << endl;//1

    //taking data : 
    s.insert(22);//log2(n)
    s.insert(22);
    s.insert(3);
    s.insert(3);

    cout << s.size() << endl;
    for(auto u:s) cout << u << " ";
    cout << endl;
    //3
    //22

    // Present or not using count : log2(n)
    cout << s.count(2) << endl;//0
    cout << s.count(3) << endl;//1

    //first element : 
    cout << *s.begin() << endl;//3 

    //cout < *(s.begin()+1) << endl; impossible


    //Last element : 
    //cout << *(s.end()-1)<< endl; //impossible
    cout << *(--s.end()) << endl;//22 works...
    cout << *(s.rbegin()) << endl;//22


    //Erase any element : 
    s.erase(22);
    cout << s.size() << endl;//1
    for(auto u:s) cout << u << " ";//3
    cout << endl;

    s.insert(1);
    s.insert(4);
    s.insert(5);
    s.insert(8);

    //Erase 1st element:
    s.erase(s.begin());
    cout << s.size() << endl;
    for(auto u : s) cout << u << " ";
    cout << endl;
    //3 4 5 8

    //Erase Last element : 
    //s.erase(s.rbegin()); doesn't work
    s.erase(--s.end());
    for(auto u : s) cout << u << " ";
    cout << endl;
    //3 4 5

```


### set of Strings :

```cpp
    set<string>s;
    s.insert("Sohanur");
    s.insert("Sultana");
    s.insert("Rafiq");
    s.insert("Rupa");
    s.insert("Nova");
    s.insert("Tanha");
    s.insert("Tasin");
    s.insert("Sohanur");
    s.insert("Sultana");
    s.insert("Rafiq");
    s.insert("Rupa");
    s.insert("Nova");
    s.insert("Tanha");
    s.insert("Tasin");

    cout << s.size() << endl;
    for(auto u : s) cout << u << endl;

    /*
            7
        Nova
        Rafiq
        Rupa
        Sohanur
        Sultana
        Tanha
        Tasin
    */
```

### Set of Pairs :

```cpp
    set<pair<int,int>>s;

    s.insert({2,3});
    s.insert({4,1});
    s.insert({4,1});
    s.insert({2,1});
    s.insert({4,3});
    s.insert({5,1});
    s.insert({5,1});
    s.insert({5,4});

    cout << s.size() << endl;
    for(auto u:s)cout << u.first << " " << u.second << endl;

    /*
        6
        2 1
        2 3
        4 1
        4 3
        5 1
        5 4
    */
```


### Set in decreasing order using comparator : 

```cpp
    set<int,greater<int>>s;
    s.insert(2);
    s.insert(3);
    s.insert(1);
    s.insert(5);
    s.insert(8);

    cout << s.size() << endl;
    for(auto u:s) cout << u << " ";
    cout << endl;

    //5
    //8 5 3 2 1 


    set<string,greater<string>>ss;
    ss.insert("Sohanur");
    ss.insert("Nova");
    ss.insert("Hridoy");
    ss.insert("Hridoy");
    ss.insert("Rupa");
    ss.insert("Tanha");

    for(auto u:ss) cout << u << endl;
    /*
    Tanha
    Sohanur
    Rupa
    Nova
    Hridoy
    */


    set<pair<int,int>,greater<pair<int,int>>>spg;
    spg.insert({1,2});
    spg.insert({2,3});
    spg.insert({4,2});
    for(auto u : spg) cout << u.first << " " << u.second << endl;
    /*
    4 2
    2 3
    1 2
    */
```

### Unordered_set : 
```cpp
    //ইউনিক করে কিন্তূ সর্ট করে নাঃ
    unordered_set<int>s;
    s.insert(3);
    s.insert(3);
    s.insert(1);
    s.insert(2);
    //insert,delete avg case e O(1) and worst case O(n)...
    for(auto u:s)cout << u << " ";
    cout << endl;
    //2 1 3
```

### Multiset : 

```cpp
    //Multi-set ---> unique thake nah ... but sorted thake....All operations log2(n)
    multiset<int>s;
    s.insert(1);
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(1);
    s.insert(4);
    s.insert(7);
    s.insert(9);
    s.insert(4);
    s.insert(3);

    cout << s.size() << endl;
    for(auto u:s) cout << u << " ";
    cout << endl;
    /*
    10
    1 1 1 2 3 3 4 4 7 9
    */
   //Occurance of 1 : 
   cout << s.count(1) << endl;//3
   //Erase : it deletes all occurances : log2(n)
   s.erase(1);
   for(auto u:s) cout << u << " ";
   cout << endl;
   //2 3 3 4 4 7 9

   //Erase only one occurace : log2(n)
   auto it = s.find(3);
   s.erase(it);
   for(auto u:s) cout << u << " ";
   cout << endl;
   //2 3 4 4 7 9
```



























































































