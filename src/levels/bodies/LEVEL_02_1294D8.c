/* LEVEL_02:0x1294D8 -- for the four floats of the record this hands the
   squared norm to func_1FFFD8, whose result goes through the erased
   routine sqrt and into func_1FFCE8. */
extern double func_1FFFD8(float value);
extern double sqrt(double value);
extern void func_1FFCE8(double value);

void func_1294D8(float *a0)
{
    float x = a0[3] * a0[3] + a0[0] * a0[0] + a0[1] * a0[1] + a0[2] * a0[2];

    func_1FFCE8(sqrt(func_1FFFD8(x)));
}
