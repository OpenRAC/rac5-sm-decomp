/* LEVEL_08:0x0DCA20 -- placement copy of LEVEL_01_0D1A78.c: builds the status line for the current menu entry, then dispatches on the entry kind. */

struct Obj0D1A78 {
    char pad0[0x24];
    int w24;
};

struct Ent0D1A78 {
    char pad0[8];
    int w8;
};

extern int D_0037BD98[];
extern char D_0024D4B8[];
extern int D_0024D5BC;

extern int sprintf(char *dst, const char *fmt, ...);
extern int func_0E41F0(int *set);
extern char *func_024EF0(unsigned int h, int n);
extern int func_0DC720(void);
extern struct Ent0D1A78 *func_0252B8(unsigned int id);
extern int func_025518(void *h, void *id, void *n);
extern char *func_1439E8(int id);
extern void func_0E1F10(int a, char *s, char *t, char *u);
extern unsigned int func_0E1A18(void);
extern int func_024EA8(int h, int n);
extern void func_0E1CF0(int a);
extern void func_0DC960(void);

void func_0DCA20(void *arg)
{
    struct Obj0D1A78 *o;
    struct Ent0D1A78 *e;
    int id;
    int eid;
    unsigned int kind;

    (void)arg;
    o = (struct Obj0D1A78 *)func_0E41F0(D_0037BD98);
    if (o != 0) {
        func_024EF0(o->w24, -1);
        id = func_0DC720();
        e = func_0252B8(id);
        if (e != 0) {
            eid = e->w8;
            sprintf(D_0024D4B8, func_1439E8(0x1F7), func_1439E8(eid));
        }
        if (id != 0 && ((int (*)(int, int, int))func_025518)(o->w24, id, -1) == 0) {
            func_0E1F10(3, D_0024D4B8, func_1439E8(0x30B), func_1439E8(0x218));
        } else {
            D_0024D5BC = 0;
        }
    }
    kind = func_0E1A18();
    func_024EA8(o->w24, -1);
    func_024EF0(o->w24, -1);
    switch (kind) {
    case 1:
        func_0E1CF0(0);
        func_0DC960();
        break;
    case 2:
        func_0E1CF0(0);
        D_0024D5BC = 0;
        break;
    case 0:
        break;
    }
}
