/* LEVEL_20:0x0A6200 -- placement copy of LEVEL_01_0CC5D0.c: counts the unlocked flags, then builds the fourteen-entry list on the panel object and marks it ready. */
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

extern struct Obj D_0019D8A8;
extern char D_0019D950[];
extern struct Ent D_00129FD8[];
extern char D_00129FD0[];
extern unsigned char *D_00104194;
extern unsigned int D_001041C8;
extern int D_001121CC;

extern int func_093098(struct Obj *o, int a, int b, int c);
extern void func_0874F0(int a, void *buf, float f);
extern int func_093410(struct Obj *o, int a, int b, int c, int d);
extern int func_0933F8(struct Obj *o, int a, unsigned int b);
extern int func_092F18(char *object, int first, int second);
extern int func_092FF8(struct Obj *o, int a, int b);
extern int func_0E2218(int a);
extern int func_093588(struct Obj *o, int a, int b, int c, int d);
extern int func_0936A0(struct Obj *o, int a, int b, int c, int d, unsigned int e, int f, unsigned int g);
extern int func_0935F0(struct Obj *o);
extern int func_093190(struct Obj *o);
extern void func_0A6448(void);

void func_0A6200(void)
{
    int buf[4];
    unsigned int cnt;
    unsigned int i;
    unsigned int k;
    unsigned int n;
    unsigned char bit;
    unsigned char *flags;

    cnt = 0;
    memset(D_0019D950, 0, 0x38);
    flags = D_00104194 + 0x8C0;
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
    D_001041C8 = cnt;
    func_093098(&D_0019D8A8, D_001121CC, 0x20800, 0);
    func_0874F0(0x1B8, buf, 0.0f);
    func_093410(&D_0019D8A8, (short)buf[0], (short)buf[1], (short)buf[2], (short)buf[3]);
    func_0933F8(&D_0019D8A8, 0x1BA, 0xFFFFFFFF);
    func_092F18(&D_0019D8A8, 0x40602020, 0xFFB07050);
    for (k = 0; k < 14; k++) {
        func_092FF8(&D_0019D8A8, 1, 1);
        func_093588(&D_0019D8A8, func_0E2218(D_00129FD8[k].id + 0x10), 0, 0, 0);
        func_0936A0(&D_0019D8A8, cnt < D_00129FD8[k].req ? 0x2ED : D_00129FD8[k].id, 0, 0, 0x1BA, 0xFFFFFFFF, 0, 0xFFFFFFFF);
        sprintf(D_0019D950 + k * 4, D_00129FD0, D_00129FD8[k].req);
        func_0936A0(&D_0019D8A8, (int)(D_0019D950 + k * 4), 1, 0, 0x1B9, 0xFFFFFFFF, 2, 0xFFFFFFFF);
        func_0935F0(&D_0019D8A8);
    }
    D_0019D8A8.flags_14 |= 0x14;
    func_093190(&D_0019D8A8);
    func_0A6448();
}
