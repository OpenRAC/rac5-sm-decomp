/* LEVEL_22:0x0BDD50 -- placement copy of LEVEL_01_0CF810.c: builds the status line text for the current menu entry, shows it, then dispatches on the entry kind to reset the matching state. */

struct Obj0CF810 {
    char pad0[0x14];
    int w14;
};

struct Ent0CF810 {
    char pad0[0x10];
    int w10;
};

extern int D_00282560[];
extern char D_00186D40[];
extern char D_00162828[];
extern int D_00163928;

extern int sprintf(char *dst, const char *fmt, ...);
extern int func_0C6938(int *set);
extern struct Ent0CF810 *func_01F4A8(int h, int n);
extern int func_01F460(int h, int n);
extern int func_0BDA00(struct Obj0CF810 *o);
extern void func_01ED48(char *a, char *buf, int h, int n, int m);
extern char *func_109980(int id);
extern void func_0C5490(int a, char *s, char *t, char *u);
extern unsigned int func_0C4F98(void);
extern void func_0C5270(int a);
extern void func_0BDB80(void);

void func_0BDD50(void)
{
    char buf[256];
    struct Obj0CF810 *o;
    struct Ent0CF810 *e;
    unsigned int kind;
    int id;

    o = (struct Obj0CF810 *)func_0C6938(D_00282560);
    if (o != 0) {
        e = func_01F4A8(o->w14, -1);
        if (e != 0) {
            if (func_0BDA00(o) != 0) {
                func_01ED48(D_00186D40, buf, o->w14, 4, 0xFF);
                sprintf(D_00162828, func_109980(0x1F7), buf);
            } else {
                id = e->w10;
                sprintf(D_00162828, func_109980(0x1F7), func_109980(id));
            }
        }
        func_0C5490(3, D_00162828, func_109980(0x30B), func_109980(0x218));
    }
    kind = func_0C4F98();
    func_01F460(o->w14, -1);
    func_01F4A8(o->w14, -1);
    switch (kind) {
    case 1:
        func_0C5270(0);
        func_0BDB80();
        break;
    case 2:
        func_0C5270(0);
        D_00163928 = 0;
        break;
    case 0:
        break;
    }
}
