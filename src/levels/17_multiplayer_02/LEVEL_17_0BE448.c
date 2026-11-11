/* LEVEL_17:0x0BE448 -- placement copy of LEVEL_16_0BEF08.c: builds the status line text for the current menu entry, shows it, then dispatches on the entry kind to reset the matching state. */

struct Obj0BEF08 {
    char pad0[0x14];
    int w14;
};

struct Ent0BEF08 {
    char pad0[0x10];
    int w10;
};

extern char D_0026BD20[];
extern char D_001D5390[];
extern char D_001A4958[];
extern int D_001A5A58;

extern int sprintf(char *dst, const char *fmt, ...);
extern struct Obj0BEF08 *func_0C7030(char *p);
extern struct Ent0BEF08 *func_021A90(int h, int n);
extern int func_021A48(int h, int n);
extern int func_0BE0F8(struct Obj0BEF08 *o);
extern void func_0210D8(char *a, char *buf, int h, int n, int m);
extern char *func_10E8A8(int id);
extern void func_0C5B88(int a, char *s, char *t, char *u);
extern unsigned int func_0C5690(void);
extern void func_0C5968(int a);
extern void func_0BE278(void);

void func_0BE448(void)
{
    char buf[256];
    struct Obj0BEF08 *o;
    struct Ent0BEF08 *e;
    unsigned int kind;
    int id;

    o = func_0C7030(D_0026BD20);
    if (o != 0) {
        e = func_021A90(o->w14, -1);
        if (e != 0) {
            if (func_0BE0F8(o) != 0) {
                func_0210D8(D_001D5390, buf, o->w14, 3, 0xFF);
                sprintf(D_001A4958, func_10E8A8(0x1F7), buf);
            } else {
                id = e->w10;
                sprintf(D_001A4958, func_10E8A8(0x1F7), func_10E8A8(id));
            }
        }
        func_0C5B88(3, D_001A4958, func_10E8A8(0x30B), func_10E8A8(0x218));
    }
    kind = func_0C5690();
    func_021A48(o->w14, -1);
    func_021A90(o->w14, -1);
    switch (kind) {
    case 1:
        func_0C5968(0);
        func_0BE278();
        break;
    case 2:
        func_0C5968(0);
        D_001A5A58 = 0;
        break;
    case 0:
        break;
    }
}
