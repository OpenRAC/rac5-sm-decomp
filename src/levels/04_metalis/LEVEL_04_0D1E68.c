/* LEVEL_04:0x0D1E68 -- placement copy of LEVEL_01_0CC5D0.c: counts the unlocked flags, then builds the fourteen-entry list on the panel object and marks it ready. */
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

extern struct Obj D_00346818;
extern char D_003468C0[];
extern struct Ent D_0022DA18[];
extern char D_0022DA10[];
extern unsigned char *D_0020D12C;
extern unsigned int D_0020D13C;
extern int D_0021B0FC;

extern int func_0BF2F8(struct Obj *o, int a, int b, int c);
extern void func_0B3958(int a, void *buf, float f);
extern int func_0BF670(struct Obj *o, int a, int b, int c, int d);
extern int func_0BF658(struct Obj *o, int a, unsigned int b);
extern int func_0BF178(char *object, int first, int second);
extern int func_0BF258(struct Obj *o, int a, int b);
extern int func_13EA30(int a);
extern int func_0BF7E8(struct Obj *o, int a, int b, int c, int d);
extern int func_0BF900(struct Obj *o, int a, int b, int c, int d, unsigned int e, int f, unsigned int g);
extern int func_0BF850(struct Obj *o);
extern int func_0BF3F0(struct Obj *o);
extern void func_0D20B0(void);

void func_0D1E68(void)
{
    int buf[4];
    unsigned int cnt;
    unsigned int i;
    unsigned int k;
    unsigned int n;
    unsigned char bit;
    unsigned char *flags;

    cnt = 0;
    memset(D_003468C0, 0, 0x38);
    flags = D_0020D12C + 0x8C0;
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
    D_0020D13C = cnt;
    func_0BF2F8(&D_00346818, D_0021B0FC, 0x20800, 0);
    func_0B3958(0x1B8, buf, 0.0f);
    func_0BF670(&D_00346818, (short)buf[0], (short)buf[1], (short)buf[2], (short)buf[3]);
    func_0BF658(&D_00346818, 0x1BA, 0xFFFFFFFF);
    func_0BF178(&D_00346818, 0x40602020, 0xFFB07050);
    for (k = 0; k < 14; k++) {
        func_0BF258(&D_00346818, 1, 1);
        func_0BF7E8(&D_00346818, func_13EA30(D_0022DA18[k].id + 0x10), 0, 0, 0);
        func_0BF900(&D_00346818, cnt < D_0022DA18[k].req ? 0x2ED : D_0022DA18[k].id, 0, 0, 0x1BA, 0xFFFFFFFF, 0, 0xFFFFFFFF);
        sprintf(D_003468C0 + k * 4, D_0022DA10, D_0022DA18[k].req);
        func_0BF900(&D_00346818, (int)(D_003468C0 + k * 4), 1, 0, 0x1B9, 0xFFFFFFFF, 2, 0xFFFFFFFF);
        func_0BF850(&D_00346818);
    }
    D_00346818.flags_14 |= 0x14;
    func_0BF3F0(&D_00346818);
    func_0D20B0();
}
