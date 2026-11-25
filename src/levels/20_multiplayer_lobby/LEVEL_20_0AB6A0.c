/* LEVEL_20:0x0AB6A0 -- placement copy of LEVEL_01_0D1A78.c: builds the status line for the current menu entry, then dispatches on the entry kind. */

struct Obj0D1A78 {
    char pad0[0x24];
    int w24;
};

struct Ent0D1A78 {
    char pad0[8];
    int w8;
};

extern int D_0019E3D8[];
extern char D_00114B88[];
extern int D_00114C8C;

extern int sprintf(char *dst, const char *fmt, ...);
extern int func_0B2E48(int *set);
extern char *func_01EE10(unsigned int h, int n);
extern int func_0AB3A0(void);
extern struct Ent0D1A78 *func_01F100(unsigned int id);
extern int func_01F360(void *h, void *id, void *n);
extern char *func_0E2118(int id);
extern void func_0B0B78(int a, char *s, char *t, char *u);
extern unsigned int func_0B0680(void);
extern int func_01EDC8(int h, int n);
extern void func_0B0958(int a);
extern void func_0AB5E0(void);

void func_0AB6A0(void *arg)
{
    struct Obj0D1A78 *o;
    struct Ent0D1A78 *e;
    int id;
    int eid;
    unsigned int kind;

    (void)arg;
    o = (struct Obj0D1A78 *)func_0B2E48(D_0019E3D8);
    if (o != 0) {
        func_01EE10(o->w24, -1);
        id = func_0AB3A0();
        e = func_01F100(id);
        if (e != 0) {
            eid = e->w8;
            sprintf(D_00114B88, func_0E2118(0x1F7), func_0E2118(eid));
        }
        if (id != 0 && ((int (*)(int, int, int))func_01F360)(o->w24, id, -1) == 0) {
            func_0B0B78(3, D_00114B88, func_0E2118(0x30B), func_0E2118(0x218));
        } else {
            D_00114C8C = 0;
        }
    }
    kind = func_0B0680();
    func_01EDC8(o->w24, -1);
    func_01EE10(o->w24, -1);
    switch (kind) {
    case 1:
        func_0B0958(0);
        func_0AB5E0();
        break;
    case 2:
        func_0B0958(0);
        D_00114C8C = 0;
        break;
    case 0:
        break;
    }
}
