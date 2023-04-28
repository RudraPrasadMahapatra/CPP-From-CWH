//Abstract base class(having minimum 1 pure virtual function) and pure Virtual function 
#include<iostream>
using namespace std;

class SuitCoder{
    protected:
        string title;
        float rating;
    public:
        SuitCoder(string s, float r){
            title =  s;
            rating = r;
        }
        virtual void display() = 0; // do-nothing function --> pure virtual function
};
class SuitCoderVideo: public SuitCoder
{
    float videoLength;
    public:
        SuitCoderVideo(string s, float r, float vl): SuitCoder(s, r){
            videoLength = vl;
        }
        void display(){
            cout<<"This is an amazing video with title "<<title<<endl;
            cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
            cout<<"Length of this video is: "<<videoLength<<" minutes"<<endl;
        }
};    
class SuitCoderText: public SuitCoder
{
    int words;
    public:
        SuitCoderText(string s, float r, int WordCount): SuitCoder(s, r){
            words = WordCount;
        }
     void display(){
      cout<<"This is an amazing text tutorial with title "<<title<<endl;
      cout<<"Ratings of this text tutorial: "<<rating<<" out of 5 stars"<<endl;
      cout<<"No of words in this text tutorial is: "<<words<<" words"<<endl;
         }
};

int main(){
    string title;
    float rating, vlen;
    int words;

    // for SuitCodery Video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    SuitCoderVideo djVideo(title, rating, vlen);

    // for Suitcoder Text
    title = "Django tutorial Text";
    words = 433;
    rating = 4.19;
    SuitCoderText djText(title, rating, words);

    SuitCoder* tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}
