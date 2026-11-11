/* LEVEL_20:0x0F1C88 -- placement copy of LEVEL_16_11FB88.c: reads one tagged word from a table; a mismatched tag or a nonzero helper result gives one, else zero. */

extern unsigned int D_00117308[];
extern int func_021BD8(int a0, int a1);

int func_0F1C88(unsigned int idx)
{
    int r;

    r = 0;
    if (D_00117308[idx] != 0xF0D4EEDDu || func_021BD8(0, 0xFF) != 0) {
        r = 1;
    }
    return r;
}
