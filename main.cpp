#include <string>

int count_votes(std::string arr[], int size, std::string s) {
  int count = 0;
  for (int i = 0; i < size; i++) {
    if (s == arr[i]) {
	  count++;
	}
  }
  return count;
}
