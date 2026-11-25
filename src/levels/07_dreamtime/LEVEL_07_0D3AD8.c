/* LEVEL_07:0x0D3AD8 -- placement copy of LEVEL_01_0D1A78.c: builds the status line for the current menu entry, then dispatches on the entry kind. */

struct Obj0D1A78 {
    char pad0[0x24];
    int w24;
};

struct Ent0D1A78 {
    char pad0[8];
    int w8;
};

extern int D_00342418[];
extern char D_002188F8[];
extern int D_002189FC;

extern int sprintf(char *dst, const char *fmt, ...);
extern int func_0DB280(int *set);
extern char *func_024C38(unsigned int h, int n);
extern int func_0D37D8(void);
extern struct Ent0D1A78 *func_025000(unsigned int id);
extern int func_025260(void *h, void *id, void *n);
extern char *func_1354B0(int id);
extern void func_0D8FB0(int a, char *s, char *t, char *u);
extern unsigned int func_0D8AB8(void);
extern int func_024BF0(int h, int n);
extern void func_0D8D90(int a);
extern void func_0D3A18(void);

void func_0D3AD8(void *arg)
{
    struct Obj0D1A78 *o;
    struct Ent0D1A78 *e;
    int id;
    int eid;
    unsigned int kind;

    (void)arg;
    o = (struct Obj0D1A78 *)func_0DB280(D_00342418);
    if (o != 0) {
        func_024C38(o->w24, -1);
        id = func_0D37D8();
        e = func_025000(id);
        if (e != 0) {
            eid = e->w8;
            sprintf(D_002188F8, func_1354B0(0x1F7), func_1354B0(eid));
        }
        if (id != 0 && ((int (*)(int, int, int))func_025260)(o->w24, id, -1) == 0) {
            func_0D8FB0(3, D_002188F8, func_1354B0(0x30B), func_1354B0(0x218));
        } else {
            D_002189FC = 0;
        }
    }
    kind = func_0D8AB8();
    func_024BF0(o->w24, -1);
    func_024C38(o->w24, -1);
    switch (kind) {
    case 1:
        func_0D8D90(0);
        func_0D3A18();
        break;
    case 2:
        func_0D8D90(0);
        D_002189FC = 0;
        break;
    case 0:
        break;
    }
}
