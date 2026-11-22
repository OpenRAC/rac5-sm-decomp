/* LEVEL_18:0x0BACA8 -- placement copy of LEVEL_01_0CC5D0.c: counts the unlocked flags, then builds the fourteen-entry list on the panel object and marks it ready. */
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

extern struct Obj D_0027A3E8;
extern char D_0027A490[];
extern struct Ent D_001CA4D8[];
extern char D_001CA4D0[];
extern unsigned char *D_001A2F34;
extern unsigned int D_001A2F68;
extern int D_001B0F6C;

extern int func_0A7B40(struct Obj *o, int a, int b, int c);
extern void func_09BE08(int a, void *buf, float f);
extern int func_0A7EB8(struct Obj *o, int a, int b, int c, int d);
extern void func_0A7EA0(struct Obj *o, int a, unsigned int b);
extern int func_0A79C0(char *object, int first, int second);
extern int func_0A7AA0(struct Obj *o, int a, int b);
extern int func_10E0E0(int a);
extern int func_0A8030(struct Obj *o, int a, int b, int c, int d);
extern int func_0A8148(struct Obj *o, int a, int b, int c, int d, unsigned int e, int f, unsigned int g);
extern int func_0A8098(struct Obj *o);
extern int func_0A7C38(struct Obj *o);
extern void func_0BAEF0(void);

void func_0BACA8(void)
{
    int buf[4];
    unsigned int cnt;
    unsigned int i;
    unsigned int k;
    unsigned int n;
    unsigned char bit;
    unsigned char *flags;

    cnt = 0;
    memset(D_0027A490, 0, 0x38);
    flags = D_001A2F34 + 0x8C0;
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
    D_001A2F68 = cnt;
    func_0A7B40(&D_0027A3E8, D_001B0F6C, 0x20800, 0);
    func_09BE08(0x1B8, buf, 0.0f);
    func_0A7EB8(&D_0027A3E8, (short)buf[0], (short)buf[1], (short)buf[2], (short)buf[3]);
    func_0A7EA0(&D_0027A3E8, 0x1BA, 0xFFFFFFFF);
    func_0A79C0(&D_0027A3E8, 0x40602020, 0xFFB07050);
    for (k = 0; k < 14; k++) {
        func_0A7AA0(&D_0027A3E8, 1, 1);
        func_0A8030(&D_0027A3E8, func_10E0E0(D_001CA4D8[k].id + 0x10), 0, 0, 0);
        func_0A8148(&D_0027A3E8, cnt < D_001CA4D8[k].req ? 0x2ED : D_001CA4D8[k].id, 0, 0, 0x1BA, 0xFFFFFFFF, 0, 0xFFFFFFFF);
        sprintf(D_0027A490 + k * 4, D_001CA4D0, D_001CA4D8[k].req);
        func_0A8148(&D_0027A3E8, (int)(D_0027A490 + k * 4), 1, 0, 0x1B9, 0xFFFFFFFF, 2, 0xFFFFFFFF);
        func_0A8098(&D_0027A3E8);
    }
    D_0027A3E8.flags_14 |= 0x14;
    func_0A7C38(&D_0027A3E8);
    func_0BAEF0();
}
