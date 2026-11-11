/* LEVEL_01:0x0BCCD0 -- when the second argument is all-ones, either resets a three-word record with a unit float and calls one helper, or calls a second helper with a count of two. */

extern unsigned char D_00328A20[];
extern unsigned char D_00328A30[];

void *func_0BCC80(unsigned char *p);
void func_0BCCA8(unsigned char *p, int n);

void func_0BCCD0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            unsigned int *w;
            float *f;
            unsigned char *p;

            w = (unsigned int *)D_00328A20;
            f = (float *)D_00328A20;
            f[3] = 1.0f;
            w[0] = 0;
            p = D_00328A30;
            w[2] = 0;
            w[1] = 0;
            func_0BCC80(p + 0x34);
        } else {
            unsigned char *p;

            p = D_00328A30;
            func_0BCCA8(p + 0x34, 2);
        }
    }
}
