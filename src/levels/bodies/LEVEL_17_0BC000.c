/* LEVEL_17:0x0BC000 -- placement copy of LEVEL_01_0CD3C0.c: initialises the scene object and registers seven table entries. */

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

extern struct Obj D_0026B498;
extern struct Tab D_001BC550[];
extern char D_001A30F8[];

extern void func_0A80C8(struct Obj *o, char *a, int b, int c);
extern void func_09C2F0(int a, void *buf, float f);
extern void func_0A8420(struct Obj *o, int a, int b, int c, int d);
extern void func_0A8408(struct Obj *o, int a, unsigned int b);
extern int func_0A7F28(struct Obj *o, int a, int b);
extern int func_0A8008(struct Obj *o, int a, int b);
extern void func_0A87D0(int a, int b, int c, int d, int e, int f, int g, int h, unsigned int i);
extern int func_0A81A0(struct Obj *o);

void func_0BC000(void)
{
    int buf[4];
    unsigned int i;

    func_0A80C8(&D_0026B498, D_001A30F8, 0x1000, 0);
    func_09C2F0(0x277, buf, 0.0f);
    func_0A8420(&D_0026B498, (short)buf[0], (short)buf[1], (short)buf[2], (short)buf[3]);
    func_0A8408(&D_0026B498, 0x276, 0xFFFFFFFF);
    func_0A7F28(&D_0026B498, 0x40602020, 0xFFB07050);
    for (i = 0; i < 7; i++) {
        func_0A8008(&D_0026B498, 1, 1);
        if (D_001BC550[i].w_00 != 6) {
            func_0A87D0((int)&D_0026B498, D_001BC550[i].w_08, i, 0, 0, 0, 0, 0, 0xFFFFFFFF);
        }
    }
    D_0026B498.flags_14 |= 0x14;
    func_0A81A0(&D_0026B498);
}
