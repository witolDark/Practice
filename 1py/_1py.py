from math import sqrt, pow, cos, sin, sqrt, log, exp, log10

x = 1

v1 = pow((x + pow(cos(x), 2) + sin(pow(x,2)) + log10(x)), 1 / 3)
v2 = pow(x,2) + pow(log(pow(x, 3)), 2) - exp(sqrt(x))
V19 = v1/v2

print('X = ' + str(x) + ' V19 = ' + str(V19))
