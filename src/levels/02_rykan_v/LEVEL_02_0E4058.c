/* LEVEL_02:0x0E4058 -- placement copy of LEVEL_01_0DD6C8.c: packs the clamped kind, a table word and the value bits into one command word, records it with two handlers and sends it. */
extern unsigned int D_002AF2C0[];
extern void func_0E57A8(void);
extern void func_0E6310(void);
extern void func_09D018(unsigned int *record, unsigned int first, unsigned int second, int third, int fourth, int fifth, unsigned int sixth);
extern int func_09D1F0(void *buf);

void func_0E4058(int kind, int idx, int x, int flag)
{
    unsigned int buf[4];
    int c;
    int field;
    unsigned int low;
    unsigned int word;

    flag = flag != 0;
    if (kind == 4) {
        field = 9;
    } else {
        c = 3;
        if (kind < 3)
            c = kind;
        if (c < 0)
            c = 0;
        field = (((flag ^ 1) != 0) ? 23 : 19) - c;
    }
    word = ((unsigned int)field << 27) | (D_002AF2C0[idx] << 16);
    low = (x << 6) | 0x7000;
    func_09D018(buf, (word | low) | 5, (unsigned int)func_0E57A8, 0x40, 0, -1, (unsigned int)func_0E6310);
    func_09D1F0(buf);
}
