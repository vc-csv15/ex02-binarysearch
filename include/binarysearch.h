#include <cstdint>

namespace edu { namespace vcccd { namespace vc { namespace csv15 {

                template <class T>
                int64_t binarysearch(const T& value, T array[], size_t size) {

                    low = 0;
                    mid = (high+low)/2;
                    high = size - 1;

                    for (value, high >= low, ) {
                        if (array[mid] == value) return mid;
                        if(array[mid] > value) {
                            high = mid - 1;
                        } if(array[mid] < value){
                            low = mid + 1;

                        }

                    }
                    return -1;
                    }
                    }
                }

            }}}}