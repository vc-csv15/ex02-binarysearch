#include <cstdint>
#include<iostream>


namespace edu {
	namespace vcccd {
		namespace vc {
			namespace csv15 {


				template<class T>

				int64_t binarysearch(const T &value, T array[], size_t size) {
                    size_t mid = size/2 ;
                    for (size_t low = 0, high = size - 1; high > low ; mid = (high + low)/2) {

                        if (array[mid] == value) {
                            return mid;
                        }

                        if (array[mid]>value) {
                            high = mid - 1;
                        }

                        if (array[mid]<value) {
                            low = mid + 1;
                        }
                    }
                    return array[mid] == value ? mid : -1; // GO TERNARY!
				}
			}
		}
	}
}
