/* LEVEL_18:0x0003A0 -- placement copy of LEVEL_16_0003A0.c: when func_000318 accepts the pair, stores the value in one or two bytes of the global table selected by the index; returns whether it did. */
extern unsigned char *D_001A2F34;
extern unsigned int func_000318(int index, unsigned int bit);

int func_0003A0(int value, unsigned int sel, int a2, int a3)
{
    if (func_000318(value, sel) != 0) {
        if (sel - 2 < 2) {
            D_001A2F34[0x856] = value;
            D_001A2F34[0x857] = value;
        } else if (sel - 4 < 2) {
            D_001A2F34[0x858] = value;
            D_001A2F34[0x859] = value;
        } else {
            (D_001A2F34 + sel)[0x854] = value;
        }
        return 1;
    }
    return 0;
}
