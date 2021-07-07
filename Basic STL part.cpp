দ্বিতীয় অংশ - স্ট্যান্ডার্ড টেম্প্লেট লাইব্রেরী

//vector--
//derclearation 

vector<int>array;
vector< double > water;
vector< long long > balance;
vector< char > characters;
vector< day > diary;

//vector input->

array.push_back( 100 );

//for knowing size we use vector.size()

int main() {
    vector< int > v;
    v.push_back( 1 );
    v.push_back( 2 );
    v.push_back( 3 );
    v.push_back( 4 );

    for(int i=0; i<v.size(); i++) cout << v[i] << endl;
   
    return 0;  
}

// //amra array te easily copy korte pari na 
// but vector a easily copy kora jai

int main() {
    vector< int > v, t;
    v.push_back( 1 );
    v.push_back( 2 );
    v.push_back( 3 );
    v.push_back( 4 );

    t = v; // copying
    for(int i=0; i<t.size(); i++) cout << t[i] << endl;
       
    return 0;  
}

// how to assign or creat 2d array

vector< int > v[100];

vector< vector< int > > v;

vector< vector< vector< int > > > v; // 3 dimensional

// string ->>>>>

//string is an data structure

int main() {
    string a, b, c;
    a = "this is a string"; // easy assigning
    b = a; // copy hoye gelo! :O
    c = a + b // c te rakhlam a ar b er concatation
    cout << c << endl; // print korlam
    printf("%s\n", c.c_str() ); // printf diyei korlam na hoy
   
    cout << c.size() << endl; // length print korlam
    for(int i=0; i<c.size(); i++) cout << c[i] ; 
// ekta ekta kore character print korlam
   
    return 0;
}

// asssign string in a vector

vector< string > vs;

// এই জিনিসটাকে বলে স্ট্যাক। মানে আমরা
//  সবার পরে যাকে প্রসেসিং করতে ঢুকাচ্ছি তাকে 
//  যদি আগে প্রসেসিং করি তাহলে সেটাই স্ট্যাক। 



stack<int>st;
st.push_back(100);
st.push_back(101);
st.push_back(102);

while(!st.empty())
{
	cout<<st.top()<<endl;//for printing top
	st.pop();//// removing that one
}

//priority queue

priority_queue< int > q;
    q.push( 10230 ); // inserting 10230
    q.push( 1021 ); // inserting 1021
    q.push( 102322 ); // inserting 102322
   
    while( !q.empty() ) {
        cout << q.top() << endl; // printing the top
        q.pop(); // removing that one
    } 

// ইটারেটর

 

// ইটারেটার হলো  অনেকটা সি এর পয়েন্টারের 
// মত একটা জিনিস। ইটারেটর আসলে পরে কাজে লাগবে,
//  কারণ অনেক জায়গায়ই STL এর ফাংশনগুলো একটা অ্যাডরেস 
//  পাঠায়, যে আমি যেই ডাটাটাকে খুঁজছি, সেটা ঠিক কোথায় আছে।


// iterator declear

    vector<int> :: iterator it;

//আর ফর লুপ দিয়ে একটা ভেক্টরের প্রথম থেকে শেষ পর্যন্ত সব এলিমেন্টের গলা কাটতে চাই তাহলে সেটা লিখতে হবে এভাবে।


    vector< int > v; v.pb( 1 ); v.pb( 2 ); v.pb( 3 );
    vector< int > :: iterator i;
    for( i = v.begin(); i < v.end(); i++ ) {
        printf("%d\n", *i);
        // ei khane gola kato!
    }


    struct data
    {
    	char name[100];
    	int height,weight;
    	long long income;
    };



    // pant dhila mastan and cha cha chowdhury func

    bool compare( data a, data b ) {
    if( a.income == b.income ) {
        if( a.height == b.height ) {
            if( a.weight == b.weight ) 
              return strlen( a.name ) < strlen( b.name );
            else return a.weight < b.weight;
        }else return a.height > b.height;
    }else return a.income > b.income;
}


sort( v.begin(), v.end(), compare );

//operator overload

struct data {
    char name[100];
    int height, weight;
    long long income;
   
    bool operator < ( const data& b ) const {
        if( income == b.income ) {
            if( height == b.height ) {
                if( weight == b.weight ) 

                   return strlen( name ) < strlen( b.name );
                else return weight < b.weight;
            }else return height > b.height;
        }else return income > b.income;
    }

};

///set

// set is very useful for find unique number


 set< int > s;
    s.insert( 10 ); 
    s.insert( 5 ); 
    s.insert( 9 );
   
    set< int > :: iterator it;
    for(it = s.begin(); it != s.end(); it++) {
        cout << *it << endl;
    }


