/* LEVEL_23:0x0C6640 -- placement copy of LEVEL_01_0CF810.c: builds the status line text for the current menu entry, shows it, then dispatches on the entry kind to reset the matching state. */

struct Obj0CF810 {
    char pad0[0x14];
    int w14;
};

struct Ent0CF810 {
    char pad0[0x10];
    int w10;
};

extern int D_002FDDE0[];
extern char D_002025C0[];
extern char D_001D68A8[];
extern int D_001D79A8;

extern int sprintf(char *dst, const char *fmt, ...);
extern int func_0CF228(int *set);
extern struct Ent0CF810 *func_022710(int h, int n);
extern int func_0226C8(int h, int n);
extern int func_0C62F0(struct Obj0CF810 *o);
extern void func_021FB0(char *a, char *buf, int h, int n, int m);
extern char *func_123C28(int id);
extern void func_0CDD80(int a, char *s, char *t, char *u);
extern unsigned int func_0CD888(void);
extern void func_0CDB60(int a);
extern void func_0C6470(void);

void func_0C6640(void)
{
    char buf[256];
    struct Obj0CF810 *o;
    struct Ent0CF810 *e;
    unsigned int kind;
    int id;

    o = (struct Obj0CF810 *)func_0CF228(D_002FDDE0);
    if (o != 0) {
        e = func_022710(o->w14, -1);
        if (e != 0) {
            if (func_0C62F0(o) != 0) {
                func_021FB0(D_002025C0, buf, o->w14, 4, 0xFF);
                sprintf(D_001D68A8, func_123C28(0x1F7), buf);
            } else {
                id = e->w10;
                sprintf(D_001D68A8, func_123C28(0x1F7), func_123C28(id));
            }
        }
        func_0CDD80(3, D_001D68A8, func_123C28(0x30B), func_123C28(0x218));
    }
    kind = func_0CD888();
    func_0226C8(o->w14, -1);
    func_022710(o->w14, -1);
    switch (kind) {
    case 1:
        func_0CDB60(0);
        func_0C6470();
        break;
    case 2:
        func_0CDB60(0);
        D_001D79A8 = 0;
        break;
    case 0:
        break;
    }
}
