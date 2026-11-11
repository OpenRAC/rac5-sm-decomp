/* LEVEL_10:0x0A1DE0 -- placement copy of FRONTEND_0064B8.c: raises a high-water word, records the input, calls a helper, then stores a 64-bit difference into a table slot. */

extern unsigned int D_001FF748;
extern unsigned int D_001FF74C;
extern int D_001FF740;
extern long long D_001FF738;
extern int D_002A8340[];

long long func_0A3BB8(void);

void STAT_GPU_DONE__FUi(unsigned int a0)
{
    long long r;

    D_001FF748 = a0;
    if (D_001FF74C < a0) {
        D_001FF74C = a0;
    }
    r = func_0A3BB8();
    D_002A8340[D_001FF740 & 0x1F] = (int)(r - D_001FF738);
}
