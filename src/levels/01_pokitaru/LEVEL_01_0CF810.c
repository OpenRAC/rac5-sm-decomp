/* LEVEL_01:0x0CF810 -- builds the status line text for the current menu entry, shows it, then dispatches on the entry kind to reset the matching state. */

struct Obj0CF810 {
    char pad0[0x14];
    int w14;
};

struct Ent0CF810 {
    char pad0[0x10];
    int w10;
};

extern int D_0032C9A0[];
extern char D_00235140[];
extern char D_002034A8[];
extern int D_002045A8;

extern int sprintf(char *dst, const char *fmt, ...);
extern int func_0D83F8(int *set);
extern struct Ent0CF810 *func_024670(int h, int n);
extern int func_024628(int h, int n);
extern int func_0CF4C0(struct Obj0CF810 *o);
extern void func_023E08(char *a, char *buf, int h, int n, int m);
extern char *func_1324B0(int id);
extern void func_0D6F50(int a, char *s, char *t, char *u);
extern unsigned int func_0D6A58(void);
extern void func_0D6D30(int a);
extern void func_0CF640(void);

void func_0CF810(void)
{
    char buf[256];
    struct Obj0CF810 *o;
    struct Ent0CF810 *e;
    unsigned int kind;
    int id;

    o = (struct Obj0CF810 *)func_0D83F8(D_0032C9A0);
    if (o != 0) {
        e = func_024670(o->w14, -1);
        if (e != 0) {
            if (func_0CF4C0(o) != 0) {
                func_023E08(D_00235140, buf, o->w14, 4, 0xFF);
                sprintf(D_002034A8, func_1324B0(0x1F7), buf);
            } else {
                id = e->w10;
                sprintf(D_002034A8, func_1324B0(0x1F7), func_1324B0(id));
            }
        }
        func_0D6F50(3, D_002034A8, func_1324B0(0x30B), func_1324B0(0x218));
    }
    kind = func_0D6A58();
    func_024628(o->w14, -1);
    func_024670(o->w14, -1);
    switch (kind) {
    case 1:
        func_0D6D30(0);
        func_0CF640();
        break;
    case 2:
        func_0D6D30(0);
        D_002045A8 = 0;
        break;
    case 0:
        break;
    }
}
