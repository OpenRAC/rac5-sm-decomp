/* LEVEL_06:0x0CA110 -- placement copy of LEVEL_01_0CF810.c: builds the status line text for the current menu entry, shows it, then dispatches on the entry kind to reset the matching state. */

struct Obj0CF810 {
    char pad0[0x14];
    int w14;
};

struct Ent0CF810 {
    char pad0[0x10];
    int w10;
};

extern int D_00319720[];
extern char D_00221EC0[];
extern char D_001F23A8[];
extern int D_001F34A8;

extern int sprintf(char *dst, const char *fmt, ...);
extern int func_0D2CF8(int *set);
extern struct Ent0CF810 *func_022D78(int h, int n);
extern int func_022D30(int h, int n);
extern int func_0C9DC0(struct Obj0CF810 *o);
extern void func_0223A8(char *a, char *buf, int h, int n, int m);
extern char *func_128B80(int id);
extern void func_0D1850(int a, char *s, char *t, char *u);
extern unsigned int func_0D1358(void);
extern void func_0D1630(int a);
extern void func_0C9F40(void);

void func_0CA110(void)
{
    char buf[256];
    struct Obj0CF810 *o;
    struct Ent0CF810 *e;
    unsigned int kind;
    int id;

    o = (struct Obj0CF810 *)func_0D2CF8(D_00319720);
    if (o != 0) {
        e = func_022D78(o->w14, -1);
        if (e != 0) {
            if (func_0C9DC0(o) != 0) {
                func_0223A8(D_00221EC0, buf, o->w14, 4, 0xFF);
                sprintf(D_001F23A8, func_128B80(0x1F7), buf);
            } else {
                id = e->w10;
                sprintf(D_001F23A8, func_128B80(0x1F7), func_128B80(id));
            }
        }
        func_0D1850(3, D_001F23A8, func_128B80(0x30B), func_128B80(0x218));
    }
    kind = func_0D1358();
    func_022D30(o->w14, -1);
    func_022D78(o->w14, -1);
    switch (kind) {
    case 1:
        func_0D1630(0);
        func_0C9F40();
        break;
    case 2:
        func_0D1630(0);
        D_001F34A8 = 0;
        break;
    case 0:
        break;
    }
}
