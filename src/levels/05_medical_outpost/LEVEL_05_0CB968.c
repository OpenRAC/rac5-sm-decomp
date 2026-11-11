/* LEVEL_05:0x0CB968 -- placement copy of LEVEL_01_0CD3C0.c: initialises the scene object and registers seven table entries. */

struct Tab {
    int w_00;
    int w_04;
    int w_08;
    int w_0C;
};

struct Obj {
    char pad_00[0x14];
    unsigned int flags_14;
};

extern struct Obj D_00317FD8;
extern struct Tab D_00203110[];
extern char D_001F0FC8[];

extern void func_0B80E0(struct Obj *o, char *a, int b, int c);
extern void func_0ACCC8(int a, void *buf, float f);
extern void func_0B8438(struct Obj *o, int a, int b, int c, int d);
extern void func_0B8420(struct Obj *o, int a, unsigned int b);
extern int func_0B7F40(struct Obj *o, int a, int b);
extern int func_0B8020(struct Obj *o, int a, int b);
extern int func_0B87E8(int a, int b, int c, int d, int e, int f, int g, int h, unsigned int i);
extern int func_0B81B8(struct Obj *o);

void func_0CB968(void)
{
    int buf[4];
    unsigned int i;

    func_0B80E0(&D_00317FD8, D_001F0FC8, 0x1000, 0);
    func_0ACCC8(0x277, buf, 0.0f);
    func_0B8438(&D_00317FD8, (short)buf[0], (short)buf[1], (short)buf[2], (short)buf[3]);
    func_0B8420(&D_00317FD8, 0x276, 0xFFFFFFFF);
    func_0B7F40(&D_00317FD8, 0x40602020, 0xFFB07050);
    for (i = 0; i < 7; i++) {
        func_0B8020(&D_00317FD8, 1, 1);
        if (D_00203110[i].w_00 != 6) {
            func_0B87E8((int)&D_00317FD8, D_00203110[i].w_08, i, 0, 0, 0, 0, 0, 0xFFFFFFFF);
        }
    }
    D_00317FD8.flags_14 |= 0x14;
    func_0B81B8(&D_00317FD8);
}
