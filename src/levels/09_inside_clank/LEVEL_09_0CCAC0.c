/* LEVEL_09:0x0CCAC0 -- placement copy of LEVEL_01_0CF810.c: builds the status line text for the current menu entry, shows it, then dispatches on the entry kind to reset the matching state. */

struct Obj0CF810 {
    char pad0[0x14];
    int w14;
};

struct Ent0CF810 {
    char pad0[0x10];
    int w10;
};

extern int D_00314120[];
extern char D_0021C8C0[];
extern char D_001ED2A8[];
extern int D_001EE3A8;

extern int sprintf(char *dst, const char *fmt, ...);
extern int func_0D56A8(int *set);
extern struct Ent0CF810 *func_023968(int h, int n);
extern int func_023920(int h, int n);
extern int func_0CC770(struct Obj0CF810 *o);
extern void func_022F98(char *a, char *buf, int h, int n, int m);
extern char *func_12B448(int id);
extern void func_0D4200(int a, char *s, char *t, char *u);
extern unsigned int func_0D3D08(void);
extern void func_0D3FE0(int a);
extern void func_0CC8F0(void);

void func_0CCAC0(void)
{
    char buf[256];
    struct Obj0CF810 *o;
    struct Ent0CF810 *e;
    unsigned int kind;
    int id;

    o = (struct Obj0CF810 *)func_0D56A8(D_00314120);
    if (o != 0) {
        e = func_023968(o->w14, -1);
        if (e != 0) {
            if (func_0CC770(o) != 0) {
                func_022F98(D_0021C8C0, buf, o->w14, 4, 0xFF);
                sprintf(D_001ED2A8, func_12B448(0x1F7), buf);
            } else {
                id = e->w10;
                sprintf(D_001ED2A8, func_12B448(0x1F7), func_12B448(id));
            }
        }
        func_0D4200(3, D_001ED2A8, func_12B448(0x30B), func_12B448(0x218));
    }
    kind = func_0D3D08();
    func_023920(o->w14, -1);
    func_023968(o->w14, -1);
    switch (kind) {
    case 1:
        func_0D3FE0(0);
        func_0CC8F0();
        break;
    case 2:
        func_0D3FE0(0);
        D_001EE3A8 = 0;
        break;
    case 0:
        break;
    }
}
