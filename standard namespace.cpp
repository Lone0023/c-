//#include<iostream>
//int main()
    //{
        /*When you will hover your cursor on std it will show you that it is standard namespace that
        that means the function cout is belongs to a standard namespace so instead of writting std before
        every function that belongs to standard namespace we can include the whole standard namespace in our
        code so that we dont have to write them again in our code. Lets see how its done.
        */
        //std::cout<<"Hello World\n";
        //return 0;
    //}
#include<iostream>
using namespace std; //this means that we have include every function that belongs to standard name space.
int main()
    {
        cout<<"Hello World\n";//now we dont have to write std before cout as we have already include the function that belongs to standard namespace.
        return 0;
    }






