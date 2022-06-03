#ifndef Q1_H
#define Q1_H

#include <cmath>

namespace q1
{
    template <typename T, typename Func>
    double gradient_descent(T initial_value, double step_size, Func func = Func{})
    {
        double Dispute{step_size * ((func(initial_value) - func(initial_value - 0.005)) / 0.005)};
        while (std::abs(Dispute) >= 0.000001)
        {
            Dispute = step_size * ((func(initial_value) - func(initial_value - 0.005)) / 0.005);
            initial_value = initial_value - Dispute;
        }
        return initial_value;
    }
}

#endif // Q1_H