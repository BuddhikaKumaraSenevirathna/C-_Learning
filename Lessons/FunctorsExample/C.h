struct Person
{
    char name[50];
    int age;
    float salary;

    void operator()(int val){
        age = val;
    }
};