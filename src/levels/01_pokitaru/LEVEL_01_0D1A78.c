/* LEVEL_01:0x0D1A78 -- builds the status line for the current menu entry, then dispatches on the entry kind. */

struct Obj0D1A78 {
    char pad0[0x24];
    int w24;
};

struct Ent0D1A78 {
    char pad0[8];
    int w8;
};

extern int D_0032CB18[];
extern char D_002045F8[];
extern int D_002046FC;

extern int sprintf(char *dst, const char *fmt, ...);
extern int func_0D9220(int *set);
extern char *func_024670(unsigned int h, int n);
extern int func_0D1778(void);
extern struct Ent0D1A78 *func_024A38(unsigned int id);
extern int func_024C98(void *h, void *id, void *n);
extern char *func_1324B0(int id);
extern void func_0D6F50(int a, char *s, char *t, char *u);
extern unsigned int func_0D6A58(void);
extern int func_024628(int h, int n);
extern void func_0D6D30(int a);
extern void func_0D19B8(void);

void func_0D1A78(void *arg)
{
    struct Obj0D1A78 *o;
    struct Ent0D1A78 *e;
    int id;
    int eid;
    unsigned int kind;

    (void)arg;
    o = (struct Obj0D1A78 *)func_0D9220(D_0032CB18);
    if (o != 0) {
        func_024670(o->w24, -1);
        id = func_0D1778();
        e = func_024A38(id);
        if (e != 0) {
            eid = e->w8;
            sprintf(D_002045F8, func_1324B0(0x1F7), func_1324B0(eid));
        }
        if (id != 0 && ((int (*)(int, int, int))func_024C98)(o->w24, id, -1) == 0) {
            func_0D6F50(3, D_002045F8, func_1324B0(0x30B), func_1324B0(0x218));
        } else {
            D_002046FC = 0;
        }
    }
    kind = func_0D6A58();
    func_024628(o->w24, -1);
    func_024670(o->w24, -1);
    switch (kind) {
    case 1:
        func_0D6D30(0);
        func_0D19B8();
        break;
    case 2:
        func_0D6D30(0);
        D_002046FC = 0;
        break;
    case 0:
        break;
    }
}
