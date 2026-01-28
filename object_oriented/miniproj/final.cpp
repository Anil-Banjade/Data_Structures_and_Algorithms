#include <iostream>

class database
{
  int size;
  int count;
  int *array;

public:
  database()
  {
    size = 2;
    count = 0;
    array = new int[size];
  }

  void addElement(int num)
  {

    if (count >= size)
    {
      size = size * 2;
      std::cout << "\nArray Expanded\n";
      int *newArray = new int[size];
      for (int i = 0; i <= size; i++)
      {
        newArray[i] = array[i];
      }
      delete[] array;
      array = newArray;
    }
    array[count] = num;
    count++;
  }
  void deleteElement()
  {
    std::cout << "Enter element: ";
    int num;
    std::cin >> num;

    int position = -1;

    for (int i = 0; i < count; i++)
    {
      if (array[i] == num)
      {
        position = i;
        for (int j = position; j < count - 1; j++)
        {
          array[j] = array[j + 1];
        }
        count--;
        i--;
        std::cout << "Element deleted\n";
      }
    }
    if (position != -1)
    {
      std::cout << "Not there\n";
    }
    if (count <= size / 2)
    {
      size = size / 2;
      int *newArray = new int[size];

      for (int i = 0; i < count; i++)
      {
        newArray[i] = array[i];
      }

      delete[] array;
      array = newArray;

      std::cout << "Array shrunk\n";
    }
  }

  int getSize()
  {
    return size;
  }

  int getCount()
  {
    return count;
  }
  int *getArray()
  {
    return array;
  }
};

int main()
{

  database p1;
  bool condn = true;
  while (condn)
  {
    std::cout << " (p): Print element \n (a): Add element \n (d): Delete element \n (r): Return size \n (\
e): Exit\n";

    std::cout << "Enter option: ";
    char task;
    std::cin >> task;

    int *array = p1.getArray();

    int count = p1.getCount();

    switch (task)
    {

    case 'e':
      condn = false;
      break;

    case 'a':
      int num;
      std::cout << "Enter element: ";
      std::cin >> num;

      p1.addElement(num);
      break;

    case 'p':
      if (count == 0)
      {
        std::cout << "No elements \n";
      }
      for (int i = 0; i < count; i++)
      {
        std::cout << array[i] << " ";

        if (i < count - 1)
        {
          std::cout << ",";
        }
      }
      std::cout << "\n";
      break;
    case 'd':
      p1.deleteElement();
      break;

    case 'r':
      int size = p1.getSize();

      std::cout << "S: " << size << " E: " << count << "\n";
      break;
    }
  }
}
