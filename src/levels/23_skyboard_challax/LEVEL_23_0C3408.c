/* LEVEL_23:0x0C3408 -- placement copy of LEVEL_01_0CC5D0.c: counts the unlocked flags, then builds the fourteen-entry list on the panel object and marks it ready. */
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

extern struct Obj D_002FD458;
extern char D_002FD500[];
extern struct Ent D_001E7218[];
extern char D_001E7210[];
extern unsigned char *D_001C73AC;
extern unsigned int D_001C73BC;
extern int D_001D503C;

extern int func_0B08B0(struct Obj *o, int a, int b, int c);
extern void func_0A5478(int a, void *buf, float f);
extern int func_0B0C28(struct Obj *o, int a, int b, int c, int d);
extern int func_0B0C10(struct Obj *o, int a, unsigned int b);
extern int func_0B0730(char *object, int first, int second);
extern int func_0B0810(struct Obj *o, int a, int b);
extern int func_123D28(int a);
extern int func_0B0DA0(struct Obj *o, int a, int b, int c, int d);
extern int func_0B0EB8(struct Obj *o, int a, int b, int c, int d, unsigned int e, int f, unsigned int g);
extern int func_0B0E08(struct Obj *o);
extern int func_0B09A8(struct Obj *o);
extern void func_0C3650(void);

void func_0C3408(void)
{
    int buf[4];
    unsigned int cnt;
    unsigned int i;
    unsigned int k;
    unsigned int n;
    unsigned char bit;
    unsigned char *flags;

    cnt = 0;
    memset(D_002FD500, 0, 0x38);
    flags = D_001C73AC + 0x8C0;
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
    D_001C73BC = cnt;
    func_0B08B0(&D_002FD458, D_001D503C, 0x20800, 0);
    func_0A5478(0x1B8, buf, 0.0f);
    func_0B0C28(&D_002FD458, (short)buf[0], (short)buf[1], (short)buf[2], (short)buf[3]);
    func_0B0C10(&D_002FD458, 0x1BA, 0xFFFFFFFF);
    func_0B0730(&D_002FD458, 0x40602020, 0xFFB07050);
    for (k = 0; k < 14; k++) {
        func_0B0810(&D_002FD458, 1, 1);
        func_0B0DA0(&D_002FD458, func_123D28(D_001E7218[k].id + 0x10), 0, 0, 0);
        func_0B0EB8(&D_002FD458, cnt < D_001E7218[k].req ? 0x2ED : D_001E7218[k].id, 0, 0, 0x1BA, 0xFFFFFFFF, 0, 0xFFFFFFFF);
        sprintf(D_002FD500 + k * 4, D_001E7210, D_001E7218[k].req);
        func_0B0EB8(&D_002FD458, (int)(D_002FD500 + k * 4), 1, 0, 0x1B9, 0xFFFFFFFF, 2, 0xFFFFFFFF);
        func_0B0E08(&D_002FD458);
    }
    D_002FD458.flags_14 |= 0x14;
    func_0B09A8(&D_002FD458);
    func_0C3650();
}
