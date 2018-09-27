#include <armadillo>
#include <iomanip>

int main(int argc, char const *argv[]) {
  arma::arma_rng::set_seed_random();

  arma::Mat<double> A = 
    "\
     1 2 3 4;\
     5 6 7 8;\
     \
    ";
  std::cout << "A:\n" << A << std::endl;

  return 0;
}
