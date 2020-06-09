#include "Include.h"
double *s3sumneg(int rangeOfArray, double* Array)
{

	int iterForFirstNegativeElement = 0, iterForSecondNegativeElement = 0;
	double *flagandsum = new double[2], firstNegativeElement = 0.0, secondNegativeElement = 0.0;
	double sum = 0.0;
	if (firstNegativeElement == 0.0 && secondNegativeElement == 0.0) {
		for (iterForFirstNegativeElement; iterForFirstNegativeElement < rangeOfArray; iterForFirstNegativeElement++)
		{
			if (Array[iterForFirstNegativeElement] < 0)
			{
				firstNegativeElement = Array[iterForFirstNegativeElement];
				break;
			}
		}
		for (iterForSecondNegativeElement = iterForFirstNegativeElement+1; iterForSecondNegativeElement < rangeOfArray; iterForSecondNegativeElement++)
		{
			if (Array[iterForSecondNegativeElement] < 0)
			{
				secondNegativeElement = Array[iterForSecondNegativeElement];
				break;
			}
		}
	}
	if (firstNegativeElement == 0)//no any neg elem
	{
		flagandsum[0] = 1.0;
		return flagandsum;
	}
	else if (firstNegativeElement != 0 and secondNegativeElement == 0)//only one neg elem
	{
		flagandsum[0] = 2.0;
		return flagandsum;
	}
	else if (firstNegativeElement < 0 and secondNegativeElement < 0)
	{
		if (iterForFirstNegativeElement + 1 == iterForSecondNegativeElement) //first and second negative elements are going after each other
		{
			flagandsum[0] = 3.0;
			return flagandsum;	
		}
		else if (iterForFirstNegativeElement + 2 == iterForSecondNegativeElement)//only 1 elem between first and sec elements
		{
			flagandsum[0] = 4.0;
			return flagandsum;
		}
		else
		{
			flagandsum[0] = 0.0;
			flagandsum[1] = 0.0;
			for (int i = iterForFirstNegativeElement + 1; i < iterForSecondNegativeElement; i++)
			{
				sum += Array[i];
			}
			flagandsum[1] = sum;
		}
		return flagandsum;
	}
	return flagandsum;
}