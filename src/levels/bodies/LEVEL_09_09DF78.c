/* LEVEL_09:0x09DF78 -- placement copy of FRONTEND_0064B8.c: raises a high-water word, records the input, calls a helper, then stores a 64-bit difference into a table slot. */

extern unsigned int D_001E0548;
extern unsigned int D_001E054C;
extern int D_001E0540;
extern long long D_001E0538;
extern int D_002866C0[];

long long func_09FD50(void);

void func_09DF78(unsigned int a0)
{
    long long r;

    D_001E0548 = a0;
    if (D_001E054C < a0) {
        D_001E054C = a0;
    }
    r = func_09FD50();
    D_002866C0[D_001E0540 & 0x1F] = (int)(r - D_001E0538);
}
