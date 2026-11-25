/* LEVEL_09:0x0CED28 -- placement copy of LEVEL_01_0D1A78.c: builds the status line for the current menu entry, then dispatches on the entry kind. */

struct Obj0D1A78 {
    char pad0[0x24];
    int w24;
};

struct Ent0D1A78 {
    char pad0[8];
    int w8;
};

extern int D_00314298[];
extern char D_001EE3F8[];
extern int D_001EE4FC;

extern int sprintf(char *dst, const char *fmt, ...);
extern int func_0D64D0(int *set);
extern char *func_023968(unsigned int h, int n);
extern int func_0CEA28(void);
extern struct Ent0D1A78 *func_023D30(unsigned int id);
extern int func_023F90(void *h, void *id, void *n);
extern char *func_12B448(int id);
extern void func_0D4200(int a, char *s, char *t, char *u);
extern unsigned int func_0D3D08(void);
extern int func_023920(int h, int n);
extern void func_0D3FE0(int a);
extern void func_0CEC68(void);

void func_0CED28(void *arg)
{
    struct Obj0D1A78 *o;
    struct Ent0D1A78 *e;
    int id;
    int eid;
    unsigned int kind;

    (void)arg;
    o = (struct Obj0D1A78 *)func_0D64D0(D_00314298);
    if (o != 0) {
        func_023968(o->w24, -1);
        id = func_0CEA28();
        e = func_023D30(id);
        if (e != 0) {
            eid = e->w8;
            sprintf(D_001EE3F8, func_12B448(0x1F7), func_12B448(eid));
        }
        if (id != 0 && ((int (*)(int, int, int))func_023F90)(o->w24, id, -1) == 0) {
            func_0D4200(3, D_001EE3F8, func_12B448(0x30B), func_12B448(0x218));
        } else {
            D_001EE4FC = 0;
        }
    }
    kind = func_0D3D08();
    func_023920(o->w24, -1);
    func_023968(o->w24, -1);
    switch (kind) {
    case 1:
        func_0D3FE0(0);
        func_0CEC68();
        break;
    case 2:
        func_0D3FE0(0);
        D_001EE4FC = 0;
        break;
    case 0:
        break;
    }
}
