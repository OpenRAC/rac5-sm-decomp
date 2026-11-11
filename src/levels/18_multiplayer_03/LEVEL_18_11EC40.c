/* LEVEL_18:0x11EC40 -- placement copy of LEVEL_16_11FB88.c: reads one tagged word from a table; a mismatched tag or a nonzero helper result gives one, else zero. */

extern unsigned int D_001B60C8[];
extern int func_024610(int a0, int a1);

int func_11EC40(unsigned int idx)
{
    int r;

    r = 0;
    if (D_001B60C8[idx] != 0xF0D4EEDDu || func_024610(0, 0xFF) != 0) {
        r = 1;
    }
    return r;
}
