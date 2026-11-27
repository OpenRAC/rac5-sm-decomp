/* LEVEL_01:0x0DD6C8 -- packs the clamped kind, a table word and the value bits into one command word, records it with two handlers and sends it. */
extern unsigned int D_00297DC0[];
extern void func_0DEE18(void);
extern void func_0DF980(void);
extern void func_096948(unsigned int *record, unsigned int first, unsigned int second, int third, int fourth, int fifth, unsigned int sixth);
extern int func_096B20(void *buf);

void func_0DD6C8(int kind, int idx, int x, int flag)
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
    word = ((unsigned int)field << 27) | (D_00297DC0[idx] << 16);
    low = (x << 6) | 0x7000;
    func_096948(buf, (word | low) | 5, (unsigned int)func_0DEE18, 0x40, 0, -1, (unsigned int)func_0DF980);
    func_096B20(buf);
}
