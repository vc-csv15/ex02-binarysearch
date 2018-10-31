#include <cstdint>
#include<iostream>


namespace edu {
	namespace vcccd {
		namespace vc {
			namespace csv15 {


				template<class T>

				int64_t binarySearch(const T &value, T array[], size_t size) {
                    int64_t mid, high = size - 1, low;
                    for (low = 0; high >= low; mid = (high - low)/2 ) {

                        if (array[mid] == value) {
                            return mid;
                        }
                        else if (array[mid]>value) {
                            high = mid - 1;
                        }
                        else if (array[mid]<value) {
                            low = mid + 1;
                        }
                        return -1;


                    }
				}
			}
		}
	}
}
