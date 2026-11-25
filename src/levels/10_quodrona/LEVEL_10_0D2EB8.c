/* LEVEL_10:0x0D2EB8 -- placement copy of LEVEL_01_0D1A78.c: builds the status line for the current menu entry, then dispatches on the entry kind. */

struct Obj0D1A78 {
    char pad0[0x24];
    int w24;
};

struct Ent0D1A78 {
    char pad0[8];
    int w8;
};

extern int D_00335F18[];
extern char D_0020D5F8[];
extern int D_0020D6FC;

extern int sprintf(char *dst, const char *fmt, ...);
extern int func_0DA660(int *set);
extern char *func_023FD8(unsigned int h, int n);
extern int func_0D2BB8(void);
extern struct Ent0D1A78 *func_0243A0(unsigned int id);
extern int func_024600(void *h, void *id, void *n);
extern char *func_130310(int id);
extern void func_0D8390(int a, char *s, char *t, char *u);
extern unsigned int func_0D7E98(void);
extern int func_023F90(int h, int n);
extern void func_0D8170(int a);
extern void func_0D2DF8(void);

void func_0D2EB8(void *arg)
{
    struct Obj0D1A78 *o;
    struct Ent0D1A78 *e;
    int id;
    int eid;
    unsigned int kind;

    (void)arg;
    o = (struct Obj0D1A78 *)func_0DA660(D_00335F18);
    if (o != 0) {
        func_023FD8(o->w24, -1);
        id = func_0D2BB8();
        e = func_0243A0(id);
        if (e != 0) {
            eid = e->w8;
            sprintf(D_0020D5F8, func_130310(0x1F7), func_130310(eid));
        }
        if (id != 0 && ((int (*)(int, int, int))func_024600)(o->w24, id, -1) == 0) {
            func_0D8390(3, D_0020D5F8, func_130310(0x30B), func_130310(0x218));
        } else {
            D_0020D6FC = 0;
        }
    }
    kind = func_0D7E98();
    func_023F90(o->w24, -1);
    func_023FD8(o->w24, -1);
    switch (kind) {
    case 1:
        func_0D8170(0);
        func_0D2DF8();
        break;
    case 2:
        func_0D8170(0);
        D_0020D6FC = 0;
        break;
    case 0:
        break;
    }
}
