#include <armadillo>

int main(int argc, char const *argv[]) {
  arma::arma_rng::set_seed_random();

  arma::Mat<double> A = arma::randu(4,4);
  std::cout << "A:\n" << A << std:e:ndl;

  return 0;
}
