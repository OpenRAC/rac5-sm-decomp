/* LEVEL_16:0x11FB88 -- reads one tagged word from a table; a mismatched tag or a nonzero helper result gives one, else zero. */

extern unsigned int D_001B4C48[];
extern int func_025060(int a0, int a1);

int func_11FB88(unsigned int idx)
{
    int r;

    r = 0;
    if (D_001B4C48[idx] != 0xF0D4EEDDu || func_025060(0, 0xFF) != 0) {
        r = 1;
    }
    return r;
}
