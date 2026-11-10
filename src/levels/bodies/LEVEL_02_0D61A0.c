/* LEVEL_02:0x0D61A0 -- placement copy of LEVEL_01_0CF810.c: builds the status line text for the current menu entry, shows it, then dispatches on the entry kind to reset the matching state. */

struct Obj0CF810 {
    char pad0[0x14];
    int w14;
};

struct Ent0CF810 {
    char pad0[0x10];
    int w10;
};

extern int D_00343EA0[];
extern char D_0024C650[];
extern char D_00218468[];
extern int D_00219568;

extern int sprintf(char *dst, const char *fmt, ...);
extern int func_0DED88(int *set);
extern struct Ent0CF810 *func_024FD0(int h, int n);
extern int func_024F88(int h, int n);
extern int func_0D5E50(struct Obj0CF810 *o);
extern void func_024768(char *a, char *buf, int h, int n, int m);
extern char *func_138860(int id);
extern void func_0DD8E0(int a, char *s, char *t, char *u);
extern unsigned int func_0DD3E8(void);
extern void func_0DD6C0(int a);
extern void func_0D5FD0(void);

void func_0D61A0(void)
{
    char buf[256];
    struct Obj0CF810 *o;
    struct Ent0CF810 *e;
    unsigned int kind;
    int id;

    o = (struct Obj0CF810 *)func_0DED88(D_00343EA0);
    if (o != 0) {
        e = func_024FD0(o->w14, -1);
        if (e != 0) {
            if (func_0D5E50(o) != 0) {
                func_024768(D_0024C650, buf, o->w14, 4, 0xFF);
                sprintf(D_00218468, func_138860(0x1F7), buf);
            } else {
                id = e->w10;
                sprintf(D_00218468, func_138860(0x1F7), func_138860(id));
            }
        }
        func_0DD8E0(3, D_00218468, func_138860(0x30B), func_138860(0x218));
    }
    kind = func_0DD3E8();
    func_024F88(o->w14, -1);
    func_024FD0(o->w14, -1);
    switch (kind) {
    case 1:
        func_0DD6C0(0);
        func_0D5FD0();
        break;
    case 2:
        func_0DD6C0(0);
        D_00219568 = 0;
        break;
    case 0:
        break;
    }
}
