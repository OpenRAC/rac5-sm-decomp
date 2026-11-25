/* LEVEL_03:0x0CC3B8 -- placement copy of LEVEL_01_0CC5D0.c: counts the unlocked flags, then builds the fourteen-entry list on the panel object and marks it ready. */
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

extern struct Obj D_00346E98;
extern char D_00346F40[];
extern struct Ent D_0022CF98[];
extern char D_0022CF90[];
extern unsigned char *D_0020C62C;
extern unsigned int D_0020C63C;
extern int D_0021A2BC;

extern int func_0B9900(struct Obj *o, int a, int b, int c);
extern void func_0AE488(int a, void *buf, float f);
extern int func_0B9C78(struct Obj *o, int a, int b, int c, int d);
extern int func_0B9C60(struct Obj *o, int a, unsigned int b);
extern int func_0B9780(char *object, int first, int second);
extern int func_0B9860(struct Obj *o, int a, int b);
extern int func_130978(int a);
extern int func_0B9DF0(struct Obj *o, int a, int b, int c, int d);
extern int func_0B9F08(struct Obj *o, int a, int b, int c, int d, unsigned int e, int f, unsigned int g);
extern int func_0B9E58(struct Obj *o);
extern int func_0B99F8(struct Obj *o);
extern void func_0CC600(void);

void func_0CC3B8(void)
{
    int buf[4];
    unsigned int cnt;
    unsigned int i;
    unsigned int k;
    unsigned int n;
    unsigned char bit;
    unsigned char *flags;

    cnt = 0;
    memset(D_00346F40, 0, 0x38);
    flags = D_0020C62C + 0x8C0;
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
    D_0020C63C = cnt;
    func_0B9900(&D_00346E98, D_0021A2BC, 0x20800, 0);
    func_0AE488(0x1B8, buf, 0.0f);
    func_0B9C78(&D_00346E98, (short)buf[0], (short)buf[1], (short)buf[2], (short)buf[3]);
    func_0B9C60(&D_00346E98, 0x1BA, 0xFFFFFFFF);
    func_0B9780(&D_00346E98, 0x40602020, 0xFFB07050);
    for (k = 0; k < 14; k++) {
        func_0B9860(&D_00346E98, 1, 1);
        func_0B9DF0(&D_00346E98, func_130978(D_0022CF98[k].id + 0x10), 0, 0, 0);
        func_0B9F08(&D_00346E98, cnt < D_0022CF98[k].req ? 0x2ED : D_0022CF98[k].id, 0, 0, 0x1BA, 0xFFFFFFFF, 0, 0xFFFFFFFF);
        sprintf(D_00346F40 + k * 4, D_0022CF90, D_0022CF98[k].req);
        func_0B9F08(&D_00346E98, (int)(D_00346F40 + k * 4), 1, 0, 0x1B9, 0xFFFFFFFF, 2, 0xFFFFFFFF);
        func_0B9E58(&D_00346E98);
    }
    D_00346E98.flags_14 |= 0x14;
    func_0B99F8(&D_00346E98);
    func_0CC600();
}
