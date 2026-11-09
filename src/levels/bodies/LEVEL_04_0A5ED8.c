/* LEVEL_04:0x0A5ED8 -- placement copy of FRONTEND_0064B8.c: raises a high-water word, records the input, calls a helper, then stores a 64-bit difference into a table slot. */

extern unsigned int D_0020FC08;
extern unsigned int D_0020FC0C;
extern int D_0020FC00;
extern long long D_0020FBF8;
extern int D_002B9740[];

long long func_0A7CB0(void);

void func_0A5ED8(unsigned int a0)
{
    long long r;

    D_0020FC08 = a0;
    if (D_0020FC0C < a0) {
        D_0020FC0C = a0;
    }
    r = func_0A7CB0();
    D_002B9740[D_0020FC00 & 0x1F] = (int)(r - D_0020FBF8);
}
