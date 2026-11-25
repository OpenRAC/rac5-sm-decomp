/* LEVEL_02:0x0D8408 -- placement copy of LEVEL_01_0D1A78.c: builds the status line for the current menu entry, then dispatches on the entry kind. */

struct Obj0D1A78 {
    char pad0[0x24];
    int w24;
};

struct Ent0D1A78 {
    char pad0[8];
    int w8;
};

extern int D_00344018[];
extern char D_002195B8[];
extern int D_002196BC;

extern int sprintf(char *dst, const char *fmt, ...);
extern int func_0DFBB0(int *set);
extern char *func_024FD0(unsigned int h, int n);
extern int func_0D8108(void);
extern struct Ent0D1A78 *func_025398(unsigned int id);
extern int func_0255F8(void *h, void *id, void *n);
extern char *func_138860(int id);
extern void func_0DD8E0(int a, char *s, char *t, char *u);
extern unsigned int func_0DD3E8(void);
extern int func_024F88(int h, int n);
extern void func_0DD6C0(int a);
extern void func_0D8348(void);

void func_0D8408(void *arg)
{
    struct Obj0D1A78 *o;
    struct Ent0D1A78 *e;
    int id;
    int eid;
    unsigned int kind;

    (void)arg;
    o = (struct Obj0D1A78 *)func_0DFBB0(D_00344018);
    if (o != 0) {
        func_024FD0(o->w24, -1);
        id = func_0D8108();
        e = func_025398(id);
        if (e != 0) {
            eid = e->w8;
            sprintf(D_002195B8, func_138860(0x1F7), func_138860(eid));
        }
        if (id != 0 && ((int (*)(int, int, int))func_0255F8)(o->w24, id, -1) == 0) {
            func_0DD8E0(3, D_002195B8, func_138860(0x30B), func_138860(0x218));
        } else {
            D_002196BC = 0;
        }
    }
    kind = func_0DD3E8();
    func_024F88(o->w24, -1);
    func_024FD0(o->w24, -1);
    switch (kind) {
    case 1:
        func_0DD6C0(0);
        func_0D8348();
        break;
    case 2:
        func_0DD6C0(0);
        D_002196BC = 0;
        break;
    case 0:
        break;
    }
}
