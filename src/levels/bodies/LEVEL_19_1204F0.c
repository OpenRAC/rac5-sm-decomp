/* LEVEL_19:0x1204F0 -- placement copy of LEVEL_16_11FB88.c: reads one tagged word from a table; a mismatched tag or a nonzero helper result gives one, else zero. */

extern unsigned int D_001B5DC8[];
extern int func_024C08(int a0, int a1);

int func_1204F0(unsigned int idx)
{
    int r;

    r = 0;
    if (D_001B5DC8[idx] != 0xF0D4EEDDu || func_024C08(0, 0xFF) != 0) {
        r = 1;
    }
    return r;
}
