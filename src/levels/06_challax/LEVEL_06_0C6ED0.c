/* LEVEL_06:0x0C6ED0 -- placement copy of LEVEL_01_0CC5D0.c: counts the unlocked flags, then builds the fourteen-entry list on the panel object and marks it ready. */
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

extern struct Obj D_00318D98;
extern char D_00318E40[];
extern struct Ent D_00202F18[];
extern char D_00202F10[];
extern unsigned char *D_001E2EAC;
extern unsigned int D_001E2EBC;
extern int D_001F0B3C;

extern int func_0B4418(struct Obj *o, int a, int b, int c);
extern void func_0A8ED8(int a, void *buf, float f);
extern int func_0B4790(struct Obj *o, int a, int b, int c, int d);
extern int func_0B4778(struct Obj *o, int a, unsigned int b);
extern int func_0B4298(char *object, int first, int second);
extern int func_0B4378(struct Obj *o, int a, int b);
extern int func_128C80(int a);
extern int func_0B4908(struct Obj *o, int a, int b, int c, int d);
extern int func_0B4A20(struct Obj *o, int a, int b, int c, int d, unsigned int e, int f, unsigned int g);
extern int func_0B4970(struct Obj *o);
extern int func_0B4510(struct Obj *o);
extern void func_0C7118(void);

void func_0C6ED0(void)
{
    int buf[4];
    unsigned int cnt;
    unsigned int i;
    unsigned int k;
    unsigned int n;
    unsigned char bit;
    unsigned char *flags;

    cnt = 0;
    memset(D_00318E40, 0, 0x38);
    flags = D_001E2EAC + 0x8C0;
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
    D_001E2EBC = cnt;
    func_0B4418(&D_00318D98, D_001F0B3C, 0x20800, 0);
    func_0A8ED8(0x1B8, buf, 0.0f);
    func_0B4790(&D_00318D98, (short)buf[0], (short)buf[1], (short)buf[2], (short)buf[3]);
    func_0B4778(&D_00318D98, 0x1BA, 0xFFFFFFFF);
    func_0B4298(&D_00318D98, 0x40602020, 0xFFB07050);
    for (k = 0; k < 14; k++) {
        func_0B4378(&D_00318D98, 1, 1);
        func_0B4908(&D_00318D98, func_128C80(D_00202F18[k].id + 0x10), 0, 0, 0);
        func_0B4A20(&D_00318D98, cnt < D_00202F18[k].req ? 0x2ED : D_00202F18[k].id, 0, 0, 0x1BA, 0xFFFFFFFF, 0, 0xFFFFFFFF);
        sprintf(D_00318E40 + k * 4, D_00202F10, D_00202F18[k].req);
        func_0B4A20(&D_00318D98, (int)(D_00318E40 + k * 4), 1, 0, 0x1B9, 0xFFFFFFFF, 2, 0xFFFFFFFF);
        func_0B4970(&D_00318D98);
    }
    D_00318D98.flags_14 |= 0x14;
    func_0B4510(&D_00318D98);
    func_0C7118();
}
