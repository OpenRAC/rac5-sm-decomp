/* LEVEL_02:0x1294D8 -- for the four floats of the record this hands the
   squared norm to func_1FFFD8, whose result goes through the erased
   routine func_000000 and into func_1FFCE8. */
extern int func_1FFFD8(float x);
extern int func_000000(int x);
extern void func_1FFCE8(int x);

void func_1294D8(float *a0)
{
    float x = a0[3] * a0[3] + a0[0] * a0[0] + a0[1] * a0[1] + a0[2] * a0[2];

    func_1FFCE8(func_000000(func_1FFFD8(x)));
}
