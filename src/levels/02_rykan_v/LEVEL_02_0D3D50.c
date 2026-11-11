/* LEVEL_02:0x0D3D50 -- placement copy of LEVEL_01_0CD3C0.c: initialises the scene object and registers seven table entries. */

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

extern struct Obj D_00343618;
extern struct Tab D_00229190[];
extern char D_00216C08[];

extern void func_0C0448(struct Obj *o, char *a, int b, int c);
extern void func_0B5018(int a, void *buf, float f);
extern void func_0C07A0(struct Obj *o, int a, int b, int c, int d);
extern void func_0C0788(struct Obj *o, int a, unsigned int b);
extern int func_0C02A8(struct Obj *o, int a, int b);
extern int func_0C0388(struct Obj *o, int a, int b);
extern int func_0C0B50(int a, int b, int c, int d, int e, int f, int g, int h, unsigned int i);
extern int func_0C0520(struct Obj *o);

void func_0D3D50(void)
{
    int buf[4];
    unsigned int i;

    func_0C0448(&D_00343618, D_00216C08, 0x1000, 0);
    func_0B5018(0x277, buf, 0.0f);
    func_0C07A0(&D_00343618, (short)buf[0], (short)buf[1], (short)buf[2], (short)buf[3]);
    func_0C0788(&D_00343618, 0x276, 0xFFFFFFFF);
    func_0C02A8(&D_00343618, 0x40602020, 0xFFB07050);
    for (i = 0; i < 7; i++) {
        func_0C0388(&D_00343618, 1, 1);
        if (D_00229190[i].w_00 != 6) {
            func_0C0B50((int)&D_00343618, D_00229190[i].w_08, i, 0, 0, 0, 0, 0, 0xFFFFFFFF);
        }
    }
    D_00343618.flags_14 |= 0x14;
    func_0C0520(&D_00343618);
}
