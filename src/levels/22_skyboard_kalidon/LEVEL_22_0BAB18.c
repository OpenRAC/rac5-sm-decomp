/* LEVEL_22:0x0BAB18 -- placement copy of LEVEL_01_0CC5D0.c: counts the unlocked flags, then builds the fourteen-entry list on the panel object and marks it ready. */
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

extern struct Obj D_00281BD8;
extern char D_00281C80[];
extern struct Ent D_00171518[];
extern char D_00171510[];
extern unsigned char *D_0015332C;
extern unsigned int D_0015333C;
extern int D_00160FBC;

extern int func_0A7FC0(struct Obj *o, int a, int b, int c);
extern void func_09CD18(int a, void *buf, float f);
extern int func_0A8338(struct Obj *o, int a, int b, int c, int d);
extern void func_0A8320(struct Obj *o, int a, unsigned int b);
extern int func_0A7E40(char *object, int first, int second);
extern int func_0A7F20(struct Obj *o, int a, int b);
extern int func_109A80(int a);
extern int func_0A84B0(struct Obj *o, int a, int b, int c, int d);
extern int func_0A85C8(struct Obj *o, int a, int b, int c, int d, unsigned int e, int f, unsigned int g);
extern int func_0A8518(struct Obj *o);
extern int func_0A80B8(struct Obj *o);
extern void func_0BAD60(void);

void func_0BAB18(void)
{
    int buf[4];
    unsigned int cnt;
    unsigned int i;
    unsigned int k;
    unsigned int n;
    unsigned char bit;
    unsigned char *flags;

    cnt = 0;
    memset(D_00281C80, 0, 0x38);
    flags = D_0015332C + 0x8C0;
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
    D_0015333C = cnt;
    func_0A7FC0(&D_00281BD8, D_00160FBC, 0x20800, 0);
    func_09CD18(0x1B8, buf, 0.0f);
    func_0A8338(&D_00281BD8, (short)buf[0], (short)buf[1], (short)buf[2], (short)buf[3]);
    func_0A8320(&D_00281BD8, 0x1BA, 0xFFFFFFFF);
    func_0A7E40(&D_00281BD8, 0x40602020, 0xFFB07050);
    for (k = 0; k < 14; k++) {
        func_0A7F20(&D_00281BD8, 1, 1);
        func_0A84B0(&D_00281BD8, func_109A80(D_00171518[k].id + 0x10), 0, 0, 0);
        func_0A85C8(&D_00281BD8, cnt < D_00171518[k].req ? 0x2ED : D_00171518[k].id, 0, 0, 0x1BA, 0xFFFFFFFF, 0, 0xFFFFFFFF);
        sprintf(D_00281C80 + k * 4, D_00171510, D_00171518[k].req);
        func_0A85C8(&D_00281BD8, (int)(D_00281C80 + k * 4), 1, 0, 0x1B9, 0xFFFFFFFF, 2, 0xFFFFFFFF);
        func_0A8518(&D_00281BD8);
    }
    D_00281BD8.flags_14 |= 0x14;
    func_0A80B8(&D_00281BD8);
    func_0BAD60();
}
