/* LEVEL_17:0x0AB6A0 -- placement copy of LEVEL_01_0BCCD0.c: when the second argument is all-ones, either resets a three-word record with a unit float and calls one helper, or calls a second helper with a count of two. */

extern unsigned char D_00267C60[];
extern unsigned char D_00267C70[];

void *func_0AB650(unsigned char *p);
void func_0AB678(unsigned char *p, int n);

void func_0AB6A0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            unsigned int *w;
            float *f;
            unsigned char *p;

            w = (unsigned int *)D_00267C60;
            f = (float *)D_00267C60;
            f[3] = 1.0f;
            w[0] = 0;
            p = D_00267C70;
            w[2] = 0;
            w[1] = 0;
            func_0AB650(p + 0x34);
        } else {
            unsigned char *p;

            p = D_00267C70;
            func_0AB678(p + 0x34, 2);
        }
    }
}
