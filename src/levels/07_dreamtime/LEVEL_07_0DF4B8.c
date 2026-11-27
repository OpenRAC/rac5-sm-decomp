/* LEVEL_07:0x0DF4B8 -- placement copy of LEVEL_01_0DD6C8.c: packs the clamped kind, a table word and the value bits into one command word, records it with two handlers and sends it. */
extern unsigned int D_002AD6C0[];
extern void func_0E0C08(void);
extern void func_0E1770(void);
extern void func_0987D0(unsigned int *record, unsigned int first, unsigned int second, int third, int fourth, int fifth, unsigned int sixth);
extern int func_0989A8(void *buf);

void func_0DF4B8(int kind, int idx, int x, int flag)
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
    word = ((unsigned int)field << 27) | (D_002AD6C0[idx] << 16);
    low = (x << 6) | 0x7000;
    func_0987D0(buf, (word | low) | 5, (unsigned int)func_0E0C08, 0x40, 0, -1, (unsigned int)func_0E1770);
    func_0989A8(buf);
}
