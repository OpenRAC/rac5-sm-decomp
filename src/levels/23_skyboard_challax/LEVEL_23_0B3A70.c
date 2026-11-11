/* LEVEL_23:0x0B3A70 -- placement copy of LEVEL_01_0BCCD0.c: when the second argument is all-ones, either resets a three-word record with a unit float and calls one helper, or calls a second helper with a count of two. */

extern unsigned char D_002F9E60[];
extern unsigned char D_002F9E70[];

void *func_0B3A20(unsigned char *p);
void func_0B3A48(unsigned char *p, int n);

void func_0B3A70(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            unsigned int *w;
            float *f;
            unsigned char *p;

            w = (unsigned int *)D_002F9E60;
            f = (float *)D_002F9E60;
            f[3] = 1.0f;
            w[0] = 0;
            p = D_002F9E70;
            w[2] = 0;
            w[1] = 0;
            func_0B3A20(p + 0x34);
        } else {
            unsigned char *p;

            p = D_002F9E70;
            func_0B3A48(p + 0x34, 2);
        }
    }
}
