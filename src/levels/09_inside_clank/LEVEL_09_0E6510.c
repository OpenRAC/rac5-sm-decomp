/* LEVEL_09:0x0E6510 -- placement copy of LEVEL_01_0EA630.c: packs the clamped kind, a table word, an idle flag and the value bits into one word and records it with the shared constants. */
extern unsigned int D_0027F540[];
extern char D_000E5C50[];
extern void func_0930A0(unsigned int *record, unsigned int first, unsigned int second, int third, int fourth, int fifth, unsigned int sixth);

void func_0E6510(unsigned int *record, int kind, int idx, int x, int flag)
{
    int c;
    int field;
    unsigned int idle;
    unsigned int low;
    unsigned int word;

    idle = x == 0;
    flag ^= 1;
    if (kind == 4) {
        field = 9;
    } else {
        c = 3;
        if (kind < 3)
            c = kind;
        if (c < 0)
            c = 0;
        field = ((flag != 0) ? 23 : 19) - c;
    }
    word = ((unsigned int)field << 27) | (D_0027F540[idx] << 16) | (idle << 15);
    low = (x << 6) | 0x7000;
    func_0930A0(record, (word | low) | 0x19, (unsigned int)D_000E5C50, 0x4C, 0, -1, 0);
}
