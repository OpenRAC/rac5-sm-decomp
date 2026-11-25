/* LEVEL_22:0x0BFFB8 -- placement copy of LEVEL_01_0D1A78.c: builds the status line for the current menu entry, then dispatches on the entry kind. */

struct Obj0D1A78 {
    char pad0[0x24];
    int w24;
};

struct Ent0D1A78 {
    char pad0[8];
    int w8;
};

extern int D_002826D8[];
extern char D_00163978[];
extern int D_00163A7C;

extern int sprintf(char *dst, const char *fmt, ...);
extern int func_0C7760(int *set);
extern char *func_01F4A8(unsigned int h, int n);
extern int func_0BFCB8(void);
extern struct Ent0D1A78 *func_01F870(unsigned int id);
extern int func_01FAD0(void *h, void *id, void *n);
extern char *func_109980(int id);
extern void func_0C5490(int a, char *s, char *t, char *u);
extern unsigned int func_0C4F98(void);
extern int func_01F460(int h, int n);
extern void func_0C5270(int a);
extern void func_0BFEF8(void);

void func_0BFFB8(void *arg)
{
    struct Obj0D1A78 *o;
    struct Ent0D1A78 *e;
    int id;
    int eid;
    unsigned int kind;

    (void)arg;
    o = (struct Obj0D1A78 *)func_0C7760(D_002826D8);
    if (o != 0) {
        func_01F4A8(o->w24, -1);
        id = func_0BFCB8();
        e = func_01F870(id);
        if (e != 0) {
            eid = e->w8;
            sprintf(D_00163978, func_109980(0x1F7), func_109980(eid));
        }
        if (id != 0 && ((int (*)(int, int, int))func_01FAD0)(o->w24, id, -1) == 0) {
            func_0C5490(3, D_00163978, func_109980(0x30B), func_109980(0x218));
        } else {
            D_00163A7C = 0;
        }
    }
    kind = func_0C4F98();
    func_01F460(o->w24, -1);
    func_01F4A8(o->w24, -1);
    switch (kind) {
    case 1:
        func_0C5270(0);
        func_0BFEF8();
        break;
    case 2:
        func_0C5270(0);
        D_00163A7C = 0;
        break;
    case 0:
        break;
    }
}
