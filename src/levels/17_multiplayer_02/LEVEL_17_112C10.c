/* LEVEL_17:0x112C10 -- placement copy of LEVEL_16_113480.c: runs a short shutdown sequence when a pending flag is set, then clears a status byte. */

extern int D_001A8224;
extern unsigned char D_001A8230;

void func_0336D0(void);
void func_116018(void);
void func_1186C0(void);

void func_112C10(void)
{
    if (D_001A8224 == 1) {
        func_0336D0();
        D_001A8224 = 0;
        func_116018();
        func_1186C0();
    }
    D_001A8230 = 0;
}
