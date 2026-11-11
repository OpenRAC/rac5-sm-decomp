/* LEVEL_20:0x0A9438 -- placement copy of LEVEL_16_0BEF08.c: builds the status line text for the current menu entry, shows it, then dispatches on the entry kind to reset the matching state. */

struct Obj0BEF08 {
    char pad0[0x14];
    int w14;
};

struct Ent0BEF08 {
    char pad0[0x10];
    int w10;
};

extern char D_0019E260[];
extern char D_0013BA10[];
extern char D_00113A38[];
extern int D_00114B38;

extern int sprintf(char *dst, const char *fmt, ...);
extern struct Obj0BEF08 *func_0B2020(char *p);
extern struct Ent0BEF08 *func_01EE10(int h, int n);
extern int func_01EDC8(int h, int n);
extern int func_0A90E8(struct Obj0BEF08 *o);
extern void func_01E578(char *a, char *buf, int h, int n, int m);
extern char *func_0E2118(int id);
extern void func_0B0B78(int a, char *s, char *t, char *u);
extern unsigned int func_0B0680(void);
extern void func_0B0958(int a);
extern void func_0A9268(void);

void func_0A9438(void)
{
    char buf[256];
    struct Obj0BEF08 *o;
    struct Ent0BEF08 *e;
    unsigned int kind;
    int id;

    o = func_0B2020(D_0019E260);
    if (o != 0) {
        e = func_01EE10(o->w14, -1);
        if (e != 0) {
            if (func_0A90E8(o) != 0) {
                func_01E578(D_0013BA10, buf, o->w14, 3, 0xFF);
                sprintf(D_00113A38, func_0E2118(0x1F7), buf);
            } else {
                id = e->w10;
                sprintf(D_00113A38, func_0E2118(0x1F7), func_0E2118(id));
            }
        }
        func_0B0B78(3, D_00113A38, func_0E2118(0x30B), func_0E2118(0x218));
    }
    kind = func_0B0680();
    func_01EDC8(o->w14, -1);
    func_01EE10(o->w14, -1);
    switch (kind) {
    case 1:
        func_0B0958(0);
        func_0A9268();
        break;
    case 2:
        func_0B0958(0);
        D_00114B38 = 0;
        break;
    case 0:
        break;
    }
}
