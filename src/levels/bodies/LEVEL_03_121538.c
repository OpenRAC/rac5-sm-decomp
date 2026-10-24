/* LEVEL_03.REL:0x121538 -- measures the four floats of the frame, then
   hands the squared length down the two engine stages. */
extern void *func_2039D0(float f12);
extern void *func_000000(void *a0);
extern void func_2036E0(void *a0);

void func_121538(float *a0)
{
    void *p;

    p = func_2039D0(a0[3] * a0[3] + a0[0] * a0[0] + a0[1] * a0[1]
                    + a0[2] * a0[2]);
    p = func_000000(p);
    func_2036E0(p);
}
