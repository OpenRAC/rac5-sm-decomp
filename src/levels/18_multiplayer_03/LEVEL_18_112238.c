/* LEVEL_18:0x112238 -- placement copy of LEVEL_16_113480.c: runs a short shutdown sequence when a pending flag is set, then clears a status byte. */

extern int D_001B60A4;
extern unsigned char D_001B60B0;

void func_032658(void);
void func_115660(void);
void func_117D38(void);

void func_112238(void)
{
    if (D_001B60A4 == 1) {
        func_032658();
        D_001B60A4 = 0;
        func_115660();
        func_117D38();
    }
    D_001B60B0 = 0;
}
