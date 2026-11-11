/* LEVEL_03:0x0CF5F8 -- placement copy of LEVEL_01_0CF810.c: builds the status line text for the current menu entry, shows it, then dispatches on the entry kind to reset the matching state. */

struct Obj0CF810 {
    char pad0[0x14];
    int w14;
};

struct Ent0CF810 {
    char pad0[0x10];
    int w10;
};

extern int D_00347820[];
extern char D_0024FFC0[];
extern char D_0021BB28[];
extern int D_0021CC28;

extern int sprintf(char *dst, const char *fmt, ...);
extern int func_0D81E0(int *set);
extern struct Ent0CF810 *func_024540(int h, int n);
extern int func_0244F8(int h, int n);
extern int func_0CF2A8(struct Obj0CF810 *o);
extern void func_023B70(char *a, char *buf, int h, int n, int m);
extern char *func_130878(int id);
extern void func_0D6D38(int a, char *s, char *t, char *u);
extern unsigned int func_0D6840(void);
extern void func_0D6B18(int a);
extern void func_0CF428(void);

void func_0CF5F8(void)
{
    char buf[256];
    struct Obj0CF810 *o;
    struct Ent0CF810 *e;
    unsigned int kind;
    int id;

    o = (struct Obj0CF810 *)func_0D81E0(D_00347820);
    if (o != 0) {
        e = func_024540(o->w14, -1);
        if (e != 0) {
            if (func_0CF2A8(o) != 0) {
                func_023B70(D_0024FFC0, buf, o->w14, 4, 0xFF);
                sprintf(D_0021BB28, func_130878(0x1F7), buf);
            } else {
                id = e->w10;
                sprintf(D_0021BB28, func_130878(0x1F7), func_130878(id));
            }
        }
        func_0D6D38(3, D_0021BB28, func_130878(0x30B), func_130878(0x218));
    }
    kind = func_0D6840();
    func_0244F8(o->w14, -1);
    func_024540(o->w14, -1);
    switch (kind) {
    case 1:
        func_0D6B18(0);
        func_0CF428();
        break;
    case 2:
        func_0D6B18(0);
        D_0021CC28 = 0;
        break;
    case 0:
        break;
    }
}
