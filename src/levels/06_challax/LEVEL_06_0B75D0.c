/* LEVEL_06:0x0B75D0 -- placement copy of LEVEL_01_0BCCD0.c: when the second argument is all-ones, either resets a three-word record with a unit float and calls one helper, or calls a second helper with a count of two. */

extern unsigned char D_003157A0[];
extern unsigned char D_003157B0[];

void *func_0B7580(unsigned char *p);
void func_0B75A8(unsigned char *p, int n);

void func_0B75D0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            unsigned int *w;
            float *f;
            unsigned char *p;

            w = (unsigned int *)D_003157A0;
            f = (float *)D_003157A0;
            f[3] = 1.0f;
            w[0] = 0;
            p = D_003157B0;
            w[2] = 0;
            w[1] = 0;
            func_0B7580(p + 0x34);
        } else {
            unsigned char *p;

            p = D_003157B0;
            func_0B75A8(p + 0x34, 2);
        }
    }
}
