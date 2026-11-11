/* LEVEL_19:0x102AE0 -- sums the squares of four floats of the record and
   pushes the result through three chained helpers. */
extern double func_197FA8(float value);
extern double sqrt(double value);
extern void func_197CB8(double value);

void func_102AE0(void *a0)
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
    r = func_197FA8(a);
    r = sqrt(r);
    func_197CB8(r);
}
