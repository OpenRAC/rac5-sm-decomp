/* LEVEL_04:0x0D2C58 -- placement copy of LEVEL_01_0CD3C0.c: initialises the scene object and registers seven table entries. */

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

extern struct Obj D_00346918;
extern struct Tab D_0022DB90[];
extern char D_0021B108[];

extern void func_0BF318(struct Obj *o, char *a, int b, int c);
extern void func_0B3958(int a, void *buf, float f);
extern void func_0BF670(struct Obj *o, int a, int b, int c, int d);
extern void func_0BF658(struct Obj *o, int a, unsigned int b);
extern int func_0BF178(struct Obj *o, int a, int b);
extern int func_0BF258(struct Obj *o, int a, int b);
extern int func_0BFA20(int a, int b, int c, int d, int e, int f, int g, int h, unsigned int i);
extern int func_0BF3F0(struct Obj *o);

void func_0D2C58(void)
{
    int buf[4];
    unsigned int i;

    func_0BF318(&D_00346918, D_0021B108, 0x1000, 0);
    func_0B3958(0x277, buf, 0.0f);
    func_0BF670(&D_00346918, (short)buf[0], (short)buf[1], (short)buf[2], (short)buf[3]);
    func_0BF658(&D_00346918, 0x276, 0xFFFFFFFF);
    func_0BF178(&D_00346918, 0x40602020, 0xFFB07050);
    for (i = 0; i < 7; i++) {
        func_0BF258(&D_00346918, 1, 1);
        if (D_0022DB90[i].w_00 != 6) {
            func_0BFA20((int)&D_00346918, D_0022DB90[i].w_08, i, 0, 0, 0, 0, 0, 0xFFFFFFFF);
        }
    }
    D_00346918.flags_14 |= 0x14;
    func_0BF3F0(&D_00346918);
}
