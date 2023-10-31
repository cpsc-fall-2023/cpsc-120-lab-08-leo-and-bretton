// Leonardo Saavedra
// Lsaavedra619@csu.fullerton.edu
// @Lsaavedra619
// Partners: @bseuf28

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  if (argc != 4) {
    std::cout << "error: you must supply three arguments\n";
    return 1;
  }

  std::vector<std::string> arguments(argv, argv + argc);

  std::string protein = arguments[1];
  std::string bread = arguments[2];
  std::string condiment = arguments[3];

  std::cout << "Your order: \nA " << protein << " sandwich on " << bread
            << " with " << condiment << "." << std::endl;
  return 0;
}