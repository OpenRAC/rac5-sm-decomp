/* LEVEL_09:0x0C9880 -- placement copy of LEVEL_01_0CC5D0.c: counts the unlocked flags, then builds the fourteen-entry list on the panel object and marks it ready. */
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

extern struct Obj D_00313798;
extern char D_00313840[];
extern struct Ent D_001FDC98[];
extern char D_001FDC90[];
extern unsigned char *D_001DDDAC;
extern unsigned int D_001DDDBC;
extern int D_001EBA3C;

extern int func_0B6DC8(struct Obj *o, int a, int b, int c);
extern void func_0AB9B8(int a, void *buf, float f);
extern int func_0B7140(struct Obj *o, int a, int b, int c, int d);
extern int func_0B7128(struct Obj *o, int a, unsigned int b);
extern int func_0B6C48(char *object, int first, int second);
extern int func_0B6D28(struct Obj *o, int a, int b);
extern int func_12B548(int a);
extern int func_0B72B8(struct Obj *o, int a, int b, int c, int d);
extern int func_0B73D0(struct Obj *o, int a, int b, int c, int d, unsigned int e, int f, unsigned int g);
extern int func_0B7320(struct Obj *o);
extern int func_0B6EC0(struct Obj *o);
extern void func_0C9AC8(void);

void func_0C9880(void)
{
    int buf[4];
    unsigned int cnt;
    unsigned int i;
    unsigned int k;
    unsigned int n;
    unsigned char bit;
    unsigned char *flags;

    cnt = 0;
    memset(D_00313840, 0, 0x38);
    flags = D_001DDDAC + 0x8C0;
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
    D_001DDDBC = cnt;
    func_0B6DC8(&D_00313798, D_001EBA3C, 0x20800, 0);
    func_0AB9B8(0x1B8, buf, 0.0f);
    func_0B7140(&D_00313798, (short)buf[0], (short)buf[1], (short)buf[2], (short)buf[3]);
    func_0B7128(&D_00313798, 0x1BA, 0xFFFFFFFF);
    func_0B6C48(&D_00313798, 0x40602020, 0xFFB07050);
    for (k = 0; k < 14; k++) {
        func_0B6D28(&D_00313798, 1, 1);
        func_0B72B8(&D_00313798, func_12B548(D_001FDC98[k].id + 0x10), 0, 0, 0);
        func_0B73D0(&D_00313798, cnt < D_001FDC98[k].req ? 0x2ED : D_001FDC98[k].id, 0, 0, 0x1BA, 0xFFFFFFFF, 0, 0xFFFFFFFF);
        sprintf(D_00313840 + k * 4, D_001FDC90, D_001FDC98[k].req);
        func_0B73D0(&D_00313798, (int)(D_00313840 + k * 4), 1, 0, 0x1B9, 0xFFFFFFFF, 2, 0xFFFFFFFF);
        func_0B7320(&D_00313798);
    }
    D_00313798.flags_14 |= 0x14;
    func_0B6EC0(&D_00313798);
    func_0C9AC8();
}
