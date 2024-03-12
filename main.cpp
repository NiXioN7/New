#include <iostream>
#include <list>
using namespace std;
void show(list<int>& _lst)
{
    int k = 0;
    for (auto i : _lst)
    {
        cout << i << " ";
        k++;
    }
    /*
    for(auto it = _lst.cbegin(); it!= _lst.cend();i++)
    {
    cout << *it << " ";
    }
    for(auto it = _lst.begin(); it!=_lst.end();it++)
    {
    *it +=1;
    * cout << *it << " ";
    }
    */
    
    cout << endl;
    cout << k;
}
int main()
{
    setlocale(0, "ru");
    list<int> lst{ };
    srand(time(NULL));
    for(int i = 0;i<100;i++)
    {
        int k = rand()%200;
    lst.push_front(k);
    }
    cout << endl;
    show(lst);
    cout << endl;
    auto pos_it = lst.begin();
    lst.erase(pos_it);
    lst.push_front(202);
    show(lst);
    for (int i = 0; i < 1; i++, pos_it++);
    lst.erase(pos_it);
    lst.push_front(201);
    cout << endl;
    show(lst);
    for (int i = 0; i < 98; i++, pos_it++);
    lst.erase(pos_it);
    lst.push_back(203);
    show(lst);
}

