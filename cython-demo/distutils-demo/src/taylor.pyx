cdef extern from "taylor_series.h":
     double ts_sin(double& x, int N)
     double ts_cos(double& x, int N)

def sin(double x, int N):
    return ts_sin(x,N)

def cos(double x, int N):
    return ts_cos(x,N)

