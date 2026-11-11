/* LEVEL_05:0x09F288 -- placement copy of FRONTEND_0064B8.c: raises a high-water word, records the input, calls a helper, then stores a 64-bit difference into a table slot. */

extern unsigned int D_001E5AC8;
extern unsigned int D_001E5ACC;
extern int D_001E5AC0;
extern long long D_001E5AB8;
extern int D_0028AE00[];

long long func_0A1060(void);

void func_09F288(unsigned int a0)
{
    long long r;

    D_001E5AC8 = a0;
    if (D_001E5ACC < a0) {
        D_001E5ACC = a0;
    }
    r = func_0A1060();
    D_0028AE00[D_001E5AC0 & 0x1F] = (int)(r - D_001E5AB8);
}
