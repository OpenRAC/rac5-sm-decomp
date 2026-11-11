/* LEVEL_23:0x0C0908 -- placement copy of LEVEL_01_0C9B68.c: clears two words, calls a helper when a flag byte is set, then rewrites a state word from a second helper result. */

int func_0B38A8(void);
void func_027C20(void);

extern unsigned int D_001D40E0;
extern unsigned int D_001D40E4;
extern unsigned char D_001D40ED;
extern int D_001D40E8;

void func_0C0908(void)
{
    int r;

    D_001D40E0 = 0;
    D_001D40E4 = 0;
    if (D_001D40ED != 0) {
        func_027C20();
        D_001D40ED = 0;
    }
    if (D_001D40E8 != 1) {
        D_001D40E8 = 0;
    } else {
        r = func_0B38A8();
        if (r == 0x22) {
            D_001D40E8 = 2;
        } else {
            D_001D40E8 = 0;
        }
    }
}
