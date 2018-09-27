#include <cstdint>

#include<iostream>


namespace edu {
	namespace vcccd {
		namespace vc {
			namespace csv15 {


				template<class T>

				int64_t binarySearch(const T &value, T array[], size_t size) {
                    int64_t mid = 0, high = 0, low = 0;
                    for (low = 0, high = size - 1; high > low; mid = (high - low) / 2) {

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

				    /*
				     * --------Previous
				     *
					if (size == 0) return -1;
					int64_t low = 0;
					int64_t high = size - 1;
					int64_t mid = (high + low) / 2;
					
					if (array[mid] == value) {
						return mid;
					}
					else while (high >= low) {
							if (array[mid] > value) {
								high = mid - 1;
								return -1;
							}
							if (array[mid] < value) {
								low = mid + 1;
								return -1;

							}
							return -1; */
						}
				}
			}
		}
	}
}
