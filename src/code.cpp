#include "assignment/code.hpp"

#include <iostream>   // cout, printf
#include <algorithm>  // fill, copy
#include <math.h>

namespace assignment {

  // Task 1
  int squared_diff(int left, int right) {

    // Write your code here ...

    return (left - right) * (left - right);
  }

  // Task 2
  bool check_bit(int mask, int bit_pos) {

    // Write your code here ...
    if (mask > 0 and bit_pos > 0) {
        return bool (mask & int (pow(2, bit_pos)));
    }
    else {
          return false;
      }
  }

  // Task 3
  int max3(int left, int middle, int right) {

    // Write your code here ...
    if (left > middle and left > right) {
        return left;
    }
    if (middle > left and middle > right) {
        return middle;
    }
    if (right > left and right > middle) {
        return right;
    }

  }

  // Task 4
  void swap_args(int *left, int *right) {

    // Write your code here ...
  }

  // Task 5
  int arr_sum(int *arr, int length) {

    // Write your code here ...

    return 0;
  }

  // Task 6
  int *find_max_elem(int *arr, int length) {

    // Write your code here ...

    return nullptr;
  }

  // Task 7
  int *allocate_arr(int length, int init_value) {

    // Write your code here ...

    return nullptr;
  }

  // Task 8
  int *clone_arr(int *arr_in, int length) {

    // Write your code here ...

    return nullptr;
  }

  // Task 9
  void print_kth_elements(int *arr, int length, int k, std::ostream &os) {

    // Write your code here ...
  }

}  // namespace assignment
