#include "Include.h"
double * s3sort(int rangeOfArray, const double* Array)
{
	int counter = 0; 

	for (int i = 0; i < rangeOfArray; i++) 
	{
		if ((abs(Array[i])) <= 1)
		{
			counter++;
		}
	}


	auto* absArray = new double[counter]; 
	auto* notAbsArray = new double[rangeOfArray - counter]; 
	int j = 0;
	int k = 0;

	for (int i = 0; i < rangeOfArray; i++)
	{
		if ((abs(Array[i])) <= 1)
		{
			absArray[j] = Array[i];
			j++;
		}
		else
		{
			notAbsArray[k] = Array[i];
			k++;
		}
	}

	for (int i = 1; i < counter; i++)
		for (int j = i; j > 0 && absArray[j - 1] > absArray[j]; j--) // пока j>0 и элемент j-1 > j, x-массив int
			swap(absArray[j - 1], absArray[j]);        // меняем местами элементы j и j-1

	for (int i = 1; i < rangeOfArray - counter; i++)
		for (int j = i; j > 0 && notAbsArray[j - 1] > notAbsArray[j]; j--) // пока j>0 и элемент j-1 > j, x-массив int
			swap(notAbsArray[j - 1], notAbsArray[j]);        // меняем местами элементы j и j-1


	auto* sortedArray = new double[rangeOfArray];

	for (int i = 0; i < counter; i++)
	{
		sortedArray[i] = absArray[i];
	}

	j = 0;

	for (int i = counter; i < rangeOfArray; i++)
	{
		sortedArray[i] = notAbsArray[j];
		j++;
	}
	delete[] absArray;
	delete[] notAbsArray;
	return sortedArray;
}