// ম্যাপ

 

// ম্যাপও সেটের মতো একটা জিনিস। 

// কিন্তু ম্যাপ সেটের মত কোন জিনিস একটা রেখে 
// ওই ধরণের বাকি সবাইকে বাইরে ফেলে দেয় না।



সহজভাবে ম্যাপকে তুমি এভাবে চিন্তা করতে পারো, 
ম্যাপ হচ্ছে একটা অ্যারে, যেটার ইনডেক্স যেকোন
 কিছুই হতে পারে, আর সেটাতে যেটা ইচ্ছে সেটাই রাখা 
 যেতে পারে!

   
    map< string, int  > m;
    string goru;
   
    while( cin >> goru ) {
        if( goru == "moro" ) break;
        m[ goru ] ++;
        cout << goru <<" ase " << m[ goru ] << " ta :D " << endl;       
    }
   
    এই প্রোগ্রামটা করবে কি, গরুর নাম 
    ইনপুট নিতে থাকবে, আর প্রতিবার বলবে যে ওই জাতের 
    কয়টা গরু আছে।  ম্যাপকে অ্যারের মত ধরেই
     ইনক্রিমেন্ট করা যায়।

 

অবশ্য তুমি যদি তোমার বানানো কোন স্ট্রাকচার/ক্লাস 
রাখতে চাও ইনডেক্স হিসেবে, তোমাকে সেটার
 জন্য < অপারেটরটা ওভারলোড করে দিতে হবে।



  স্ট্রিংস্ট্রিম

 

 ধরো কোন শয়তান খুব শখ করে প্রবলেম সেট তৈরী করলো,
  আমাকে বলল, "তোমাকে একলাইনে যত্তগুলা ইচ্ছা তত্তগুলা 
  করে সংখ্যা দিমু, তুমি আমারে সর্ট কইরা দিবা! মুহাহাহাহা!"
   তখন কষে একটা চড় মারতে ইচ্ছে করলেও কিছু করার নেই। 
   তোমাকে তাই করতে হবে। 



আমরা লাইনের ইনপুট নেই হচ্ছে গেটস দিয়ে।

তো ব্যাপারটা এরকম হবে। 

   
    char line[1000];
    while( gets( line ) ) {
        stringstream ss( line ); // initialize kortesi
        int num; vector< int > v;
        while( ss >> num ) v.push_back( num ); // :P
        sort( v.begin(), v.end() );
        // print routine
    }

    //pair->>

pair< int, int > p;
pair< int, double > x;
pair< double, string > moru;
pair< goru, goru > fau;




নেক্সট পারমুটেশন, প্রিভ পারমুটেশন

এখন এভাবে যদি আমি এগারোটা বাচ্চার জন্য 
ঈদের জামা পড়িয়ে দেখতে চাই আমার খবরই আছে - 11!
 ভাবে ট্রাই করতে হবে। তো সেই জন্যই আছে STL এর
  নেক্সট পারমুটেশন

   
    vector< int > v;
    for(int i=0; i<11; i++) v.push_back( i );
   
    do {
        // protitat jama prottekke porai dekho shukh maximize hochche kina
    }while( next_permutation( v.begin(), v.end() ) );

 

আমরা ৩ এর জন্য যেভাবে সবগুলো পারমুটেশন
 জেনারেট করেছি, সেটাই এই নেক্সট পারমুটেশন
  করবে। খেয়াল কোর যে, নেক্সট পারমুটেশন 
  কিন্তু ঠিক অ্যালফাবেটিকালি পরের পারমুটেশনটাকে
   নেয়। তুমি যদি সব পারমুটেশন চাও, প্রথমে অবশ্যই 
   অ্যারেটাকে সর্টেড রেখো।


 রিভার্স

 

রিভার্স হচ্ছে একটা কিছুকে ধরে উল্টাই দেয়া।

ধরো আমার একটা ভেক্টর আছে।

 

vector< int > nacho;

reverse( nacho.begin(), nacho.end() );

 

পরের স্টেটমেন্টটা লিখলে, সে নাচোকে উল্টাই দিবে।



তো এই ছিলো ব্যাসিক সি++ আর STL।

কোন প্রশ্ন থাকলে আমাকে জানাও, আমি সেটা 
এখানে আপডেট করবো। আর একটা জিনিস মাথায় 
রেখো, তুমি যদি কোন কিছুতে ভালো হতে চাও,
 তোমার প্র্যাকটিস লাগবে, আর সেটা কেউ শিখিয়ে 
 দিতে পারবে না। তুমি যদি বেশি কোন কিছু ব্যবহার 
 করবে, তুমি তত ভালো হবে সেটাতে।