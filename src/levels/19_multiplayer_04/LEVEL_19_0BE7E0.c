/* LEVEL_19:0x0BE7E0 -- placement copy of LEVEL_16_0BEF08.c: builds the status line text for the current menu entry, shows it, then dispatches on the entry kind to reset the matching state. */

struct Obj0BEF08 {
    char pad0[0x14];
    int w14;
};

struct Ent0BEF08 {
    char pad0[0x10];
    int w10;
};

extern char D_0027ABA0[];
extern char D_001E4210[];
extern char D_001B24D8[];
extern int D_001B35D8;

extern int sprintf(char *dst, const char *fmt, ...);
extern struct Obj0BEF08 *func_0C73C8(char *p);
extern struct Ent0BEF08 *func_021D50(int h, int n);
extern int func_021D08(int h, int n);
extern int func_0BE490(struct Obj0BEF08 *o);
extern void func_021398(char *a, char *buf, int h, int n, int m);
extern char *func_10F9D0(int id);
extern void func_0C5F20(int a, char *s, char *t, char *u);
extern unsigned int func_0C5A28(void);
extern void func_0C5D00(int a);
extern void func_0BE610(void);

void func_0BE7E0(void)
{
    char buf[256];
    struct Obj0BEF08 *o;
    struct Ent0BEF08 *e;
    unsigned int kind;
    int id;

    o = func_0C73C8(D_0027ABA0);
    if (o != 0) {
        e = func_021D50(o->w14, -1);
        if (e != 0) {
            if (func_0BE490(o) != 0) {
                func_021398(D_001E4210, buf, o->w14, 3, 0xFF);
                sprintf(D_001B24D8, func_10F9D0(0x1F7), buf);
            } else {
                id = e->w10;
                sprintf(D_001B24D8, func_10F9D0(0x1F7), func_10F9D0(id));
            }
        }
        func_0C5F20(3, D_001B24D8, func_10F9D0(0x30B), func_10F9D0(0x218));
    }
    kind = func_0C5A28();
    func_021D08(o->w14, -1);
    func_021D50(o->w14, -1);
    switch (kind) {
    case 1:
        func_0C5D00(0);
        func_0BE610();
        break;
    case 2:
        func_0C5D00(0);
        D_001B35D8 = 0;
        break;
    case 0:
        break;
    }
}
