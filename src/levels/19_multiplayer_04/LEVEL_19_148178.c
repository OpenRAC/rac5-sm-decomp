/* LEVEL_19:0x148178 -- calls func_104E88 and copies the four floats of the
   first object into the third one. */
extern void func_104E88(void *a0, void *a1, void *a2);
extern char D_1D4690[];

void func_148178(void *a0, void *a1, void *a2)
{
    float *s;
    float *d;

    s = (float *)a0;
    d = (float *)a2;
    func_104E88(a1, a0, D_1D4690);
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    d[3] = s[3];
}
