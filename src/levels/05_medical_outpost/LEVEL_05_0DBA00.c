/* LEVEL_05:0x0DBA00 -- placement copy of LEVEL_01_0DD6C8.c: packs the clamped kind, a table word and the value bits into one command word, records it with two handlers and sends it. */
extern unsigned int D_00283C80[];
extern void func_0DD150(void);
extern void func_0DDCB8(void);
extern void func_094040(unsigned int *record, unsigned int first, unsigned int second, int third, int fourth, int fifth, unsigned int sixth);
extern int func_094218(void *buf);

void func_0DBA00(int kind, int idx, int x, int flag)
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
    word = ((unsigned int)field << 27) | (D_00283C80[idx] << 16);
    low = (x << 6) | 0x7000;
    func_094040(buf, (word | low) | 5, (unsigned int)func_0DD150, 0x40, 0, -1, (unsigned int)func_0DDCB8);
    func_094218(buf);
}
