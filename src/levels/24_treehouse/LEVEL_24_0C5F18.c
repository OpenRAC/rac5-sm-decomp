/* LEVEL_24:0x0C5F18 -- placement copy of LEVEL_01_0CC5D0.c: counts the unlocked flags, then builds the fourteen-entry list on the panel object and marks it ready. */
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

extern struct Obj D_002F7ED8;
extern char D_002F7F80[];
extern struct Ent D_001E4E18[];
extern char D_001E4E10[];
extern unsigned char *D_001C4C2C;
extern unsigned int D_001C4C3C;
extern int D_001D28BC;

extern int func_0B33A8(struct Obj *o, int a, int b, int c);
extern void func_0A7F80(int a, void *buf, float f);
extern int func_0B3720(struct Obj *o, int a, int b, int c, int d);
extern void func_0B3708(struct Obj *o, int a, unsigned int b);
extern int func_0B3228(char *object, int first, int second);
extern int func_0B3308(struct Obj *o, int a, int b);
extern int func_1280B0(int a);
extern int func_0B3898(struct Obj *o, int a, int b, int c, int d);
extern int func_0B39B0(struct Obj *o, int a, int b, int c, int d, unsigned int e, int f, unsigned int g);
extern int func_0B3900(struct Obj *o);
extern int func_0B34A0(struct Obj *o);
extern void func_0C6160(void);

void func_0C5F18(void)
{
    int buf[4];
    unsigned int cnt;
    unsigned int i;
    unsigned int k;
    unsigned int n;
    unsigned char bit;
    unsigned char *flags;

    cnt = 0;
    memset(D_002F7F80, 0, 0x38);
    flags = D_001C4C2C + 0x8C0;
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
    D_001C4C3C = cnt;
    func_0B33A8(&D_002F7ED8, D_001D28BC, 0x20800, 0);
    func_0A7F80(0x1B8, buf, 0.0f);
    func_0B3720(&D_002F7ED8, (short)buf[0], (short)buf[1], (short)buf[2], (short)buf[3]);
    func_0B3708(&D_002F7ED8, 0x1BA, 0xFFFFFFFF);
    func_0B3228(&D_002F7ED8, 0x40602020, 0xFFB07050);
    for (k = 0; k < 14; k++) {
        func_0B3308(&D_002F7ED8, 1, 1);
        func_0B3898(&D_002F7ED8, func_1280B0(D_001E4E18[k].id + 0x10), 0, 0, 0);
        func_0B39B0(&D_002F7ED8, cnt < D_001E4E18[k].req ? 0x2ED : D_001E4E18[k].id, 0, 0, 0x1BA, 0xFFFFFFFF, 0, 0xFFFFFFFF);
        sprintf(D_002F7F80 + k * 4, D_001E4E10, D_001E4E18[k].req);
        func_0B39B0(&D_002F7ED8, (int)(D_002F7F80 + k * 4), 1, 0, 0x1B9, 0xFFFFFFFF, 2, 0xFFFFFFFF);
        func_0B3900(&D_002F7ED8);
    }
    D_002F7ED8.flags_14 |= 0x14;
    func_0B34A0(&D_002F7ED8);
    func_0C6160();
}
