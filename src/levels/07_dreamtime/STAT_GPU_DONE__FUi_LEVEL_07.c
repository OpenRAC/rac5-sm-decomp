/* LEVEL_07:0x0A2CC8 -- placement copy of FRONTEND_0064B8.c: raises a high-water word, records the input, calls a helper, then stores a 64-bit difference into a table slot. */

extern unsigned int D_0020AA48;
extern unsigned int D_0020AA4C;
extern int D_0020AA40;
extern long long D_0020AA38;
extern int D_002B4840[];

long long func_0A4AA0(void);

void STAT_GPU_DONE__FUi(unsigned int a0)
{
    long long r;

    D_0020AA48 = a0;
    if (D_0020AA4C < a0) {
        D_0020AA4C = a0;
    }
    r = func_0A4AA0();
    D_002B4840[D_0020AA40 & 0x1F] = (int)(r - D_0020AA38);
}
