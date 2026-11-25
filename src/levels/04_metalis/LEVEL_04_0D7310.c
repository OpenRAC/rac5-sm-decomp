/* LEVEL_04:0x0D7310 -- placement copy of LEVEL_01_0D1A78.c: builds the status line for the current menu entry, then dispatches on the entry kind. */

struct Obj0D1A78 {
    char pad0[0x24];
    int w24;
};

struct Ent0D1A78 {
    char pad0[8];
    int w8;
};

extern int D_00347318[];
extern char D_0021DAB8[];
extern int D_0021DBBC;

extern int sprintf(char *dst, const char *fmt, ...);
extern int func_0DEAE0(int *set);
extern char *func_0242F0(unsigned int h, int n);
extern int func_0D7010(void);
extern struct Ent0D1A78 *func_0246B8(unsigned int id);
extern int func_024918(void *h, void *id, void *n);
extern char *func_13E930(int id);
extern void func_0DC800(int a, char *s, char *t, char *u);
extern unsigned int func_0DC308(void);
extern int func_0242A8(int h, int n);
extern void func_0DC5E0(int a);
extern void func_0D7250(void);

void func_0D7310(void *arg)
{
    struct Obj0D1A78 *o;
    struct Ent0D1A78 *e;
    int id;
    int eid;
    unsigned int kind;

    (void)arg;
    o = (struct Obj0D1A78 *)func_0DEAE0(D_00347318);
    if (o != 0) {
        func_0242F0(o->w24, -1);
        id = func_0D7010();
        e = func_0246B8(id);
        if (e != 0) {
            eid = e->w8;
            sprintf(D_0021DAB8, func_13E930(0x1F7), func_13E930(eid));
        }
        if (id != 0 && ((int (*)(int, int, int))func_024918)(o->w24, id, -1) == 0) {
            func_0DC800(3, D_0021DAB8, func_13E930(0x30B), func_13E930(0x218));
        } else {
            D_0021DBBC = 0;
        }
    }
    kind = func_0DC308();
    func_0242A8(o->w24, -1);
    func_0242F0(o->w24, -1);
    switch (kind) {
    case 1:
        func_0DC5E0(0);
        func_0D7250();
        break;
    case 2:
        func_0DC5E0(0);
        D_0021DBBC = 0;
        break;
    case 0:
        break;
    }
}
