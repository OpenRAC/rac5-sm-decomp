/* LEVEL_15:0x0AA1B0 -- placement copy of LEVEL_01_0C9B68.c: clears two words, calls a helper when a flag byte is set, then rewrites a state word from a second helper result. */

int func_09D150(void);
void func_023888(void);

extern unsigned int D_00155960;
extern unsigned int D_00155964;
extern unsigned char D_0015596D;
extern int D_00155968;

void func_0AA1B0(void)
{
    int r;

    D_00155960 = 0;
    D_00155964 = 0;
    if (D_0015596D != 0) {
        func_023888();
        D_0015596D = 0;
    }
    if (D_00155968 != 1) {
        D_00155968 = 0;
    } else {
        r = func_09D150();
        if (r == 0x22) {
            D_00155968 = 2;
        } else {
            D_00155968 = 0;
        }
    }
}
