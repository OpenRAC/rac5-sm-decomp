/* LEVEL_09:0x0CA670 -- placement copy of LEVEL_01_0CD3C0.c: initialises the scene object and registers seven table entries. */

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

extern struct Obj D_00313898;
extern struct Tab D_001FDE10[];
extern char D_001EBA48[];

extern void func_0B6DE8(struct Obj *o, char *a, int b, int c);
extern void func_0AB9B8(int a, void *buf, float f);
extern void func_0B7140(struct Obj *o, int a, int b, int c, int d);
extern void func_0B7128(struct Obj *o, int a, unsigned int b);
extern int func_0B6C48(struct Obj *o, int a, int b);
extern int func_0B6D28(struct Obj *o, int a, int b);
extern int func_0B74F0(int a, int b, int c, int d, int e, int f, int g, int h, unsigned int i);
extern int func_0B6EC0(struct Obj *o);

void func_0CA670(void)
{
    int buf[4];
    unsigned int i;

    func_0B6DE8(&D_00313898, D_001EBA48, 0x1000, 0);
    func_0AB9B8(0x277, buf, 0.0f);
    func_0B7140(&D_00313898, (short)buf[0], (short)buf[1], (short)buf[2], (short)buf[3]);
    func_0B7128(&D_00313898, 0x276, 0xFFFFFFFF);
    func_0B6C48(&D_00313898, 0x40602020, 0xFFB07050);
    for (i = 0; i < 7; i++) {
        func_0B6D28(&D_00313898, 1, 1);
        if (D_001FDE10[i].w_00 != 6) {
            func_0B74F0((int)&D_00313898, D_001FDE10[i].w_08, i, 0, 0, 0, 0, 0, 0xFFFFFFFF);
        }
    }
    D_00313898.flags_14 |= 0x14;
    func_0B6EC0(&D_00313898);
}
