#ifndef Q3_H
#define Q3_H

#include <iostream>
#include <queue>
#include <vector>

namespace q3
{
    struct Flight
    {
        std::string flight_number;
        size_t duration;
        size_t connections;
        size_t connection_times;
        size_t price;
        Flight(std::string flight_number,
               size_t duration,
               size_t connections,
               size_t connection_times,
               size_t price)
            : flight_number{flight_number},
              duration{duration},
              connections{connections},
              connection_times{connection_times},
              price{price} {}
    };
    size_t time_cal(std::string time)
    {
        return 0;
    }
}
#endif // Q3_H