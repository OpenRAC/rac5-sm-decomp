/* LEVEL_07:0x0D1870 -- placement copy of LEVEL_01_0CF810.c: builds the status line text for the current menu entry, shows it, then dispatches on the entry kind to reset the matching state. */

struct Obj0CF810 {
    char pad0[0x14];
    int w14;
};

struct Ent0CF810 {
    char pad0[0x10];
    int w10;
};

extern int D_003422A0[];
extern char D_0024AA40[];
extern char D_002177A8[];
extern int D_002188A8;

extern int sprintf(char *dst, const char *fmt, ...);
extern int func_0DA458(int *set);
extern struct Ent0CF810 *func_024C38(int h, int n);
extern int func_024BF0(int h, int n);
extern int func_0D1520(struct Obj0CF810 *o);
extern void func_024268(char *a, char *buf, int h, int n, int m);
extern char *func_1354B0(int id);
extern void func_0D8FB0(int a, char *s, char *t, char *u);
extern unsigned int func_0D8AB8(void);
extern void func_0D8D90(int a);
extern void func_0D16A0(void);

void func_0D1870(void)
{
    char buf[256];
    struct Obj0CF810 *o;
    struct Ent0CF810 *e;
    unsigned int kind;
    int id;

    o = (struct Obj0CF810 *)func_0DA458(D_003422A0);
    if (o != 0) {
        e = func_024C38(o->w14, -1);
        if (e != 0) {
            if (func_0D1520(o) != 0) {
                func_024268(D_0024AA40, buf, o->w14, 4, 0xFF);
                sprintf(D_002177A8, func_1354B0(0x1F7), buf);
            } else {
                id = e->w10;
                sprintf(D_002177A8, func_1354B0(0x1F7), func_1354B0(id));
            }
        }
        func_0D8FB0(3, D_002177A8, func_1354B0(0x30B), func_1354B0(0x218));
    }
    kind = func_0D8AB8();
    func_024BF0(o->w14, -1);
    func_024C38(o->w14, -1);
    switch (kind) {
    case 1:
        func_0D8D90(0);
        func_0D16A0();
        break;
    case 2:
        func_0D8D90(0);
        D_002188A8 = 0;
        break;
    case 0:
        break;
    }
}
