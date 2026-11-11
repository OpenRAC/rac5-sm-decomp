/* LEVEL_23:0x0C41F8 -- placement copy of LEVEL_01_0CD3C0.c: initialises the scene object and registers seven table entries. */

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

extern struct Obj D_002FD558;
extern struct Tab D_001E7390[];
extern char D_001D5048[];

extern void func_0B08D0(struct Obj *o, char *a, int b, int c);
extern void func_0A5478(int a, void *buf, float f);
extern void func_0B0C28(struct Obj *o, int a, int b, int c, int d);
extern void func_0B0C10(struct Obj *o, int a, unsigned int b);
extern int func_0B0730(struct Obj *o, int a, int b);
extern int func_0B0810(struct Obj *o, int a, int b);
extern int func_0B0FD8(int a, int b, int c, int d, int e, int f, int g, int h, unsigned int i);
extern int func_0B09A8(struct Obj *o);

void func_0C41F8(void)
{
    int buf[4];
    unsigned int i;

    func_0B08D0(&D_002FD558, D_001D5048, 0x1000, 0);
    func_0A5478(0x277, buf, 0.0f);
    func_0B0C28(&D_002FD558, (short)buf[0], (short)buf[1], (short)buf[2], (short)buf[3]);
    func_0B0C10(&D_002FD558, 0x276, 0xFFFFFFFF);
    func_0B0730(&D_002FD558, 0x40602020, 0xFFB07050);
    for (i = 0; i < 7; i++) {
        func_0B0810(&D_002FD558, 1, 1);
        if (D_001E7390[i].w_00 != 6) {
            func_0B0FD8((int)&D_002FD558, D_001E7390[i].w_08, i, 0, 0, 0, 0, 0, 0xFFFFFFFF);
        }
    }
    D_002FD558.flags_14 |= 0x14;
    func_0B09A8(&D_002FD558);
}
