//Guy Goudeau
//Sep 15, 2015
#include <iostream>


struct Node
{
	Node* next;
	int data;
};


int main()
{
	char num = 's';
	char* pointer = &num;

	std::cout << pointer << std::endl;
	std::cout << num << std::endl;


	int arr[5] = {1, 2, 4, 5, 6};
	int* pointer2 = arr;
	std::cout << *(arr + 0) << " " << arr[3] << std::endl;


	Node *root;
	Node second;
	Node third;
	root = &second;
	root->next = &second;

	std::cout << root->next << " " << root << std::endl;



	system("pause");
	return 0;
}