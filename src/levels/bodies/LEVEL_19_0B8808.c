/* LEVEL_19:0x0B8808 -- placement copy of LEVEL_01_0C9B68.c: clears two words, calls a helper when a flag byte is set, then rewrites a state word from a second helper result. */

int func_0AB868(void);
void func_0276B0(void);

extern unsigned int D_001AFEE0;
extern unsigned int D_001AFEE4;
extern unsigned char D_001AFEED;
extern int D_001AFEE8;

void func_0B8808(void)
{
    int r;

    D_001AFEE0 = 0;
    D_001AFEE4 = 0;
    if (D_001AFEED != 0) {
        func_0276B0();
        D_001AFEED = 0;
    }
    if (D_001AFEE8 != 1) {
        D_001AFEE8 = 0;
    } else {
        r = func_0AB868();
        if (r == 0x22) {
            D_001AFEE8 = 2;
        } else {
            D_001AFEE8 = 0;
        }
    }
}
