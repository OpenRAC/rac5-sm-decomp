/* LEVEL_19:0x0BC398 -- placement copy of LEVEL_01_0CD3C0.c: initialises the scene object and registers seven table entries. */

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

extern struct Obj D_0027A318;
extern struct Tab D_001CA2D0[];
extern char D_001B0C78[];

extern void func_0A8460(struct Obj *o, char *a, int b, int c);
extern void func_09C688(int a, void *buf, float f);
extern void func_0A87B8(struct Obj *o, int a, int b, int c, int d);
extern void func_0A87A0(struct Obj *o, int a, unsigned int b);
extern int func_0A82C0(struct Obj *o, int a, int b);
extern int func_0A83A0(struct Obj *o, int a, int b);
extern int func_0A8B68(int a, int b, int c, int d, int e, int f, int g, int h, unsigned int i);
extern int func_0A8538(struct Obj *o);

void func_0BC398(void)
{
    int buf[4];
    unsigned int i;

    func_0A8460(&D_0027A318, D_001B0C78, 0x1000, 0);
    func_09C688(0x277, buf, 0.0f);
    func_0A87B8(&D_0027A318, (short)buf[0], (short)buf[1], (short)buf[2], (short)buf[3]);
    func_0A87A0(&D_0027A318, 0x276, 0xFFFFFFFF);
    func_0A82C0(&D_0027A318, 0x40602020, 0xFFB07050);
    for (i = 0; i < 7; i++) {
        func_0A83A0(&D_0027A318, 1, 1);
        if (D_001CA2D0[i].w_00 != 6) {
            func_0A8B68((int)&D_0027A318, D_001CA2D0[i].w_08, i, 0, 0, 0, 0, 0, 0xFFFFFFFF);
        }
    }
    D_0027A318.flags_14 |= 0x14;
    func_0A8538(&D_0027A318);
}
