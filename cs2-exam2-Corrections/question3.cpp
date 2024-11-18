/*
QUESTION 3: In the given code, which statement can used instead of Statement 1?

class Sample{
  public:
    Sample(int xValue = 0; int yValue = 0);
    void show_data();
}
int main(){
Sample *sample1 = new Sample;
(*sample1).show_data();   // statement 1
}

ANSWER: (sample1)->show_data();
*/