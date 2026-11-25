/* LEVEL_17:0x0C06B0 -- placement copy of LEVEL_01_0D1A78.c: builds the status line for the current menu entry, then dispatches on the entry kind. */

struct Obj0D1A78 {
    char pad0[0x24];
    int w24;
};

struct Ent0D1A78 {
    char pad0[8];
    int w8;
};

extern int D_0026BE98[];
extern char D_001A5AA8[];
extern int D_001A5BAC;

extern int sprintf(char *dst, const char *fmt, ...);
extern int func_0C7E58(int *set);
extern char *func_021A90(unsigned int h, int n);
extern int func_0C03B0(void);
extern struct Ent0D1A78 *func_021D80(unsigned int id);
extern int func_021FE0(void *h, void *id, void *n);
extern char *func_10E8A8(int id);
extern void func_0C5B88(int a, char *s, char *t, char *u);
extern unsigned int func_0C5690(void);
extern int func_021A48(int h, int n);
extern void func_0C5968(int a);
extern void func_0C05F0(void);

void func_0C06B0(void *arg)
{
    struct Obj0D1A78 *o;
    struct Ent0D1A78 *e;
    int id;
    int eid;
    unsigned int kind;

    (void)arg;
    o = (struct Obj0D1A78 *)func_0C7E58(D_0026BE98);
    if (o != 0) {
        func_021A90(o->w24, -1);
        id = func_0C03B0();
        e = func_021D80(id);
        if (e != 0) {
            eid = e->w8;
            sprintf(D_001A5AA8, func_10E8A8(0x1F7), func_10E8A8(eid));
        }
        if (id != 0 && ((int (*)(int, int, int))func_021FE0)(o->w24, id, -1) == 0) {
            func_0C5B88(3, D_001A5AA8, func_10E8A8(0x30B), func_10E8A8(0x218));
        } else {
            D_001A5BAC = 0;
        }
    }
    kind = func_0C5690();
    func_021A48(o->w24, -1);
    func_021A90(o->w24, -1);
    switch (kind) {
    case 1:
        func_0C5968(0);
        func_0C05F0();
        break;
    case 2:
        func_0C5968(0);
        D_001A5BAC = 0;
        break;
    case 0:
        break;
    }
}
