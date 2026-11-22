/* LEVEL_08:0x0D7578 -- placement copy of LEVEL_01_0CC5D0.c: counts the unlocked flags, then builds the fourteen-entry list on the panel object and marks it ready. */
extern void *memset(void *dst, int value, unsigned int size);
extern int sprintf(char *buf, const char *fmt, ...);

struct Obj {
    char pad_00[0x14];
    unsigned int flags_14;
};

struct Ent {
    int id;
    unsigned int req;
    int w_08;
    int w_0C;
};

extern struct Obj D_0037B298;
extern char D_0037B340[];
extern struct Ent D_0025DD18[];
extern char D_0025DD10[];
extern unsigned char *D_0023CB2C;
extern unsigned int D_0023CB3C;
extern int D_0024AAFC;

extern int func_0C4A08(struct Obj *o, int a, int b, int c);
extern void func_0B9040(int a, void *buf, float f);
extern int func_0C4D80(struct Obj *o, int a, int b, int c, int d);
extern void func_0C4D68(struct Obj *o, int a, unsigned int b);
extern int func_0C4888(char *object, int first, int second);
extern int func_0C4968(struct Obj *o, int a, int b);
extern int func_143AE8(int a);
extern int func_0C4EF8(struct Obj *o, int a, int b, int c, int d);
extern int func_0C5010(struct Obj *o, int a, int b, int c, int d, unsigned int e, int f, unsigned int g);
extern int func_0C4F60(struct Obj *o);
extern int func_0C4B00(struct Obj *o);
extern void func_0D77C0(void);

void func_0D7578(void)
{
    int buf[4];
    unsigned int cnt;
    unsigned int i;
    unsigned int k;
    unsigned int n;
    unsigned char bit;
    unsigned char *flags;

    cnt = 0;
    memset(D_0037B340, 0, 0x38);
    flags = D_0023CB2C + 0x8C0;
    i = 0x77;
    do {
        bit = 1;
        n = i + 1;
        do {
            if (flags[i] & bit) {
                cnt++;
            }
            bit <<= 1;
        } while (bit != 0);
        i = n;
    } while (i < 0x7D);
    D_0023CB3C = cnt;
    func_0C4A08(&D_0037B298, D_0024AAFC, 0x20800, 0);
    func_0B9040(0x1B8, buf, 0.0f);
    func_0C4D80(&D_0037B298, (short)buf[0], (short)buf[1], (short)buf[2], (short)buf[3]);
    func_0C4D68(&D_0037B298, 0x1BA, 0xFFFFFFFF);
    func_0C4888(&D_0037B298, 0x40602020, 0xFFB07050);
    for (k = 0; k < 14; k++) {
        func_0C4968(&D_0037B298, 1, 1);
        func_0C4EF8(&D_0037B298, func_143AE8(D_0025DD18[k].id + 0x10), 0, 0, 0);
        func_0C5010(&D_0037B298, cnt < D_0025DD18[k].req ? 0x2ED : D_0025DD18[k].id, 0, 0, 0x1BA, 0xFFFFFFFF, 0, 0xFFFFFFFF);
        sprintf(D_0037B340 + k * 4, D_0025DD10, D_0025DD18[k].req);
        func_0C5010(&D_0037B298, (int)(D_0037B340 + k * 4), 1, 0, 0x1B9, 0xFFFFFFFF, 2, 0xFFFFFFFF);
        func_0C4F60(&D_0037B298);
    }
    D_0037B298.flags_14 |= 0x14;
    func_0C4B00(&D_0037B298);
    func_0D77C0();
}
