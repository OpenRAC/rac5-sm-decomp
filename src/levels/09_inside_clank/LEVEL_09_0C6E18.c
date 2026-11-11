/* LEVEL_09:0x0C6E18 -- placement copy of LEVEL_01_0C9B68.c: clears two words, calls a helper when a flag byte is set, then rewrites a state word from a second helper result. */

int func_0B9DB8(void);
void func_028F18(void);

extern unsigned int D_001EAAE0;
extern unsigned int D_001EAAE4;
extern unsigned char D_001EAAED;
extern int D_001EAAE8;

void func_0C6E18(void)
{
    int r;

    D_001EAAE0 = 0;
    D_001EAAE4 = 0;
    if (D_001EAAED != 0) {
        func_028F18();
        D_001EAAED = 0;
    }
    if (D_001EAAE8 != 1) {
        D_001EAAE8 = 0;
    } else {
        r = func_0B9DB8();
        if (r == 0x22) {
            D_001EAAE8 = 2;
        } else {
            D_001EAAE8 = 0;
        }
    }
}
