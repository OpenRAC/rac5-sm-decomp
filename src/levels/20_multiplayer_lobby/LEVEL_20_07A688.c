/* LEVEL_20:0x07A688 -- placement copy of FRONTEND_0064B8.c: raises a high-water word, records the input, calls a helper, then stores a 64-bit difference into a table slot. */

extern unsigned int D_00106DF8;
extern unsigned int D_00106DFC;
extern int D_00106DF0;
extern long long D_00106DE8;
extern int D_0017A2D0[];

long long func_07C3F8(void);

void func_07A688(unsigned int a0)
{
    long long r;

    D_00106DF8 = a0;
    if (D_00106DFC < a0) {
        D_00106DFC = a0;
    }
    r = func_07C3F8();
    D_0017A2D0[D_00106DF0 & 0x1F] = (int)(r - D_00106DE8);
}
