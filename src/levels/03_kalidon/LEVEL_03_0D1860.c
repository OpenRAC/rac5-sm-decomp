/* LEVEL_03:0x0D1860 -- placement copy of LEVEL_01_0D1A78.c: builds the status line for the current menu entry, then dispatches on the entry kind. */

struct Obj0D1A78 {
    char pad0[0x24];
    int w24;
};

struct Ent0D1A78 {
    char pad0[8];
    int w8;
};

extern int D_00347998[];
extern char D_0021CC78[];
extern int D_0021CD7C;

extern int sprintf(char *dst, const char *fmt, ...);
extern int func_0D9008(int *set);
extern char *func_024540(unsigned int h, int n);
extern int func_0D1560(void);
extern struct Ent0D1A78 *func_024908(unsigned int id);
extern int func_024B68(void *h, void *id, void *n);
extern char *func_130878(int id);
extern void func_0D6D38(int a, char *s, char *t, char *u);
extern unsigned int func_0D6840(void);
extern int func_0244F8(int h, int n);
extern void func_0D6B18(int a);
extern void func_0D17A0(void);

void func_0D1860(void *arg)
{
    struct Obj0D1A78 *o;
    struct Ent0D1A78 *e;
    int id;
    int eid;
    unsigned int kind;

    (void)arg;
    o = (struct Obj0D1A78 *)func_0D9008(D_00347998);
    if (o != 0) {
        func_024540(o->w24, -1);
        id = func_0D1560();
        e = func_024908(id);
        if (e != 0) {
            eid = e->w8;
            sprintf(D_0021CC78, func_130878(0x1F7), func_130878(eid));
        }
        if (id != 0 && ((int (*)(int, int, int))func_024B68)(o->w24, id, -1) == 0) {
            func_0D6D38(3, D_0021CC78, func_130878(0x30B), func_130878(0x218));
        } else {
            D_0021CD7C = 0;
        }
    }
    kind = func_0D6840();
    func_0244F8(o->w24, -1);
    func_024540(o->w24, -1);
    switch (kind) {
    case 1:
        func_0D6B18(0);
        func_0D17A0();
        break;
    case 2:
        func_0D6B18(0);
        D_0021CD7C = 0;
        break;
    case 0:
        break;
    }
}
