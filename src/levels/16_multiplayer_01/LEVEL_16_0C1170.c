/* LEVEL_16:0x0C1170 -- placement copy of LEVEL_01_0D1A78.c: builds the status line for the current menu entry, then dispatches on the entry kind. */

struct Obj0D1A78 {
    char pad0[0x24];
    int w24;
};

struct Ent0D1A78 {
    char pad0[8];
    int w8;
};

extern int D_0027AB98[];
extern char D_001B24A8[];
extern int D_001B25AC;

extern int sprintf(char *dst, const char *fmt, ...);
extern int func_0C8918(int *set);
extern char *func_022110(unsigned int h, int n);
extern int func_0C0E70(void);
extern struct Ent0D1A78 *func_022400(unsigned int id);
extern int func_022660(void *h, void *id, void *n);
extern char *func_10F330(int id);
extern void func_0C6648(int a, char *s, char *t, char *u);
extern unsigned int func_0C6150(void);
extern int func_0220C8(int h, int n);
extern void func_0C6428(int a);
extern void func_0C10B0(void);

void func_0C1170(void *arg)
{
    struct Obj0D1A78 *o;
    struct Ent0D1A78 *e;
    int id;
    int eid;
    unsigned int kind;

    (void)arg;
    o = (struct Obj0D1A78 *)func_0C8918(D_0027AB98);
    if (o != 0) {
        func_022110(o->w24, -1);
        id = func_0C0E70();
        e = func_022400(id);
        if (e != 0) {
            eid = e->w8;
            sprintf(D_001B24A8, func_10F330(0x1F7), func_10F330(eid));
        }
        if (id != 0 && ((int (*)(int, int, int))func_022660)(o->w24, id, -1) == 0) {
            func_0C6648(3, D_001B24A8, func_10F330(0x30B), func_10F330(0x218));
        } else {
            D_001B25AC = 0;
        }
    }
    kind = func_0C6150();
    func_0220C8(o->w24, -1);
    func_022110(o->w24, -1);
    switch (kind) {
    case 1:
        func_0C6428(0);
        func_0C10B0();
        break;
    case 2:
        func_0C6428(0);
        D_001B25AC = 0;
        break;
    case 0:
        break;
    }
}
