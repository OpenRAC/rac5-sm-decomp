/* LEVEL_16:0x08FF90 -- placement copy of FRONTEND_0064B8.c: raises a high-water word, records the input, calls a helper, then stores a 64-bit difference into a table slot. */

extern unsigned int D_001A4718;
extern unsigned int D_001A471C;
extern int D_001A4710;
extern long long D_001A4708;
extern int D_00256A90[];

long long func_091D00(void);

void func_08FF90(unsigned int a0)
{
    long long r;

    D_001A4718 = a0;
    if (D_001A471C < a0) {
        D_001A471C = a0;
    }
    r = func_091D00();
    D_00256A90[D_001A4710 & 0x1F] = (int)(r - D_001A4708);
}
