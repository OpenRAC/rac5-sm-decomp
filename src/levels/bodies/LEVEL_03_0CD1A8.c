/* LEVEL_03:0x0CD1A8 -- placement copy of LEVEL_01_0CD3C0.c: initialises the scene object and registers seven table entries. */

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

extern struct Obj D_00346F98;
extern struct Tab D_0022D110[];
extern char D_0021A2C8[];

extern void func_0B9920(struct Obj *o, char *a, int b, int c);
extern void func_0AE488(int a, void *buf, float f);
extern void func_0B9C78(struct Obj *o, int a, int b, int c, int d);
extern void func_0B9C60(struct Obj *o, int a, unsigned int b);
extern int func_0B9780(struct Obj *o, int a, int b);
extern int func_0B9860(struct Obj *o, int a, int b);
extern int func_0BA028(int a, int b, int c, int d, int e, int f, int g, int h, unsigned int i);
extern int func_0B99F8(struct Obj *o);

void func_0CD1A8(void)
{
    int buf[4];
    unsigned int i;

    func_0B9920(&D_00346F98, D_0021A2C8, 0x1000, 0);
    func_0AE488(0x277, buf, 0.0f);
    func_0B9C78(&D_00346F98, (short)buf[0], (short)buf[1], (short)buf[2], (short)buf[3]);
    func_0B9C60(&D_00346F98, 0x276, 0xFFFFFFFF);
    func_0B9780(&D_00346F98, 0x40602020, 0xFFB07050);
    for (i = 0; i < 7; i++) {
        func_0B9860(&D_00346F98, 1, 1);
        if (D_0022D110[i].w_00 != 6) {
            func_0BA028((int)&D_00346F98, D_0022D110[i].w_08, i, 0, 0, 0, 0, 0, 0xFFFFFFFF);
        }
    }
    D_00346F98.flags_14 |= 0x14;
    func_0B99F8(&D_00346F98);
}
