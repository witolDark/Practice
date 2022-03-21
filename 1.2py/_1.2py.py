from math import pow,sqrt,log10, cos, sin,exp

u = 1;
a = 9.5;
b = 5.7;
c = sqrt(pow(a, 2) - pow(b, 2));
p = (a + b + c) / 2;
r = sqrt(((p - a) * (p - b) * (p - c)) / p);
y1 = log10(u) + pow(cos(c), 2.0) + 1.8 * exp(a - b)
y2 = 1.5 * pow(10,-2.0) * c + r * pow(sin(b), 2.0);
print('u = ', u , ' a = ', a, ' b = ', b , 'c = ', c , ' p = ', p , 'r = ', r)
print('Y = ', y1/y2)