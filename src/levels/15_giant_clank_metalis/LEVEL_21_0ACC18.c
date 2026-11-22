/* LEVEL_21:0x0ACC18 -- placement copy of LEVEL_01_0CC5D0.c: counts the unlocked flags, then builds the fourteen-entry list on the panel object and marks it ready. */
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

extern struct Obj D_00243858;
extern char D_00243900[];
extern struct Ent D_00168818[];
extern char D_00168810[];
extern unsigned char *D_00148C2C;
extern unsigned int D_00148C3C;
extern int D_001568BC;

extern int func_09A160(struct Obj *o, int a, int b, int c);
extern void func_08EFD0(int a, void *buf, float f);
extern int func_09A4D8(struct Obj *o, int a, int b, int c, int d);
extern void func_09A4C0(struct Obj *o, int a, unsigned int b);
extern int func_099FE0(char *object, int first, int second);
extern int func_09A0C0(struct Obj *o, int a, int b);
extern int func_0F1478(int a);
extern int func_09A650(struct Obj *o, int a, int b, int c, int d);
extern int func_09A768(struct Obj *o, int a, int b, int c, int d, unsigned int e, int f, unsigned int g);
extern int func_09A6B8(struct Obj *o);
extern int func_09A258(struct Obj *o);
extern void func_0ACE60(void);

void func_0ACC18(void)
{
    int buf[4];
    unsigned int cnt;
    unsigned int i;
    unsigned int k;
    unsigned int n;
    unsigned char bit;
    unsigned char *flags;

    cnt = 0;
    memset(D_00243900, 0, 0x38);
    flags = D_00148C2C + 0x8C0;
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
    D_00148C3C = cnt;
    func_09A160(&D_00243858, D_001568BC, 0x20800, 0);
    func_08EFD0(0x1B8, buf, 0.0f);
    func_09A4D8(&D_00243858, (short)buf[0], (short)buf[1], (short)buf[2], (short)buf[3]);
    func_09A4C0(&D_00243858, 0x1BA, 0xFFFFFFFF);
    func_099FE0(&D_00243858, 0x40602020, 0xFFB07050);
    for (k = 0; k < 14; k++) {
        func_09A0C0(&D_00243858, 1, 1);
        func_09A650(&D_00243858, func_0F1478(D_00168818[k].id + 0x10), 0, 0, 0);
        func_09A768(&D_00243858, cnt < D_00168818[k].req ? 0x2ED : D_00168818[k].id, 0, 0, 0x1BA, 0xFFFFFFFF, 0, 0xFFFFFFFF);
        sprintf(D_00243900 + k * 4, D_00168810, D_00168818[k].req);
        func_09A768(&D_00243858, (int)(D_00243900 + k * 4), 1, 0, 0x1B9, 0xFFFFFFFF, 2, 0xFFFFFFFF);
        func_09A6B8(&D_00243858);
    }
    D_00243858.flags_14 |= 0x14;
    func_09A258(&D_00243858);
    func_0ACE60();
}
