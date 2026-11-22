/* LEVEL_10:0x0CDA10 -- placement copy of LEVEL_01_0CC5D0.c: counts the unlocked flags, then builds the fourteen-entry list on the panel object and marks it ready. */
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

extern struct Obj D_00335418;
extern char D_003354C0[];
extern struct Ent D_0021D018[];
extern char D_0021D010[];
extern unsigned char *D_001FCFAC;
extern unsigned int D_001FCFBC;
extern int D_0020AC3C;

extern int func_0BAE60(struct Obj *o, int a, int b, int c);
extern void func_0AF820(int a, void *buf, float f);
extern int func_0BB1D8(struct Obj *o, int a, int b, int c, int d);
extern void func_0BB1C0(struct Obj *o, int a, unsigned int b);
extern int func_0BACE0(char *object, int first, int second);
extern int func_0BADC0(struct Obj *o, int a, int b);
extern int func_130410(int a);
extern int func_0BB350(struct Obj *o, int a, int b, int c, int d);
extern int func_0BB468(struct Obj *o, int a, int b, int c, int d, unsigned int e, int f, unsigned int g);
extern int func_0BB3B8(struct Obj *o);
extern int func_0BAF58(struct Obj *o);
extern void func_0CDC58(void);

void func_0CDA10(void)
{
    int buf[4];
    unsigned int cnt;
    unsigned int i;
    unsigned int k;
    unsigned int n;
    unsigned char bit;
    unsigned char *flags;

    cnt = 0;
    memset(D_003354C0, 0, 0x38);
    flags = D_001FCFAC + 0x8C0;
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
    D_001FCFBC = cnt;
    func_0BAE60(&D_00335418, D_0020AC3C, 0x20800, 0);
    func_0AF820(0x1B8, buf, 0.0f);
    func_0BB1D8(&D_00335418, (short)buf[0], (short)buf[1], (short)buf[2], (short)buf[3]);
    func_0BB1C0(&D_00335418, 0x1BA, 0xFFFFFFFF);
    func_0BACE0(&D_00335418, 0x40602020, 0xFFB07050);
    for (k = 0; k < 14; k++) {
        func_0BADC0(&D_00335418, 1, 1);
        func_0BB350(&D_00335418, func_130410(D_0021D018[k].id + 0x10), 0, 0, 0);
        func_0BB468(&D_00335418, cnt < D_0021D018[k].req ? 0x2ED : D_0021D018[k].id, 0, 0, 0x1BA, 0xFFFFFFFF, 0, 0xFFFFFFFF);
        sprintf(D_003354C0 + k * 4, D_0021D010, D_0021D018[k].req);
        func_0BB468(&D_00335418, (int)(D_003354C0 + k * 4), 1, 0, 0x1B9, 0xFFFFFFFF, 2, 0xFFFFFFFF);
        func_0BB3B8(&D_00335418);
    }
    D_00335418.flags_14 |= 0x14;
    func_0BAF58(&D_00335418);
    func_0CDC58();
}
