/* LEVEL_15:0x0AFE50 -- placement copy of LEVEL_01_0CF810.c: builds the status line text for the current menu entry, shows it, then dispatches on the entry kind to reset the matching state. */

struct Obj0CF810 {
    char pad0[0x14];
    int w14;
};

struct Ent0CF810 {
    char pad0[0x10];
    int w10;
};

extern int D_002441E0[];
extern char D_0017D2C0[];
extern char D_00158128[];
extern int D_00159228;

extern int sprintf(char *dst, const char *fmt, ...);
extern int func_0B8A38(int *set);
extern struct Ent0CF810 *func_01E9D8(int h, int n);
extern int func_01E990(int h, int n);
extern int func_0AFB00(struct Obj0CF810 *o);
extern void func_01E290(char *a, char *buf, int h, int n, int m);
extern char *func_0F1378(int id);
extern void func_0B7590(int a, char *s, char *t, char *u);
extern unsigned int func_0B7098(void);
extern void func_0B7370(int a);
extern void func_0AFC80(void);

void func_0AFE50(void)
{
    char buf[256];
    struct Obj0CF810 *o;
    struct Ent0CF810 *e;
    unsigned int kind;
    int id;

    o = (struct Obj0CF810 *)func_0B8A38(D_002441E0);
    if (o != 0) {
        e = func_01E9D8(o->w14, -1);
        if (e != 0) {
            if (func_0AFB00(o) != 0) {
                func_01E290(D_0017D2C0, buf, o->w14, 4, 0xFF);
                sprintf(D_00158128, func_0F1378(0x1F7), buf);
            } else {
                id = e->w10;
                sprintf(D_00158128, func_0F1378(0x1F7), func_0F1378(id));
            }
        }
        func_0B7590(3, D_00158128, func_0F1378(0x30B), func_0F1378(0x218));
    }
    kind = func_0B7098();
    func_01E990(o->w14, -1);
    func_01E9D8(o->w14, -1);
    switch (kind) {
    case 1:
        func_0B7370(0);
        func_0AFC80();
        break;
    case 2:
        func_0B7370(0);
        D_00159228 = 0;
        break;
    case 0:
        break;
    }
}
