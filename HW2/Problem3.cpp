#include <iostream>
#include <cmath>
#include <cstdlib>
 
using namespace std;

int Sum(int* nums, int len) {
	int len2 = len;
	int len3 = len;

	int bestVal[3] = {nums[0], nums[0] + nums[1], nums[0] + nums[1] + nums[2]};
	int bestOfBest = 0;

	for (int i = 1; i < len; i++) {
		if (abs(nums[i] - 330) < abs(bestVal[0] - 330)) {
			bestVal[0] = nums[i];
		}
	}
	while (len2 != 0) {
		for (int i = 0; i < (len2 - 1); i++) {
				if (abs(nums[i] + nums[i+1] - 330) < abs(bestVal[1] - 330)) {
					bestVal[1] = nums[i] + nums[i+1];
				}
			}
			len2--;
	}

	while (len3 != 0) {
		for (int i = 0; i < (len3 - 2); i++) {
				if (abs(nums[i] + nums[i+1] + nums[i+2] - 330) < abs(bestVal[2] - 330)) {
					bestVal[2] = nums[i] + nums[i+1] + nums[i+2];
				}
			}
			len3--;
	}

	for (int i = 0; i < 3; i++) {
		if (abs(bestOfBest - 330) > abs(bestVal[i] - 330)) {
			bestOfBest = bestVal[i];
		}
	}

	return bestOfBest;
}


