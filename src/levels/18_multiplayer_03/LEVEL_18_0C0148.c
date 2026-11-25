/* LEVEL_18:0x0C0148 -- placement copy of LEVEL_01_0D1A78.c: builds the status line for the current menu entry, then dispatches on the entry kind. */

struct Obj0D1A78 {
    char pad0[0x24];
    int w24;
};

struct Ent0D1A78 {
    char pad0[8];
    int w8;
};

extern int D_0027AF18[];
extern char D_001B3928[];
extern int D_001B3A2C;

extern int sprintf(char *dst, const char *fmt, ...);
extern int func_0C78F0(int *set);
extern char *func_021758(unsigned int h, int n);
extern int func_0BFE48(void);
extern struct Ent0D1A78 *func_021A48(unsigned int id);
extern int func_021CA8(void *h, void *id, void *n);
extern char *func_10DFE0(int id);
extern void func_0C5620(int a, char *s, char *t, char *u);
extern unsigned int func_0C5128(void);
extern int func_021710(int h, int n);
extern void func_0C5400(int a);
extern void func_0C0088(void);

void func_0C0148(void *arg)
{
    struct Obj0D1A78 *o;
    struct Ent0D1A78 *e;
    int id;
    int eid;
    unsigned int kind;

    (void)arg;
    o = (struct Obj0D1A78 *)func_0C78F0(D_0027AF18);
    if (o != 0) {
        func_021758(o->w24, -1);
        id = func_0BFE48();
        e = func_021A48(id);
        if (e != 0) {
            eid = e->w8;
            sprintf(D_001B3928, func_10DFE0(0x1F7), func_10DFE0(eid));
        }
        if (id != 0 && ((int (*)(int, int, int))func_021CA8)(o->w24, id, -1) == 0) {
            func_0C5620(3, D_001B3928, func_10DFE0(0x30B), func_10DFE0(0x218));
        } else {
            D_001B3A2C = 0;
        }
    }
    kind = func_0C5128();
    func_021710(o->w24, -1);
    func_021758(o->w24, -1);
    switch (kind) {
    case 1:
        func_0C5400(0);
        func_0C0088();
        break;
    case 2:
        func_0C5400(0);
        D_001B3A2C = 0;
        break;
    case 0:
        break;
    }
}
