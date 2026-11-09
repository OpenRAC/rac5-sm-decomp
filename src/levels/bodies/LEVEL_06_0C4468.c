/* LEVEL_06:0x0C4468 -- placement copy of LEVEL_01_0C9B68.c: clears two words, calls a helper when a flag byte is set, then rewrites a state word from a second helper result. */

int func_0B7408(void);
void func_028498(void);

extern unsigned int D_001EFBE0;
extern unsigned int D_001EFBE4;
extern unsigned char D_001EFBED;
extern int D_001EFBE8;

void func_0C4468(void)
{
    int r;

    D_001EFBE0 = 0;
    D_001EFBE4 = 0;
    if (D_001EFBED != 0) {
        func_028498();
        D_001EFBED = 0;
    }
    if (D_001EFBE8 != 1) {
        D_001EFBE8 = 0;
    } else {
        r = func_0B7408();
        if (r == 0x22) {
            D_001EFBE8 = 2;
        } else {
            D_001EFBE8 = 0;
        }
    }
}
