/* LEVEL_06:0x09B498 -- placement copy of FRONTEND_0064B8.c: raises a high-water word, records the input, calls a helper, then stores a 64-bit difference into a table slot. */

extern unsigned int D_001E5648;
extern unsigned int D_001E564C;
extern int D_001E5640;
extern long long D_001E5638;
extern int D_0028BCC0[];

long long func_09D270(void);

void STAT_GPU_DONE__FUi(unsigned int a0)
{
    long long r;

    D_001E5648 = a0;
    if (D_001E564C < a0) {
        D_001E564C = a0;
    }
    r = func_09D270();
    D_0028BCC0[D_001E5640 & 0x1F] = (int)(r - D_001E5638);
}
