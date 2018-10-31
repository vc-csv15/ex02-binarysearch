#include <cstdint>
#include<iostream>


namespace edu {
	namespace vcccd {
		namespace vc {
			namespace csv15 {


				template<class T>

				int64_t binarysearch(const T &value, T array[], size_t size) {
                    int64_t high = size - 1;
                    int64_t low = 0;
                    int64_t mid = 0;
                    for (low = 0; high >) {

                        if (array[mid] == value) {
                            return mid;
                        }

                        if (array[mid]>value) {
                            high = mid - 1;
                        }

                        if (array[mid]<value) {
                            low = mid + 1;
                        }

                        return 0;


                    }
				}
			}
		}
	}
}
