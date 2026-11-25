/* LEVEL_24:0x0CB3B8 -- placement copy of LEVEL_01_0D1A78.c: builds the status line for the current menu entry, then dispatches on the entry kind. */

struct Obj0D1A78 {
    char pad0[0x24];
    int w24;
};

struct Ent0D1A78 {
    char pad0[8];
    int w8;
};

extern int D_002F89D8[];
extern char D_001D5278[];
extern int D_001D537C;

extern int sprintf(char *dst, const char *fmt, ...);
extern int func_0D2B88(int *set);
extern char *func_022448(unsigned int h, int n);
extern int func_0CB0B8(void);
extern struct Ent0D1A78 *func_022810(unsigned int id);
extern int func_022A70(void *h, void *id, void *n);
extern char *func_127FB0(int id);
extern void func_0D08A8(int a, char *s, char *t, char *u);
extern unsigned int func_0D03B0(void);
extern int func_022400(int h, int n);
extern void func_0D0688(int a);
extern void func_0CB2F8(void);

void func_0CB3B8(void *arg)
{
    struct Obj0D1A78 *o;
    struct Ent0D1A78 *e;
    int id;
    int eid;
    unsigned int kind;

    (void)arg;
    o = (struct Obj0D1A78 *)func_0D2B88(D_002F89D8);
    if (o != 0) {
        func_022448(o->w24, -1);
        id = func_0CB0B8();
        e = func_022810(id);
        if (e != 0) {
            eid = e->w8;
            sprintf(D_001D5278, func_127FB0(0x1F7), func_127FB0(eid));
        }
        if (id != 0 && ((int (*)(int, int, int))func_022A70)(o->w24, id, -1) == 0) {
            func_0D08A8(3, D_001D5278, func_127FB0(0x30B), func_127FB0(0x218));
        } else {
            D_001D537C = 0;
        }
    }
    kind = func_0D03B0();
    func_022400(o->w24, -1);
    func_022448(o->w24, -1);
    switch (kind) {
    case 1:
        func_0D0688(0);
        func_0CB2F8();
        break;
    case 2:
        func_0D0688(0);
        D_001D537C = 0;
        break;
    case 0:
        break;
    }
}
