/* LEVEL_04:0x0D50A8 -- placement copy of LEVEL_01_0CF810.c: builds the status line text for the current menu entry, shows it, then dispatches on the entry kind to reset the matching state. */

struct Obj0CF810 {
    char pad0[0x14];
    int w14;
};

struct Ent0CF810 {
    char pad0[0x10];
    int w10;
};

extern int D_003471A0[];
extern char D_0024F950[];
extern char D_0021C968[];
extern int D_0021DA68;

extern int sprintf(char *dst, const char *fmt, ...);
extern int func_0DDCB8(int *set);
extern struct Ent0CF810 *func_0242F0(int h, int n);
extern int func_0242A8(int h, int n);
extern int func_0D4D58(struct Obj0CF810 *o);
extern void func_023A88(char *a, char *buf, int h, int n, int m);
extern char *func_13E930(int id);
extern void func_0DC800(int a, char *s, char *t, char *u);
extern unsigned int func_0DC308(void);
extern void func_0DC5E0(int a);
extern void func_0D4ED8(void);

void func_0D50A8(void)
{
    char buf[256];
    struct Obj0CF810 *o;
    struct Ent0CF810 *e;
    unsigned int kind;
    int id;

    o = (struct Obj0CF810 *)func_0DDCB8(D_003471A0);
    if (o != 0) {
        e = func_0242F0(o->w14, -1);
        if (e != 0) {
            if (func_0D4D58(o) != 0) {
                func_023A88(D_0024F950, buf, o->w14, 4, 0xFF);
                sprintf(D_0021C968, func_13E930(0x1F7), buf);
            } else {
                id = e->w10;
                sprintf(D_0021C968, func_13E930(0x1F7), func_13E930(id));
            }
        }
        func_0DC800(3, D_0021C968, func_13E930(0x30B), func_13E930(0x218));
    }
    kind = func_0DC308();
    func_0242A8(o->w14, -1);
    func_0242F0(o->w14, -1);
    switch (kind) {
    case 1:
        func_0DC5E0(0);
        func_0D4ED8();
        break;
    case 2:
        func_0DC5E0(0);
        D_0021DA68 = 0;
        break;
    case 0:
        break;
    }
}
