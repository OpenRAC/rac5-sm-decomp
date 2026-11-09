/* LEVEL_08:0x0DA7B8 -- placement copy of LEVEL_01_0CF810.c: builds the status line text for the current menu entry, shows it, then dispatches on the entry kind to reset the matching state. */

struct Obj0CF810 {
    char pad0[0x14];
    int w14;
};

struct Ent0CF810 {
    char pad0[0x10];
    int w10;
};

extern int D_0037BC20[];
extern char D_002843D0[];
extern char D_0024C368[];
extern int D_0024D468;

extern int sprintf(char *dst, const char *fmt, ...);
extern int func_0E33C8(int *set);
extern struct Ent0CF810 *func_024EF0(int h, int n);
extern int func_024EA8(int h, int n);
extern int func_0DA468(struct Obj0CF810 *o);
extern void func_024520(char *a, char *buf, int h, int n, int m);
extern char *func_1439E8(int id);
extern void func_0E1F10(int a, char *s, char *t, char *u);
extern unsigned int func_0E1A18(void);
extern void func_0E1CF0(int a);
extern void func_0DA5E8(void);

void func_0DA7B8(void)
{
    char buf[256];
    struct Obj0CF810 *o;
    struct Ent0CF810 *e;
    unsigned int kind;
    int id;

    o = (struct Obj0CF810 *)func_0E33C8(D_0037BC20);
    if (o != 0) {
        e = func_024EF0(o->w14, -1);
        if (e != 0) {
            if (func_0DA468(o) != 0) {
                func_024520(D_002843D0, buf, o->w14, 4, 0xFF);
                sprintf(D_0024C368, func_1439E8(0x1F7), buf);
            } else {
                id = e->w10;
                sprintf(D_0024C368, func_1439E8(0x1F7), func_1439E8(id));
            }
        }
        func_0E1F10(3, D_0024C368, func_1439E8(0x30B), func_1439E8(0x218));
    }
    kind = func_0E1A18();
    func_024EA8(o->w14, -1);
    func_024EF0(o->w14, -1);
    switch (kind) {
    case 1:
        func_0E1CF0(0);
        func_0DA5E8();
        break;
    case 2:
        func_0E1CF0(0);
        D_0024D468 = 0;
        break;
    case 0:
        break;
    }
}
