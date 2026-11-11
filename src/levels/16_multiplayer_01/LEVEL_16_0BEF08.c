/* LEVEL_16:0x0BEF08 -- builds the status line text for the current menu entry, shows it, then dispatches on the entry kind to reset the matching state. */

struct Obj0BEF08 {
    char pad0[0x14];
    int w14;
};

struct Ent0BEF08 {
    char pad0[0x10];
    int w10;
};

extern char D_0027AA20[];
extern char D_001E4090[];
extern char D_001B1358[];
extern int D_001B2458;

extern int sprintf(char *dst, const char *fmt, ...);
extern struct Obj0BEF08 *func_0C7AF0(char *p);
extern struct Ent0BEF08 *func_022110(int h, int n);
extern int func_0220C8(int h, int n);
extern int func_0BEBB8(struct Obj0BEF08 *o);
extern void func_021758(char *a, char *buf, int h, int n, int m);
extern char *func_10F330(int id);
extern void func_0C6648(int a, char *s, char *t, char *u);
extern unsigned int func_0C6150(void);
extern void func_0C6428(int a);
extern void func_0BED38(void);

void func_0BEF08(void)
{
    char buf[256];
    struct Obj0BEF08 *o;
    struct Ent0BEF08 *e;
    unsigned int kind;
    int id;

    o = func_0C7AF0(D_0027AA20);
    if (o != 0) {
        e = func_022110(o->w14, -1);
        if (e != 0) {
            if (func_0BEBB8(o) != 0) {
                func_021758(D_001E4090, buf, o->w14, 3, 0xFF);
                sprintf(D_001B1358, func_10F330(0x1F7), buf);
            } else {
                id = e->w10;
                sprintf(D_001B1358, func_10F330(0x1F7), func_10F330(id));
            }
        }
        func_0C6648(3, D_001B1358, func_10F330(0x30B), func_10F330(0x218));
    }
    kind = func_0C6150();
    func_0220C8(o->w14, -1);
    func_022110(o->w14, -1);
    switch (kind) {
    case 1:
        func_0C6428(0);
        func_0BED38();
        break;
    case 2:
        func_0C6428(0);
        D_001B2458 = 0;
        break;
    case 0:
        break;
    }
}
