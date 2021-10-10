#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator it;

    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
int main()
{
    list<int> list1; //List of length 0

    /*	list1.push_back(2);
	list1.push_back(1);
	list1.push_back(13);*/

    int a;
    for (int i = 0 ; i < 3; i++)
    {
        cout << "Enter a number ";
        cin >> a;
        list1.push_back(a);
    }
    cout<<"Displaying list1 "<<endl;
    display(list1);
    
    /*Removing elements from a list
  //  list1.pop_back();
//  list1.remove();
//list1.pop_front();
    */
 display(list1);
    list<int> list2(3); // List of length 3 with zero elements
    list<int>::iterator iter;
    iter = list2.begin();
    for (iter = list2.begin(); iter != list2.end(); iter++)
    {
        cout << "Enter a number ";
        cin >> *iter;
    }
      cout<<"Displaying list2 "<<endl;
    display(list2);
    
    list1.sort();
    list2.sort();
    list1.merge(list2);
    cout<<"Displaying list1 after merge with list2 (sorted list) "<<endl;
    display (list1);
    return 0;
}