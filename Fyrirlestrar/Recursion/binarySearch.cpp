//This program combines Displays 14.6 and 7.12 to fill an array of integers,
// sorting the array and finally performing binary search (recursive version) on the array
#include <iostream>
using namespace std;
const int ARRAY_SIZE = 10;

void fill_array(int a[], int size, int& number_used);
//Precondition: size is the declared size of the array a.
//Postcondition: number_used is the number of values stored in a.
//a[0] through a[number_used - 1] have been filled with
//nonnegative integers read from the keyboard.

void sort(int a[], int number_used);
//Precondition: number_used <= declared size of the array a.
//The array elements a[0] through a[number_used - 1] have values.
//Postcondition: The values of a[0] through a[number_used - 1] have
//been rearranged so that a[0] <= a[1] <= ... <= a[number_used - 1].

void swap_values(int& v1, int& v2);
//Interchanges the values of v1 and v2.

int index_of_smallest(const int a[], int start_index, int number_used);
//Precondition: 0 <= start_index < number_used. Referenced array elements have
//values.
//Returns the index i such that a[i] is the smallest of the values
//a[start_index], a[start_index + 1], ..., a[number_used - 1].


void search(const int a[], int first, int last,
                    int key, bool& found, int& location);
//Precondition: a[first] through a[last] are sorted in increasing order.
//Postcondition: if key is not one of the values a[first] through a[last],
//then found == false; otherwise, a[location] == key and found == true.


int main( )
{
    int a[ARRAY_SIZE];
    const int final_index = ARRAY_SIZE - 1;

//This portion of the program contains some code to fill and sort
//the array a. The exact details are irrelevant to this example.
// Here I (Hrafn) input code from Display 7.12

    cout << "This program sorts numbers from lowest to highest.\n";

    int number_used;
    fill_array(a, ARRAY_SIZE, number_used);
    sort(a, number_used);

    cout << "In sorted order the numbers are:\n";
    for (int index = 0; index < number_used; index++)
        cout << a[index] << " ";
    cout << endl;

    int key, location;
    do {
        bool found;
        cout << "Enter number to be located: ";
        cin >> key;

        if (key >= 0)
        {
            search(a, 0, final_index, key, found, location);

            if (found)
                cout << key << " is in index location "
                    << location << endl;
            else
                cout << key << " is not in the array." << endl;
        }
    } while (key >= 0);

    return 0;
}


void search(const int a[], int first, int last,
                           int key, bool& found, int& location)
{
    int mid;
    if (first > last)
    {
        found = false;
    }
    else
    {
        mid = (first + last)/2;

        if (key == a[mid])
        {
            found = true;
            location = mid;
        }
        else if (key < a[mid])
        {
            search(a, first, mid - 1, key, found, location);
        }
        else if (key > a[mid])
        {
            search(a, mid + 1, last, key, found, location);
        }
    }
}

void fill_array(int a[], int size, int& number_used)
{
    using namespace std;
    cout << "Enter up to " << size << " nonnegative whole numbers.\n"
         << "Mark the end of the list with a negative number.\n";
    int next, index = 0;
    cin >> next;
    while ((next >= 0) && (index < size))
    {
        a[index] = next;
        index++;
        cin >> next;
    }

    number_used = index;
}


void sort(int a[], int number_used)
{
    int index_of_next_smallest;

    for (int index = 0; index < number_used - 1; index++)
    {//Place the correct value in a[index]:
        index_of_next_smallest =
                     index_of_smallest(a, index, number_used);
        swap_values(a[index], a[index_of_next_smallest]);
        //a[0] <= a[1] <=...<= a[index] are the smallest of the original array
        //elements. The rest of the elements are in the remaining positions.
    }
}


void swap_values(int& v1, int& v2)
{
    int temp;
    temp = v1;
    v1 = v2;
    v2 = temp;
}


int index_of_smallest(const int a[], int start_index, int number_used)
{
    int min = a[start_index],
        index_of_min = start_index;
    for (int index = start_index + 1; index < number_used; index++)
        if (a[index] < min)
        {
            min = a[index];
            index_of_min = index;
            //min is the smallest of a[start_index] through a[index]
        }

    return index_of_min;
}




