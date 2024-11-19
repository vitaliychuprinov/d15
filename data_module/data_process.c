#include <math.h>

#include "data_process.h"
#include "../data_libs/data_stat.h"

int normalization(double *data, int n) {
    int result = 1;
    double max_value = max(data, n);
    double min_value = min(data, n);
    double size = max_value - min_value;

    if (size > 0) {
        for (int i = 0; i < n; i++) {
            data[i] = (data[i] - min_value) / size;
        }
    } else {
        
        for (int i = 0; i < n; i++) {
            data[i] = 0.0;
        }
        result = 0;
    }
    return result;
}