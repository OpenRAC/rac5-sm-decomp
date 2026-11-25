/* LEVEL_21:0x0B20B8 -- placement copy of LEVEL_01_0D1A78.c: builds the status line for the current menu entry, then dispatches on the entry kind. */

struct Obj0D1A78 {
    char pad0[0x24];
    int w24;
};

struct Ent0D1A78 {
    char pad0[8];
    int w8;
};

extern int D_00244358[];
extern char D_00159278[];
extern int D_0015937C;

extern int sprintf(char *dst, const char *fmt, ...);
extern int func_0B9860(int *set);
extern char *func_01E9D8(unsigned int h, int n);
extern int func_0B1DB8(void);
extern struct Ent0D1A78 *func_01EDA0(unsigned int id);
extern int func_01F000(void *h, void *id, void *n);
extern char *func_0F1378(int id);
extern void func_0B7590(int a, char *s, char *t, char *u);
extern unsigned int func_0B7098(void);
extern int func_01E990(int h, int n);
extern void func_0B7370(int a);
extern void func_0B1FF8(void);

void func_0B20B8(void *arg)
{
    struct Obj0D1A78 *o;
    struct Ent0D1A78 *e;
    int id;
    int eid;
    unsigned int kind;

    (void)arg;
    o = (struct Obj0D1A78 *)func_0B9860(D_00244358);
    if (o != 0) {
        func_01E9D8(o->w24, -1);
        id = func_0B1DB8();
        e = func_01EDA0(id);
        if (e != 0) {
            eid = e->w8;
            sprintf(D_00159278, func_0F1378(0x1F7), func_0F1378(eid));
        }
        if (id != 0 && ((int (*)(int, int, int))func_01F000)(o->w24, id, -1) == 0) {
            func_0B7590(3, D_00159278, func_0F1378(0x30B), func_0F1378(0x218));
        } else {
            D_0015937C = 0;
        }
    }
    kind = func_0B7098();
    func_01E990(o->w24, -1);
    func_01E9D8(o->w24, -1);
    switch (kind) {
    case 1:
        func_0B7370(0);
        func_0B1FF8();
        break;
    case 2:
        func_0B7370(0);
        D_0015937C = 0;
        break;
    case 0:
        break;
    }
}
