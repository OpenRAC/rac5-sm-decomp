/* LEVEL_08:0x0D8368 -- placement copy of LEVEL_01_0CD3C0.c: initialises the scene object and registers seven table entries. */

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

extern struct Obj D_0037B398;
extern struct Tab D_0025DE90[];
extern char D_0024AB08[];

extern void func_0C4A28(struct Obj *o, char *a, int b, int c);
extern void func_0B9040(int a, void *buf, float f);
extern void func_0C4D80(struct Obj *o, int a, int b, int c, int d);
extern void func_0C4D68(struct Obj *o, int a, unsigned int b);
extern int func_0C4888(struct Obj *o, int a, int b);
extern int func_0C4968(struct Obj *o, int a, int b);
extern void func_0C5130(int a, int b, int c, int d, int e, int f, int g, int h, unsigned int i);
extern int func_0C4B00(struct Obj *o);

void func_0D8368(void)
{
    int buf[4];
    unsigned int i;

    func_0C4A28(&D_0037B398, D_0024AB08, 0x1000, 0);
    func_0B9040(0x277, buf, 0.0f);
    func_0C4D80(&D_0037B398, (short)buf[0], (short)buf[1], (short)buf[2], (short)buf[3]);
    func_0C4D68(&D_0037B398, 0x276, 0xFFFFFFFF);
    func_0C4888(&D_0037B398, 0x40602020, 0xFFB07050);
    for (i = 0; i < 7; i++) {
        func_0C4968(&D_0037B398, 1, 1);
        if (D_0025DE90[i].w_00 != 6) {
            func_0C5130((int)&D_0037B398, D_0025DE90[i].w_08, i, 0, 0, 0, 0, 0, 0xFFFFFFFF);
        }
    }
    D_0037B398.flags_14 |= 0x14;
    func_0C4B00(&D_0037B398);
}
