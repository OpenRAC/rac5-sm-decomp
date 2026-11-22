/* LEVEL_17:0x0BB210 -- placement copy of LEVEL_01_0CC5D0.c: counts the unlocked flags, then builds the fourteen-entry list on the panel object and marks it ready. */
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

extern struct Obj D_0026B368;
extern char D_0026B410[];
extern struct Ent D_001BC3D8[];
extern char D_001BC3D0[];
extern unsigned char *D_001950B4;
extern unsigned int D_001950E8;
extern int D_001A30EC;

extern int func_0A80A8(struct Obj *o, int a, int b, int c);
extern void func_09C2F0(int a, void *buf, float f);
extern int func_0A8420(struct Obj *o, int a, int b, int c, int d);
extern void func_0A8408(struct Obj *o, int a, unsigned int b);
extern int func_0A7F28(char *object, int first, int second);
extern int func_0A8008(struct Obj *o, int a, int b);
extern int func_10E9A8(int a);
extern int func_0A8598(struct Obj *o, int a, int b, int c, int d);
extern int func_0A86B0(struct Obj *o, int a, int b, int c, int d, unsigned int e, int f, unsigned int g);
extern int func_0A8600(struct Obj *o);
extern int func_0A81A0(struct Obj *o);
extern void func_0BB458(void);

void func_0BB210(void)
{
    int buf[4];
    unsigned int cnt;
    unsigned int i;
    unsigned int k;
    unsigned int n;
    unsigned char bit;
    unsigned char *flags;

    cnt = 0;
    memset(D_0026B410, 0, 0x38);
    flags = D_001950B4 + 0x8C0;
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
    D_001950E8 = cnt;
    func_0A80A8(&D_0026B368, D_001A30EC, 0x20800, 0);
    func_09C2F0(0x1B8, buf, 0.0f);
    func_0A8420(&D_0026B368, (short)buf[0], (short)buf[1], (short)buf[2], (short)buf[3]);
    func_0A8408(&D_0026B368, 0x1BA, 0xFFFFFFFF);
    func_0A7F28(&D_0026B368, 0x40602020, 0xFFB07050);
    for (k = 0; k < 14; k++) {
        func_0A8008(&D_0026B368, 1, 1);
        func_0A8598(&D_0026B368, func_10E9A8(D_001BC3D8[k].id + 0x10), 0, 0, 0);
        func_0A86B0(&D_0026B368, cnt < D_001BC3D8[k].req ? 0x2ED : D_001BC3D8[k].id, 0, 0, 0x1BA, 0xFFFFFFFF, 0, 0xFFFFFFFF);
        sprintf(D_0026B410 + k * 4, D_001BC3D0, D_001BC3D8[k].req);
        func_0A86B0(&D_0026B368, (int)(D_0026B410 + k * 4), 1, 0, 0x1B9, 0xFFFFFFFF, 2, 0xFFFFFFFF);
        func_0A8600(&D_0026B368);
    }
    D_0026B368.flags_14 |= 0x14;
    func_0A81A0(&D_0026B368);
    func_0BB458();
}
