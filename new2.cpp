class point{
int x,y;
void show()
{
    cout<< x <<"," << y << endl;

}
}
//if the compiler automatically generated then make a constructor and make a copy of even constructor
//this problem is called shallow copy 
//if the data member is non pointer then it works perfectly fine and we  do not have to explicityly define copy 
//constructor
//it is same as constructor which accepts object as argument and object should be constant and by reference it        // copies each member value to variables 
//loop constructor
//transfer the resources to another object in constant time
//destructor it is a member function which activates automatically or by delete operator when any object release the execution clock it follows LIFO order to release resources