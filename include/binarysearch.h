#include <cstdint>

#include<iostream>


namespace edu {
	namespace vcccd {
		namespace vc {
			namespace csv15 {


				template<class T>

				int64_t binarysearch(const T &value, T array[], size_t size) {


					int64_t low = 0;
					int64_t high = size - 1;
					int64_t mid = (high + low) / 2;

					if (array[mid] == value) {
						return mid;
					}
					else
						while (high >= low) {
							if (array[mid] > value) {
								high = mid - 1;
								return binarysearch(value, array, size);
							}
							if (array[mid] < value) {
								low = mid + 1;
								return binarysearch(value, array, size);

							}
							return -1;
						}
				}
			}
		}
	}
}