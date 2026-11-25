/* LEVEL_19:0x0C0A48 -- placement copy of LEVEL_01_0D1A78.c: builds the status line for the current menu entry, then dispatches on the entry kind. */

struct Obj0D1A78 {
    char pad0[0x24];
    int w24;
};

struct Ent0D1A78 {
    char pad0[8];
    int w8;
};

extern int D_0027AD18[];
extern char D_001B3628[];
extern int D_001B372C;

extern int sprintf(char *dst, const char *fmt, ...);
extern int func_0C81F0(int *set);
extern char *func_021D50(unsigned int h, int n);
extern int func_0C0748(void);
extern struct Ent0D1A78 *func_022040(unsigned int id);
extern int func_0222A0(void *h, void *id, void *n);
extern char *func_10F9D0(int id);
extern void func_0C5F20(int a, char *s, char *t, char *u);
extern unsigned int func_0C5A28(void);
extern int func_021D08(int h, int n);
extern void func_0C5D00(int a);
extern void func_0C0988(void);

void func_0C0A48(void *arg)
{
    struct Obj0D1A78 *o;
    struct Ent0D1A78 *e;
    int id;
    int eid;
    unsigned int kind;

    (void)arg;
    o = (struct Obj0D1A78 *)func_0C81F0(D_0027AD18);
    if (o != 0) {
        func_021D50(o->w24, -1);
        id = func_0C0748();
        e = func_022040(id);
        if (e != 0) {
            eid = e->w8;
            sprintf(D_001B3628, func_10F9D0(0x1F7), func_10F9D0(eid));
        }
        if (id != 0 && ((int (*)(int, int, int))func_0222A0)(o->w24, id, -1) == 0) {
            func_0C5F20(3, D_001B3628, func_10F9D0(0x30B), func_10F9D0(0x218));
        } else {
            D_001B372C = 0;
        }
    }
    kind = func_0C5A28();
    func_021D08(o->w24, -1);
    func_021D50(o->w24, -1);
    switch (kind) {
    case 1:
        func_0C5D00(0);
        func_0C0988();
        break;
    case 2:
        func_0C5D00(0);
        D_001B372C = 0;
        break;
    case 0:
        break;
    }
}
