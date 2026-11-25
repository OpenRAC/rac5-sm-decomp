/* LEVEL_19:0x0BB5A8 -- placement copy of LEVEL_01_0CC5D0.c: counts the unlocked flags, then builds the fourteen-entry list on the panel object and marks it ready. */
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

extern struct Obj D_0027A1E8;
extern char D_0027A290[];
extern struct Ent D_001CA158[];
extern char D_001CA150[];
extern unsigned char *D_001A2C34;
extern unsigned int D_001A2C68;
extern int D_001B0C6C;

extern int func_0A8440(struct Obj *o, int a, int b, int c);
extern void func_09C688(int a, void *buf, float f);
extern int func_0A87B8(struct Obj *o, int a, int b, int c, int d);
extern int func_0A87A0(struct Obj *o, int a, unsigned int b);
extern int func_0A82C0(char *object, int first, int second);
extern int func_0A83A0(struct Obj *o, int a, int b);
extern int func_10FAD0(int a);
extern int func_0A8930(struct Obj *o, int a, int b, int c, int d);
extern int func_0A8A48(struct Obj *o, int a, int b, int c, int d, unsigned int e, int f, unsigned int g);
extern int func_0A8998(struct Obj *o);
extern int func_0A8538(struct Obj *o);
extern void func_0BB7F0(void);

void func_0BB5A8(void)
{
    int buf[4];
    unsigned int cnt;
    unsigned int i;
    unsigned int k;
    unsigned int n;
    unsigned char bit;
    unsigned char *flags;

    cnt = 0;
    memset(D_0027A290, 0, 0x38);
    flags = D_001A2C34 + 0x8C0;
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
    D_001A2C68 = cnt;
    func_0A8440(&D_0027A1E8, D_001B0C6C, 0x20800, 0);
    func_09C688(0x1B8, buf, 0.0f);
    func_0A87B8(&D_0027A1E8, (short)buf[0], (short)buf[1], (short)buf[2], (short)buf[3]);
    func_0A87A0(&D_0027A1E8, 0x1BA, 0xFFFFFFFF);
    func_0A82C0(&D_0027A1E8, 0x40602020, 0xFFB07050);
    for (k = 0; k < 14; k++) {
        func_0A83A0(&D_0027A1E8, 1, 1);
        func_0A8930(&D_0027A1E8, func_10FAD0(D_001CA158[k].id + 0x10), 0, 0, 0);
        func_0A8A48(&D_0027A1E8, cnt < D_001CA158[k].req ? 0x2ED : D_001CA158[k].id, 0, 0, 0x1BA, 0xFFFFFFFF, 0, 0xFFFFFFFF);
        sprintf(D_0027A290 + k * 4, D_001CA150, D_001CA158[k].req);
        func_0A8A48(&D_0027A1E8, (int)(D_0027A290 + k * 4), 1, 0, 0x1B9, 0xFFFFFFFF, 2, 0xFFFFFFFF);
        func_0A8998(&D_0027A1E8);
    }
    D_0027A1E8.flags_14 |= 0x14;
    func_0A8538(&D_0027A1E8);
    func_0BB7F0();
}
