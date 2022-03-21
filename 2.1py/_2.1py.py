from math import pow,tan,sqrt
from random import randint

x = randint(1,3)

y1 = (x + 2) * (2 * x - 1);
y2 = pow(x, 3) + 8 * pow(x,-4) + sqrt(4 - x);
y3 = (4.22 * pow(x, 1.0 / 3) + 2.15 * x) / abs(tan(x) - 2);

print ('x = ',x)
print ('y1 = ',y1,' y2 = ', y2, 'y3 = ',y3)
print ('Z = ',(y1-y2)/y3)