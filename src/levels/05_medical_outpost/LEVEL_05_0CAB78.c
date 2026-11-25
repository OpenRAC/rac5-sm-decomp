/* LEVEL_05:0x0CAB78 -- placement copy of LEVEL_01_0CC5D0.c: counts the unlocked flags, then builds the fourteen-entry list on the panel object and marks it ready. */
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

extern struct Obj D_00317ED8;
extern char D_00317F80[];
extern struct Ent D_00202F98[];
extern char D_00202F90[];
extern unsigned char *D_001E332C;
extern unsigned int D_001E333C;
extern int D_001F0FBC;

extern int func_0B80C0(struct Obj *o, int a, int b, int c);
extern void func_0ACCC8(int a, void *buf, float f);
extern int func_0B8438(struct Obj *o, int a, int b, int c, int d);
extern int func_0B8420(struct Obj *o, int a, unsigned int b);
extern int func_0B7F40(char *object, int first, int second);
extern int func_0B8020(struct Obj *o, int a, int b);
extern int func_12DF28(int a);
extern int func_0B85B0(struct Obj *o, int a, int b, int c, int d);
extern int func_0B86C8(struct Obj *o, int a, int b, int c, int d, unsigned int e, int f, unsigned int g);
extern int func_0B8618(struct Obj *o);
extern int func_0B81B8(struct Obj *o);
extern void func_0CADC0(void);

void func_0CAB78(void)
{
    int buf[4];
    unsigned int cnt;
    unsigned int i;
    unsigned int k;
    unsigned int n;
    unsigned char bit;
    unsigned char *flags;

    cnt = 0;
    memset(D_00317F80, 0, 0x38);
    flags = D_001E332C + 0x8C0;
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
    D_001E333C = cnt;
    func_0B80C0(&D_00317ED8, D_001F0FBC, 0x20800, 0);
    func_0ACCC8(0x1B8, buf, 0.0f);
    func_0B8438(&D_00317ED8, (short)buf[0], (short)buf[1], (short)buf[2], (short)buf[3]);
    func_0B8420(&D_00317ED8, 0x1BA, 0xFFFFFFFF);
    func_0B7F40(&D_00317ED8, 0x40602020, 0xFFB07050);
    for (k = 0; k < 14; k++) {
        func_0B8020(&D_00317ED8, 1, 1);
        func_0B85B0(&D_00317ED8, func_12DF28(D_00202F98[k].id + 0x10), 0, 0, 0);
        func_0B86C8(&D_00317ED8, cnt < D_00202F98[k].req ? 0x2ED : D_00202F98[k].id, 0, 0, 0x1BA, 0xFFFFFFFF, 0, 0xFFFFFFFF);
        sprintf(D_00317F80 + k * 4, D_00202F90, D_00202F98[k].req);
        func_0B86C8(&D_00317ED8, (int)(D_00317F80 + k * 4), 1, 0, 0x1B9, 0xFFFFFFFF, 2, 0xFFFFFFFF);
        func_0B8618(&D_00317ED8);
    }
    D_00317ED8.flags_14 |= 0x14;
    func_0B81B8(&D_00317ED8);
    func_0CADC0();
}
