/* LEVEL_24:0x0B6598 -- placement copy of LEVEL_01_0BCCD0.c: when the second argument is all-ones, either resets a three-word record with a unit float and calls one helper, or calls a second helper with a count of two. */

extern unsigned char D_002F48E0[];
extern unsigned char D_002F48F0[];

void *func_0B6548(unsigned char *p);
void func_0B6570(unsigned char *p, int n);

void func_0B6598(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            unsigned int *w;
            float *f;
            unsigned char *p;

            w = (unsigned int *)D_002F48E0;
            f = (float *)D_002F48E0;
            f[3] = 1.0f;
            w[0] = 0;
            p = D_002F48F0;
            w[2] = 0;
            w[1] = 0;
            func_0B6548(p + 0x34);
        } else {
            unsigned char *p;

            p = D_002F48F0;
            func_0B6570(p + 0x34, 2);
        }
    }
}
