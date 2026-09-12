#include <iostream>
#include <string>
#include <vector>

struct Sample {
  double ts;
  std::vector<std::string> stack;
};

struct Event {
  std::string kind;
  double ts;
  std::string name;

  void PrintDebug() const {
    std::cout << "Kind : " << kind << std::endl;
    std::cout << "ts : " << ts << std::endl;
    std::cout << "Name : " << name << std::endl;
    std::cout << "---" << std::endl;
  }
};

std::vector<Event> convertToTrace(const std::vector<Sample> &samples) {
  // Expected output for the example in main():
  // Event{"start", 7.5, "main"}
  // Event{"start", 9.2, "my_fn"}
  // Event{"end", 10.7, "my_fn"}

  throw std::runtime_error("Function not implemented");
}

int main() {
  Sample s1{7.5, {"main"}};
  Sample s2{9.2, {"main", "my_fn"}};
  Sample s3{10.7, {"main"}};

  std::vector<Sample> samples = {s1, s2, s3};

  auto events = convertToTrace(samples);

  for (const auto &e : events) {
    std::cout << e.kind << " " << e.ts << " " << e.name << "\n";
  }

  return 0;
}