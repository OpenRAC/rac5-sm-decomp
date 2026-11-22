/* LEVEL_07:0x0CE630 -- placement copy of LEVEL_01_0CC5D0.c: counts the unlocked flags, then builds the fourteen-entry list on the panel object and marks it ready. */
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

extern struct Obj D_00341918;
extern char D_003419C0[];
extern struct Ent D_00228D98[];
extern char D_00228D90[];
extern unsigned char *D_002082AC;
extern unsigned int D_002082BC;
extern int D_00215F3C;

extern int func_0BBB78(struct Obj *o, int a, int b, int c);
extern void func_0B0708(int a, void *buf, float f);
extern int func_0BBEF0(struct Obj *o, int a, int b, int c, int d);
extern void func_0BBED8(struct Obj *o, int a, unsigned int b);
extern int func_0BB9F8(char *object, int first, int second);
extern int func_0BBAD8(struct Obj *o, int a, int b);
extern int func_1355B0(int a);
extern int func_0BC068(struct Obj *o, int a, int b, int c, int d);
extern int func_0BC180(struct Obj *o, int a, int b, int c, int d, unsigned int e, int f, unsigned int g);
extern int func_0BC0D0(struct Obj *o);
extern int func_0BBC70(struct Obj *o);
extern void func_0CE878(void);

void func_0CE630(void)
{
    int buf[4];
    unsigned int cnt;
    unsigned int i;
    unsigned int k;
    unsigned int n;
    unsigned char bit;
    unsigned char *flags;

    cnt = 0;
    memset(D_003419C0, 0, 0x38);
    flags = D_002082AC + 0x8C0;
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
    D_002082BC = cnt;
    func_0BBB78(&D_00341918, D_00215F3C, 0x20800, 0);
    func_0B0708(0x1B8, buf, 0.0f);
    func_0BBEF0(&D_00341918, (short)buf[0], (short)buf[1], (short)buf[2], (short)buf[3]);
    func_0BBED8(&D_00341918, 0x1BA, 0xFFFFFFFF);
    func_0BB9F8(&D_00341918, 0x40602020, 0xFFB07050);
    for (k = 0; k < 14; k++) {
        func_0BBAD8(&D_00341918, 1, 1);
        func_0BC068(&D_00341918, func_1355B0(D_00228D98[k].id + 0x10), 0, 0, 0);
        func_0BC180(&D_00341918, cnt < D_00228D98[k].req ? 0x2ED : D_00228D98[k].id, 0, 0, 0x1BA, 0xFFFFFFFF, 0, 0xFFFFFFFF);
        sprintf(D_003419C0 + k * 4, D_00228D90, D_00228D98[k].req);
        func_0BC180(&D_00341918, (int)(D_003419C0 + k * 4), 1, 0, 0x1B9, 0xFFFFFFFF, 2, 0xFFFFFFFF);
        func_0BC0D0(&D_00341918);
    }
    D_00341918.flags_14 |= 0x14;
    func_0BBC70(&D_00341918);
    func_0CE878();
}
