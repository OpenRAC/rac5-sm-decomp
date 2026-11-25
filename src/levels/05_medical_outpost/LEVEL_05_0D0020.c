/* LEVEL_05:0x0D0020 -- placement copy of LEVEL_01_0D1A78.c: builds the status line for the current menu entry, then dispatches on the entry kind. */

struct Obj0D1A78 {
    char pad0[0x24];
    int w24;
};

struct Ent0D1A78 {
    char pad0[8];
    int w8;
};

extern int D_003189D8[];
extern char D_001F3978[];
extern int D_001F3A7C;

extern int sprintf(char *dst, const char *fmt, ...);
extern int func_0D77C8(int *set);
extern char *func_023608(unsigned int h, int n);
extern int func_0CFD20(void);
extern struct Ent0D1A78 *func_0239D0(unsigned int id);
extern int func_023C30(void *h, void *id, void *n);
extern char *func_12DE28(int id);
extern void func_0D54F8(int a, char *s, char *t, char *u);
extern unsigned int func_0D5000(void);
extern int func_0235C0(int h, int n);
extern void func_0D52D8(int a);
extern void func_0CFF60(void);

void func_0D0020(void *arg)
{
    struct Obj0D1A78 *o;
    struct Ent0D1A78 *e;
    int id;
    int eid;
    unsigned int kind;

    (void)arg;
    o = (struct Obj0D1A78 *)func_0D77C8(D_003189D8);
    if (o != 0) {
        func_023608(o->w24, -1);
        id = func_0CFD20();
        e = func_0239D0(id);
        if (e != 0) {
            eid = e->w8;
            sprintf(D_001F3978, func_12DE28(0x1F7), func_12DE28(eid));
        }
        if (id != 0 && ((int (*)(int, int, int))func_023C30)(o->w24, id, -1) == 0) {
            func_0D54F8(3, D_001F3978, func_12DE28(0x30B), func_12DE28(0x218));
        } else {
            D_001F3A7C = 0;
        }
    }
    kind = func_0D5000();
    func_0235C0(o->w24, -1);
    func_023608(o->w24, -1);
    switch (kind) {
    case 1:
        func_0D52D8(0);
        func_0CFF60();
        break;
    case 2:
        func_0D52D8(0);
        D_001F3A7C = 0;
        break;
    case 0:
        break;
    }
}
