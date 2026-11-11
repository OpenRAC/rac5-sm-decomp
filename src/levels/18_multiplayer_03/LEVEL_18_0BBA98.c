/* LEVEL_18:0x0BBA98 -- placement copy of LEVEL_01_0CD3C0.c: initialises the scene object and registers seven table entries. */

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

extern struct Obj D_0027A518;
extern struct Tab D_001CA650[];
extern char D_001B0F78[];

extern void func_0A7B60(struct Obj *o, char *a, int b, int c);
extern void func_09BE08(int a, void *buf, float f);
extern void func_0A7EB8(struct Obj *o, int a, int b, int c, int d);
extern void func_0A7EA0(struct Obj *o, int a, unsigned int b);
extern int func_0A79C0(struct Obj *o, int a, int b);
extern int func_0A7AA0(struct Obj *o, int a, int b);
extern int func_0A8268(int a, int b, int c, int d, int e, int f, int g, int h, unsigned int i);
extern int func_0A7C38(struct Obj *o);

void func_0BBA98(void)
{
    int buf[4];
    unsigned int i;

    func_0A7B60(&D_0027A518, D_001B0F78, 0x1000, 0);
    func_09BE08(0x277, buf, 0.0f);
    func_0A7EB8(&D_0027A518, (short)buf[0], (short)buf[1], (short)buf[2], (short)buf[3]);
    func_0A7EA0(&D_0027A518, 0x276, 0xFFFFFFFF);
    func_0A79C0(&D_0027A518, 0x40602020, 0xFFB07050);
    for (i = 0; i < 7; i++) {
        func_0A7AA0(&D_0027A518, 1, 1);
        if (D_001CA650[i].w_00 != 6) {
            func_0A8268((int)&D_0027A518, D_001CA650[i].w_08, i, 0, 0, 0, 0, 0, 0xFFFFFFFF);
        }
    }
    D_0027A518.flags_14 |= 0x14;
    func_0A7C38(&D_0027A518);
}
