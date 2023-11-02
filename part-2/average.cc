// Leonardo Saavedra
// Lsaavedra619@csu.fullerton.edu
// @Lsaavedra619
// Partners: @bseuf28

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (argc <= 1) {
    std::cout << "error: you must supply at least one number" << std::endl;
    return 1;
  }

  double total = 0.0;

  int count = 0;

  for (int i = 1; i < argc; i++) {
    double num = std::stod(arguments[i]);
    total += num;
    count++;
  }

  double average = total / count;

  std::cout << "average = " << average << std::endl;

  return 0;
}
