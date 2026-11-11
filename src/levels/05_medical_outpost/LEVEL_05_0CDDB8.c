/* LEVEL_05:0x0CDDB8 -- placement copy of LEVEL_01_0CF810.c: builds the status line text for the current menu entry, shows it, then dispatches on the entry kind to reset the matching state. */

struct Obj0CF810 {
    char pad0[0x14];
    int w14;
};

struct Ent0CF810 {
    char pad0[0x10];
    int w10;
};

extern int D_00318860[];
extern char D_00220E40[];
extern char D_001F2828[];
extern int D_001F3928;

extern int sprintf(char *dst, const char *fmt, ...);
extern int func_0D69A0(int *set);
extern struct Ent0CF810 *func_023608(int h, int n);
extern int func_0235C0(int h, int n);
extern int func_0CDA68(struct Obj0CF810 *o);
extern void func_022DA0(char *a, char *buf, int h, int n, int m);
extern char *func_12DE28(int id);
extern void func_0D54F8(int a, char *s, char *t, char *u);
extern unsigned int func_0D5000(void);
extern void func_0D52D8(int a);
extern void func_0CDBE8(void);

void func_0CDDB8(void)
{
    char buf[256];
    struct Obj0CF810 *o;
    struct Ent0CF810 *e;
    unsigned int kind;
    int id;

    o = (struct Obj0CF810 *)func_0D69A0(D_00318860);
    if (o != 0) {
        e = func_023608(o->w14, -1);
        if (e != 0) {
            if (func_0CDA68(o) != 0) {
                func_022DA0(D_00220E40, buf, o->w14, 4, 0xFF);
                sprintf(D_001F2828, func_12DE28(0x1F7), buf);
            } else {
                id = e->w10;
                sprintf(D_001F2828, func_12DE28(0x1F7), func_12DE28(id));
            }
        }
        func_0D54F8(3, D_001F2828, func_12DE28(0x30B), func_12DE28(0x218));
    }
    kind = func_0D5000();
    func_0235C0(o->w14, -1);
    func_023608(o->w14, -1);
    switch (kind) {
    case 1:
        func_0D52D8(0);
        func_0CDBE8();
        break;
    case 2:
        func_0D52D8(0);
        D_001F3928 = 0;
        break;
    case 0:
        break;
    }
}
