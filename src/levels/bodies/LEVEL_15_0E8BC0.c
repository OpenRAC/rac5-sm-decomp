/* LEVEL_15:0x0E8BC0 -- for the four floats of the record this hands the
   squared norm to func_140038, whose result goes through the erased
   routine sqrt and into func_13FD48. */
extern double func_140038(float value);
extern double sqrt(double value);
extern void func_13FD48(double value);

void func_0E8BC0(float *a0)
{
    float x = a0[3] * a0[3] + a0[0] * a0[0] + a0[1] * a0[1] + a0[2] * a0[2];

    func_13FD48(sqrt(func_140038(x)));
}
