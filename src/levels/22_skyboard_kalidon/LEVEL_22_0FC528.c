/* LEVEL_22:0x0FC528 -- sums the squares of four floats of the record and
   pushes the result through three chained helpers. */
extern double func_14A6F8(float value);
extern double sqrt(double value);
extern void func_14A408(double value);

void func_0FC528(void *a0)
{
    float a = *(float *)((char *)a0 + 0x0C);
    float b = *(float *)((char *)a0 + 0x00);
    float c = *(float *)((char *)a0 + 0x04);
    float d = *(float *)((char *)a0 + 0x08);
    double r;

    a = a * a;
    b = b * b;
    c = c * c;
    d = d * d;
    a = a + b;
    a = a + c;
    a = a + d;
    r = func_14A6F8(a);
    r = sqrt(r);
    func_14A408(r);
}
