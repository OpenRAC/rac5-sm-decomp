/* LEVEL_10:0x0D0C50 -- placement copy of LEVEL_01_0CF810.c: builds the status line text for the current menu entry, shows it, then dispatches on the entry kind to reset the matching state. */

struct Obj0CF810 {
    char pad0[0x14];
    int w14;
};

struct Ent0CF810 {
    char pad0[0x10];
    int w10;
};

extern int D_00335DA0[];
extern char D_0023E540[];
extern char D_0020C4A8[];
extern int D_0020D5A8;

extern int sprintf(char *dst, const char *fmt, ...);
extern int func_0D9838(int *set);
extern struct Ent0CF810 *func_023FD8(int h, int n);
extern int func_023F90(int h, int n);
extern int func_0D0900(struct Obj0CF810 *o);
extern void func_023608(char *a, char *buf, int h, int n, int m);
extern char *func_130310(int id);
extern void func_0D8390(int a, char *s, char *t, char *u);
extern unsigned int func_0D7E98(void);
extern void func_0D8170(int a);
extern void func_0D0A80(void);

void func_0D0C50(void)
{
    char buf[256];
    struct Obj0CF810 *o;
    struct Ent0CF810 *e;
    unsigned int kind;
    int id;

    o = (struct Obj0CF810 *)func_0D9838(D_00335DA0);
    if (o != 0) {
        e = func_023FD8(o->w14, -1);
        if (e != 0) {
            if (func_0D0900(o) != 0) {
                func_023608(D_0023E540, buf, o->w14, 4, 0xFF);
                sprintf(D_0020C4A8, func_130310(0x1F7), buf);
            } else {
                id = e->w10;
                sprintf(D_0020C4A8, func_130310(0x1F7), func_130310(id));
            }
        }
        func_0D8390(3, D_0020C4A8, func_130310(0x30B), func_130310(0x218));
    }
    kind = func_0D7E98();
    func_023F90(o->w14, -1);
    func_023FD8(o->w14, -1);
    switch (kind) {
    case 1:
        func_0D8170(0);
        func_0D0A80();
        break;
    case 2:
        func_0D8170(0);
        D_0020D5A8 = 0;
        break;
    case 0:
        break;
    }
}
