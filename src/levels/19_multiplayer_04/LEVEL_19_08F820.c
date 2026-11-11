/* LEVEL_19:0x08F820 -- placement copy of FRONTEND_0064B8.c: raises a high-water word, records the input, calls a helper, then stores a 64-bit difference into a table slot. */

extern unsigned int D_001A5898;
extern unsigned int D_001A589C;
extern int D_001A5890;
extern long long D_001A5888;
extern int D_00256C10[];

long long func_091590(void);

void func_08F820(unsigned int a0)
{
    long long r;

    D_001A5898 = a0;
    if (D_001A589C < a0) {
        D_001A589C = a0;
    }
    r = func_091590();
    D_00256C10[D_001A5890 & 0x1F] = (int)(r - D_001A5888);
}
