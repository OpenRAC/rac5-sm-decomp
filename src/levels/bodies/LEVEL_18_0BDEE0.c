/* LEVEL_18:0x0BDEE0 -- placement copy of LEVEL_16_0BEF08.c: builds the status line text for the current menu entry, shows it, then dispatches on the entry kind to reset the matching state. */

struct Obj0BEF08 {
    char pad0[0x14];
    int w14;
};

struct Ent0BEF08 {
    char pad0[0x10];
    int w10;
};

extern char D_0027ADA0[];
extern char D_001E4410[];
extern char D_001B27D8[];
extern int D_001B38D8;

extern int sprintf(char *dst, const char *fmt, ...);
extern struct Obj0BEF08 *func_0C6AC8(char *p);
extern struct Ent0BEF08 *func_021758(int h, int n);
extern int func_021710(int h, int n);
extern int func_0BDB90(struct Obj0BEF08 *o);
extern void func_020DA0(char *a, char *buf, int h, int n, int m);
extern char *func_10DFE0(int id);
extern void func_0C5620(int a, char *s, char *t, char *u);
extern unsigned int func_0C5128(void);
extern void func_0C5400(int a);
extern void func_0BDD10(void);

void func_0BDEE0(void)
{
    char buf[256];
    struct Obj0BEF08 *o;
    struct Ent0BEF08 *e;
    unsigned int kind;
    int id;

    o = func_0C6AC8(D_0027ADA0);
    if (o != 0) {
        e = func_021758(o->w14, -1);
        if (e != 0) {
            if (func_0BDB90(o) != 0) {
                func_020DA0(D_001E4410, buf, o->w14, 3, 0xFF);
                sprintf(D_001B27D8, func_10DFE0(0x1F7), buf);
            } else {
                id = e->w10;
                sprintf(D_001B27D8, func_10DFE0(0x1F7), func_10DFE0(id));
            }
        }
        func_0C5620(3, D_001B27D8, func_10DFE0(0x30B), func_10DFE0(0x218));
    }
    kind = func_0C5128();
    func_021710(o->w14, -1);
    func_021758(o->w14, -1);
    switch (kind) {
    case 1:
        func_0C5400(0);
        func_0BDD10();
        break;
    case 2:
        func_0C5400(0);
        D_001B38D8 = 0;
        break;
    case 0:
        break;
    }
}
