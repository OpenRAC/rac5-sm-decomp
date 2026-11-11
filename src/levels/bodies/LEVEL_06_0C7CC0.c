/* LEVEL_06:0x0C7CC0 -- placement copy of LEVEL_01_0CD3C0.c: initialises the scene object and registers seven table entries. */

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

extern struct Obj D_00318E98;
extern struct Tab D_00203090[];
extern char D_001F0B48[];

extern void func_0B4438(struct Obj *o, char *a, int b, int c);
extern void func_0A8ED8(int a, void *buf, float f);
extern void func_0B4790(struct Obj *o, int a, int b, int c, int d);
extern void func_0B4778(struct Obj *o, int a, unsigned int b);
extern int func_0B4298(struct Obj *o, int a, int b);
extern int func_0B4378(struct Obj *o, int a, int b);
extern int func_0B4B40(int a, int b, int c, int d, int e, int f, int g, int h, unsigned int i);
extern int func_0B4510(struct Obj *o);

void func_0C7CC0(void)
{
    int buf[4];
    unsigned int i;

    func_0B4438(&D_00318E98, D_001F0B48, 0x1000, 0);
    func_0A8ED8(0x277, buf, 0.0f);
    func_0B4790(&D_00318E98, (short)buf[0], (short)buf[1], (short)buf[2], (short)buf[3]);
    func_0B4778(&D_00318E98, 0x276, 0xFFFFFFFF);
    func_0B4298(&D_00318E98, 0x40602020, 0xFFB07050);
    for (i = 0; i < 7; i++) {
        func_0B4378(&D_00318E98, 1, 1);
        if (D_00203090[i].w_00 != 6) {
            func_0B4B40((int)&D_00318E98, D_00203090[i].w_08, i, 0, 0, 0, 0, 0, 0xFFFFFFFF);
        }
    }
    D_00318E98.flags_14 |= 0x14;
    func_0B4510(&D_00318E98);
}
