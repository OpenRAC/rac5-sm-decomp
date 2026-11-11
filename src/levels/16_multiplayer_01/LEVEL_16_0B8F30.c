/* LEVEL_16:0x0B8F30 -- placement copy of LEVEL_01_0C9B68.c: clears two words, calls a helper when a flag byte is set, then rewrites a state word from a second helper result. */

int func_0ABF90(void);
void func_027B08(void);

extern unsigned int D_001AED60;
extern unsigned int D_001AED64;
extern unsigned char D_001AED6D;
extern int D_001AED68;

void func_0B8F30(void)
{
    int r;

    D_001AED60 = 0;
    D_001AED64 = 0;
    if (D_001AED6D != 0) {
        func_027B08();
        D_001AED6D = 0;
    }
    if (D_001AED68 != 1) {
        D_001AED68 = 0;
    } else {
        r = func_0ABF90();
        if (r == 0x22) {
            D_001AED68 = 2;
        } else {
            D_001AED68 = 0;
        }
    }
}
