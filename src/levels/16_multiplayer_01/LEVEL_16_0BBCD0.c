/* LEVEL_16:0x0BBCD0 -- placement copy of LEVEL_01_0CC5D0.c: counts the unlocked flags, then builds the fourteen-entry list on the panel object and marks it ready. */
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

extern struct Obj D_0027A068;
extern char D_0027A110[];
extern struct Ent D_001C8F58[];
extern char D_001C8F50[];
extern unsigned char *D_001A1AB4;
extern unsigned int D_001A1AE8;
extern int D_001AFAEC;

extern int func_0A8B68(struct Obj *o, int a, int b, int c);
extern void func_09CDF8(int a, void *buf, float f);
extern int func_0A8EE0(struct Obj *o, int a, int b, int c, int d);
extern int func_0A8EC8(struct Obj *o, int a, unsigned int b);
extern int func_0A89E8(char *object, int first, int second);
extern int func_0A8AC8(struct Obj *o, int a, int b);
extern int func_10F430(int a);
extern int func_0A9058(struct Obj *o, int a, int b, int c, int d);
extern int func_0A9170(struct Obj *o, int a, int b, int c, int d, unsigned int e, int f, unsigned int g);
extern int func_0A90C0(struct Obj *o);
extern int func_0A8C60(struct Obj *o);
extern void func_0BBF18(void);

void func_0BBCD0(void)
{
    int buf[4];
    unsigned int cnt;
    unsigned int i;
    unsigned int k;
    unsigned int n;
    unsigned char bit;
    unsigned char *flags;

    cnt = 0;
    memset(D_0027A110, 0, 0x38);
    flags = D_001A1AB4 + 0x8C0;
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
    D_001A1AE8 = cnt;
    func_0A8B68(&D_0027A068, D_001AFAEC, 0x20800, 0);
    func_09CDF8(0x1B8, buf, 0.0f);
    func_0A8EE0(&D_0027A068, (short)buf[0], (short)buf[1], (short)buf[2], (short)buf[3]);
    func_0A8EC8(&D_0027A068, 0x1BA, 0xFFFFFFFF);
    func_0A89E8(&D_0027A068, 0x40602020, 0xFFB07050);
    for (k = 0; k < 14; k++) {
        func_0A8AC8(&D_0027A068, 1, 1);
        func_0A9058(&D_0027A068, func_10F430(D_001C8F58[k].id + 0x10), 0, 0, 0);
        func_0A9170(&D_0027A068, cnt < D_001C8F58[k].req ? 0x2ED : D_001C8F58[k].id, 0, 0, 0x1BA, 0xFFFFFFFF, 0, 0xFFFFFFFF);
        sprintf(D_0027A110 + k * 4, D_001C8F50, D_001C8F58[k].req);
        func_0A9170(&D_0027A068, (int)(D_0027A110 + k * 4), 1, 0, 0x1B9, 0xFFFFFFFF, 2, 0xFFFFFFFF);
        func_0A90C0(&D_0027A068);
    }
    D_0027A068.flags_14 |= 0x14;
    func_0A8C60(&D_0027A068);
    func_0BBF18();
}
