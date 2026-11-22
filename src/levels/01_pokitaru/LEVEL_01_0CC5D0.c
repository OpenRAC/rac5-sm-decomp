/* LEVEL_01:0x0CC5D0 -- counts the unlocked flags, then builds the fourteen-entry list on the panel object and marks it ready. */
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

extern struct Obj D_0032C018;
extern char D_0032C0C0[];
extern struct Ent D_00214098[];
extern char D_00214090[];
extern unsigned char *D_001F3FAC;
extern unsigned int D_001F3FBC;
extern int D_00201C3C;

extern int func_0B9B18(struct Obj *o, int a, int b, int c);
extern void func_0AE708(int a, void *buf, float f);
extern int func_0B9E90(struct Obj *o, int a, int b, int c, int d);
extern void func_0B9E78(struct Obj *o, int a, unsigned int b);
extern int func_0B9998(char *object, int first, int second);
extern int func_0B9A78(struct Obj *o, int a, int b);
extern int func_1325B0(int a);
extern int func_0BA008(struct Obj *o, int a, int b, int c, int d);
extern int func_0BA120(struct Obj *o, int a, int b, int c, int d, unsigned int e, int f, unsigned int g);
extern int func_0BA070(struct Obj *o);
extern int func_0B9C10(struct Obj *o);
extern void func_0CC818(void);

void func_0CC5D0(void)
{
    int buf[4];
    unsigned int cnt;
    unsigned int i;
    unsigned int k;
    unsigned int n;
    unsigned char bit;
    unsigned char *flags;

    cnt = 0;
    memset(D_0032C0C0, 0, 0x38);
    flags = D_001F3FAC + 0x8C0;
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
    D_001F3FBC = cnt;
    func_0B9B18(&D_0032C018, D_00201C3C, 0x20800, 0);
    func_0AE708(0x1B8, buf, 0.0f);
    func_0B9E90(&D_0032C018, (short)buf[0], (short)buf[1], (short)buf[2], (short)buf[3]);
    func_0B9E78(&D_0032C018, 0x1BA, 0xFFFFFFFF);
    func_0B9998(&D_0032C018, 0x40602020, 0xFFB07050);
    for (k = 0; k < 14; k++) {
        func_0B9A78(&D_0032C018, 1, 1);
        func_0BA008(&D_0032C018, func_1325B0(D_00214098[k].id + 0x10), 0, 0, 0);
        func_0BA120(&D_0032C018, cnt < D_00214098[k].req ? 0x2ED : D_00214098[k].id, 0, 0, 0x1BA, 0xFFFFFFFF, 0, 0xFFFFFFFF);
        sprintf(D_0032C0C0 + k * 4, D_00214090, D_00214098[k].req);
        func_0BA120(&D_0032C018, (int)(D_0032C0C0 + k * 4), 1, 0, 0x1B9, 0xFFFFFFFF, 2, 0xFFFFFFFF);
        func_0BA070(&D_0032C018);
    }
    D_0032C018.flags_14 |= 0x14;
    func_0B9C10(&D_0032C018);
    func_0CC818();
}
