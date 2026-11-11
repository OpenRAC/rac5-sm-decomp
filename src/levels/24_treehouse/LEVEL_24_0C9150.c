/* LEVEL_24:0x0C9150 -- placement copy of LEVEL_01_0CF810.c: builds the status line text for the current menu entry, shows it, then dispatches on the entry kind to reset the matching state. */

struct Obj0CF810 {
    char pad0[0x14];
    int w14;
};

struct Ent0CF810 {
    char pad0[0x10];
    int w10;
};

extern int D_002F8860[];
extern char D_00201040[];
extern char D_001D4128[];
extern int D_001D5228;

extern int sprintf(char *dst, const char *fmt, ...);
extern int func_0D1D60(int *set);
extern struct Ent0CF810 *func_022448(int h, int n);
extern int func_022400(int h, int n);
extern int func_0C8E00(struct Obj0CF810 *o);
extern void func_021B80(char *a, char *buf, int h, int n, int m);
extern char *func_127FB0(int id);
extern void func_0D08A8(int a, char *s, char *t, char *u);
extern unsigned int func_0D03B0(void);
extern void func_0D0688(int a);
extern void func_0C8F80(void);

void func_0C9150(void)
{
    char buf[256];
    struct Obj0CF810 *o;
    struct Ent0CF810 *e;
    unsigned int kind;
    int id;

    o = (struct Obj0CF810 *)func_0D1D60(D_002F8860);
    if (o != 0) {
        e = func_022448(o->w14, -1);
        if (e != 0) {
            if (func_0C8E00(o) != 0) {
                func_021B80(D_00201040, buf, o->w14, 4, 0xFF);
                sprintf(D_001D4128, func_127FB0(0x1F7), buf);
            } else {
                id = e->w10;
                sprintf(D_001D4128, func_127FB0(0x1F7), func_127FB0(id));
            }
        }
        func_0D08A8(3, D_001D4128, func_127FB0(0x30B), func_127FB0(0x218));
    }
    kind = func_0D03B0();
    func_022400(o->w14, -1);
    func_022448(o->w14, -1);
    switch (kind) {
    case 1:
        func_0D0688(0);
        func_0C8F80();
        break;
    case 2:
        func_0D0688(0);
        D_001D5228 = 0;
        break;
    case 0:
        break;
    }
}
