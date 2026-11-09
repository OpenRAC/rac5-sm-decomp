/* LEVEL_17:0x11F5B0 -- placement copy of LEVEL_16_11FB88.c: reads one tagged word from a table; a mismatched tag or a nonzero helper result gives one, else zero. */

extern unsigned int D_001A8248[];
extern int func_0249E0(int a0, int a1);

int func_11F5B0(unsigned int idx)
{
    int r;

    r = 0;
    if (D_001A8248[idx] != 0xF0D4EEDDu || func_0249E0(0, 0xFF) != 0) {
        r = 1;
    }
    return r;
}
