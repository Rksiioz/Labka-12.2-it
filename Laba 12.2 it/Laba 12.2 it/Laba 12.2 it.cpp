#include <iostream>
#include <windows.h>

using namespace std;

typedef int Info;
struct Elem
{
    Elem* link;
    Info  info;
};

void Input(Elem*& first, Elem*& last, Info value)
{
    Elem* tmp = new Elem;
    tmp->info = value;
    tmp->link = NULL;
    if (last != NULL)
        last->link = tmp;
    last = tmp;
    if (first == NULL)
        first = tmp;
}

Info Delete(Elem*& first, Elem*& last)
{
    Elem* tmp = first->link;
    Info value = first->info;
    delete first;
    first = tmp;
    if (first == NULL)
        last = NULL;
    return value;
}

int CountOddElements(Elem* first)
{
    int count = 0;
    Elem* current = first;

    while (current != nullptr)
    {
        if (current->info % 2 != 0)
            count++;
        current = current->link;
    }

    return count;
}

int main()
{
    Elem* first = NULL,
        * last = NULL;
    int n;
    cout << "Vvedit kilkist elem: ";
    cin >> n;
    for (int i = 1; i < n + 1; i++) {
        int value;
        cout << "Vvedit znachenya " << i << "-go elementu: ";
        cin >> value;
        Input(first, last, value);
    }

    int oddCount = CountOddElements(first);
    cout << "Kilkist elem z neparnymy znachenyami: " << oddCount << endl;

    return 0;
}
