/* LEVEL_06:0x0CC378 -- placement copy of LEVEL_01_0D1A78.c: builds the status line for the current menu entry, then dispatches on the entry kind. */

struct Obj0D1A78 {
    char pad0[0x24];
    int w24;
};

struct Ent0D1A78 {
    char pad0[8];
    int w8;
};

extern int D_00319898[];
extern char D_001F34F8[];
extern int D_001F35FC;

extern int sprintf(char *dst, const char *fmt, ...);
extern int func_0D3B20(int *set);
extern char *func_022D78(unsigned int h, int n);
extern int func_0CC078(void);
extern struct Ent0D1A78 *func_023140(unsigned int id);
extern int func_0233A0(void *h, void *id, void *n);
extern char *func_128B80(int id);
extern void func_0D1850(int a, char *s, char *t, char *u);
extern unsigned int func_0D1358(void);
extern int func_022D30(int h, int n);
extern void func_0D1630(int a);
extern void func_0CC2B8(void);

void func_0CC378(void *arg)
{
    struct Obj0D1A78 *o;
    struct Ent0D1A78 *e;
    int id;
    int eid;
    unsigned int kind;

    (void)arg;
    o = (struct Obj0D1A78 *)func_0D3B20(D_00319898);
    if (o != 0) {
        func_022D78(o->w24, -1);
        id = func_0CC078();
        e = func_023140(id);
        if (e != 0) {
            eid = e->w8;
            sprintf(D_001F34F8, func_128B80(0x1F7), func_128B80(eid));
        }
        if (id != 0 && ((int (*)(int, int, int))func_0233A0)(o->w24, id, -1) == 0) {
            func_0D1850(3, D_001F34F8, func_128B80(0x30B), func_128B80(0x218));
        } else {
            D_001F35FC = 0;
        }
    }
    kind = func_0D1358();
    func_022D30(o->w24, -1);
    func_022D78(o->w24, -1);
    switch (kind) {
    case 1:
        func_0D1630(0);
        func_0CC2B8();
        break;
    case 2:
        func_0D1630(0);
        D_001F35FC = 0;
        break;
    case 0:
        break;
    }
}
