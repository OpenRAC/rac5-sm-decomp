/* LEVEL_03.REL:0x121538 -- measures the four floats of the frame, then
   hands the squared length down the two engine stages. */
extern double func_2039D0(float value);
extern double sqrt(double value);
extern void func_2036E0(double value);

void func_121538(float *a0)
{
    double p;

    p = func_2039D0(a0[3] * a0[3] + a0[0] * a0[0] + a0[1] * a0[1]
                    + a0[2] * a0[2]);
    p = sqrt(p);
    func_2036E0(p);
}
