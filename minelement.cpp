#include "Include.h"
double* minElement(int rangeOfArray, double* Array)
{	
	int amountofminEl = coutingMinEL(rangeOfArray, Array);
	double miniElement = minimalElement(rangeOfArray, Array);
	double* minElements = new double[amountofminEl];
	int specialrange = 0;
	while (specialrange < amountofminEl)
	{
		for (int i = 0; i < rangeOfArray; i++)//����� ������������ ��������
		{
			if (Array[i] < miniElement)
			{
				minElements[specialrange] = Array[i];
				specialrange++;
			}
			else if (Array[i] == miniElement)
			{
				minElements[specialrange] = Array[i];
				specialrange++;
			}
		}
	}
	return minElements;
}