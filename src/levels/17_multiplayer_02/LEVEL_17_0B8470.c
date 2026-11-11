/* LEVEL_17:0x0B8470 -- placement copy of LEVEL_01_0C9B68.c: clears two words, calls a helper when a flag byte is set, then rewrites a state word from a second helper result. */

int func_0AB4D0(void);
void func_027488(void);

extern unsigned int D_001A2360;
extern unsigned int D_001A2364;
extern unsigned char D_001A236D;
extern int D_001A2368;

void func_0B8470(void)
{
    int r;

    D_001A2360 = 0;
    D_001A2364 = 0;
    if (D_001A236D != 0) {
        func_027488();
        D_001A236D = 0;
    }
    if (D_001A2368 != 1) {
        D_001A2368 = 0;
    } else {
        r = func_0AB4D0();
        if (r == 0x22) {
            D_001A2368 = 2;
        } else {
            D_001A2368 = 0;
        }
    }
}
