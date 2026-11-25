/* LEVEL_02:0x0D2F60 -- placement copy of LEVEL_01_0CC5D0.c: counts the unlocked flags, then builds the fourteen-entry list on the panel object and marks it ready. */
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

extern struct Obj D_00343518;
extern char D_003435C0[];
extern struct Ent D_00229018[];
extern char D_00229010[];
extern unsigned char *D_00208C2C;
extern unsigned int D_00208C3C;
extern int D_00216BFC;

extern int func_0C0428(struct Obj *o, int a, int b, int c);
extern void func_0B5018(int a, void *buf, float f);
extern int func_0C07A0(struct Obj *o, int a, int b, int c, int d);
extern int func_0C0788(struct Obj *o, int a, unsigned int b);
extern int func_0C02A8(char *object, int first, int second);
extern int func_0C0388(struct Obj *o, int a, int b);
extern int func_138960(int a);
extern int func_0C0918(struct Obj *o, int a, int b, int c, int d);
extern int func_0C0A30(struct Obj *o, int a, int b, int c, int d, unsigned int e, int f, unsigned int g);
extern int func_0C0980(struct Obj *o);
extern int func_0C0520(struct Obj *o);
extern void func_0D31A8(void);

void func_0D2F60(void)
{
    int buf[4];
    unsigned int cnt;
    unsigned int i;
    unsigned int k;
    unsigned int n;
    unsigned char bit;
    unsigned char *flags;

    cnt = 0;
    memset(D_003435C0, 0, 0x38);
    flags = D_00208C2C + 0x8C0;
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
    D_00208C3C = cnt;
    func_0C0428(&D_00343518, D_00216BFC, 0x20800, 0);
    func_0B5018(0x1B8, buf, 0.0f);
    func_0C07A0(&D_00343518, (short)buf[0], (short)buf[1], (short)buf[2], (short)buf[3]);
    func_0C0788(&D_00343518, 0x1BA, 0xFFFFFFFF);
    func_0C02A8(&D_00343518, 0x40602020, 0xFFB07050);
    for (k = 0; k < 14; k++) {
        func_0C0388(&D_00343518, 1, 1);
        func_0C0918(&D_00343518, func_138960(D_00229018[k].id + 0x10), 0, 0, 0);
        func_0C0A30(&D_00343518, cnt < D_00229018[k].req ? 0x2ED : D_00229018[k].id, 0, 0, 0x1BA, 0xFFFFFFFF, 0, 0xFFFFFFFF);
        sprintf(D_003435C0 + k * 4, D_00229010, D_00229018[k].req);
        func_0C0A30(&D_00343518, (int)(D_003435C0 + k * 4), 1, 0, 0x1B9, 0xFFFFFFFF, 2, 0xFFFFFFFF);
        func_0C0980(&D_00343518);
    }
    D_00343518.flags_14 |= 0x14;
    func_0C0520(&D_00343518);
    func_0D31A8();
}
