#include <cmath>
#if defined(HAVE_LOG) && defined(HAVE_EXP)
  double result = std::exp(std::log(x) * 0.5);
    std::cout << "Computing sqrt of " << x << " to be " << result
                << " using log and exp" << std::endl;
#else
		  double result = x;
