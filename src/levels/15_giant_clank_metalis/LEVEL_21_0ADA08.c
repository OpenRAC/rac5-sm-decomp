/* LEVEL_21:0x0ADA08 -- placement copy of LEVEL_01_0CD3C0.c: initialises the scene object and registers seven table entries. */

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

extern struct Obj D_00243958;
extern struct Tab D_00168990[];
extern char D_001568C8[];

extern void func_09A180(struct Obj *o, char *a, int b, int c);
extern void func_08EFD0(int a, void *buf, float f);
extern void func_09A4D8(struct Obj *o, int a, int b, int c, int d);
extern void func_09A4C0(struct Obj *o, int a, unsigned int b);
extern int func_099FE0(struct Obj *o, int a, int b);
extern int func_09A0C0(struct Obj *o, int a, int b);
extern int func_09A888(int a, int b, int c, int d, int e, int f, int g, int h, unsigned int i);
extern int func_09A258(struct Obj *o);

void func_0ADA08(void)
{
    int buf[4];
    unsigned int i;

    func_09A180(&D_00243958, D_001568C8, 0x1000, 0);
    func_08EFD0(0x277, buf, 0.0f);
    func_09A4D8(&D_00243958, (short)buf[0], (short)buf[1], (short)buf[2], (short)buf[3]);
    func_09A4C0(&D_00243958, 0x276, 0xFFFFFFFF);
    func_099FE0(&D_00243958, 0x40602020, 0xFFB07050);
    for (i = 0; i < 7; i++) {
        func_09A0C0(&D_00243958, 1, 1);
        if (D_00168990[i].w_00 != 6) {
            func_09A888((int)&D_00243958, D_00168990[i].w_08, i, 0, 0, 0, 0, 0, 0xFFFFFFFF);
        }
    }
    D_00243958.flags_14 |= 0x14;
    func_09A258(&D_00243958);
}
