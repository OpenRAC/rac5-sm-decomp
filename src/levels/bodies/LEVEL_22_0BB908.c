/* LEVEL_22:0x0BB908 -- placement copy of LEVEL_01_0CD3C0.c: initialises the scene object and registers seven table entries. */

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

extern struct Obj D_00281CD8;
extern struct Tab D_00171690[];
extern char D_00160FC8[];

extern void func_0A7FE0(struct Obj *o, char *a, int b, int c);
extern void func_09CD18(int a, void *buf, float f);
extern void func_0A8338(struct Obj *o, int a, int b, int c, int d);
extern void func_0A8320(struct Obj *o, int a, unsigned int b);
extern int func_0A7E40(struct Obj *o, int a, int b);
extern int func_0A7F20(struct Obj *o, int a, int b);
extern int func_0A86E8(int a, int b, int c, int d, int e, int f, int g, int h, unsigned int i);
extern int func_0A80B8(struct Obj *o);

void func_0BB908(void)
{
    int buf[4];
    unsigned int i;

    func_0A7FE0(&D_00281CD8, D_00160FC8, 0x1000, 0);
    func_09CD18(0x277, buf, 0.0f);
    func_0A8338(&D_00281CD8, (short)buf[0], (short)buf[1], (short)buf[2], (short)buf[3]);
    func_0A8320(&D_00281CD8, 0x276, 0xFFFFFFFF);
    func_0A7E40(&D_00281CD8, 0x40602020, 0xFFB07050);
    for (i = 0; i < 7; i++) {
        func_0A7F20(&D_00281CD8, 1, 1);
        if (D_00171690[i].w_00 != 6) {
            func_0A86E8((int)&D_00281CD8, D_00171690[i].w_08, i, 0, 0, 0, 0, 0, 0xFFFFFFFF);
        }
    }
    D_00281CD8.flags_14 |= 0x14;
    func_0A80B8(&D_00281CD8);
}
