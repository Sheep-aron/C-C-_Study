//【一维数组】交换数组
//#include <iostream>
//
//void swap(int* m, int* n)
//{
//	int tmp = *n;
//	*n = *m;
//	*m = tmp;
//}
//
//int main()
//{
//	int arr1[10] = { 0 };
//	int arr2[10] = { 0 };
//	for (int i = 0; i < 10; ++i)
//		std::cin >> arr1[i];
//	for (int i = 0; i < 10; ++i)
//		std::cin >> arr2[i];
//	for (int i = 0; i < 10; ++i)
//		swap(&arr1[i], &arr2[i]);
//	for (int i = 0; i < 10; ++i)
//		std::cout << arr1[i] << " ";
//	std::cout << std::endl;
//	for (int i = 0; i < 10; ++i)
//		std::cout << arr2[i] << " ";
//	return 0;
//}

//#include <iostream>
//
//void swap(int* m, int* n)
//{
//	int tmp = *n;
//	*n = *m;
//	*m = tmp;
//}
//
//void init(int* arr, int len)
//{
//	for (int i = 0; i < len; ++i)
//		arr[i] = 0;
//}
//
//void print(int* arr, int  len)
//{
//	for (int i = 0; i < len; ++i)
//		std::cout << arr[i] << " ";
//	std::cout << std::endl;
//}
//
//void reverse(int* arr, int len)
//{
//	for (int left = 0, right = len - 1; left < right; ++left, --right)
//		swap(&arr[left], &arr[right]);
//}
//
//int main()
//{
//
//	return 0;
//}

//void bubbleSort(int* arr, int len)
//{
//	for (int i = 0; i < len - 1; ++i)
//	{
//		for (int j = 0; j < len - 1 - i; ++j)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}

