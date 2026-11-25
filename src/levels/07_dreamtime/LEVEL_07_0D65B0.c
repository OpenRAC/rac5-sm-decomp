/* LEVEL_07:0x0D65B0 -- placement copy of LEVEL_01_0D4550.c: caches the selected entry's data in a global record, then dispatches on the current state flags and reports the entry's value. */

struct Ent {
    char pad_00[0xD0];
    unsigned int w_D0;
    void *p_D4;
    int w_D8;
    int w_DC;
};

struct Mgr {
    char pad_00[0x20];
};

struct Cache {
    int w_00;
    int w_04;
    int w_08;
    int w_0C[4];
    unsigned char b_1C;
    char pad_1D[3];
};

extern struct Cache D_003426B8;
extern struct Mgr D_003426D8;
extern int D_00218D74;

extern struct Ent *func_0BC468(struct Mgr *m);
extern int func_138DC0(void *h);
extern int func_138DD0(void *h);
extern unsigned int func_138DB8(void *h);
extern void func_138DA0(void *h, unsigned int n, int *out);
extern unsigned int func_08A0F0(int id);
extern int func_0BEB80(void);
extern void func_01AEE8(int a, int b);
extern int func_0B8080(int a);
extern void func_138DD8(void *h, unsigned int n);
extern int func_138DE0(void *h);
extern void func_138E38(int a, unsigned char b, unsigned char c);
extern int func_0BB708(struct Mgr *m, unsigned int flags);
extern int func_138DA8(void *h, unsigned int n);
extern int func_137070(int a, int b);

void func_0D65B0(void)
{
    struct Ent *e;
    unsigned int flags;

    e = func_0BC468(&D_003426D8);
    if (e != 0 && e->p_D4 != 0) {
        D_003426B8.w_00 = func_138DC0(e->p_D4);
        D_003426B8.w_04 = func_138DD0(e->p_D4);
        D_003426B8.w_08 = e->w_DC;
        D_003426B8.b_1C = e->w_D0 >= func_138DB8(e->p_D4);
        func_138DA0(e->p_D4, e->w_D0, D_003426B8.w_0C);
    }
    flags = func_08A0F0(0x6B10);
    if (flags & 8) {
        func_01AEE8(4, 0);
    } else if (flags & 0x1000) {
        if (func_0BEB80() == 0) {
            func_01AEE8(4, 0);
        }
    } else if (flags & 0x4000) {
        if (e != 0 && e->p_D4 != 0 && e->w_D8 != 0) {
            func_0B8080(1);
            func_01AEE8(4, 0);
            func_138DD8(e->p_D4, e->w_D0);
            func_138E38(D_00218D74, func_138DE0(e->p_D4), e->w_D0);
        }
    } else {
        func_0BB708(&D_003426D8, flags);
    }
    func_137070(0, e != 0 ? func_138DA8(e->p_D4, e->w_D0) : 0);
    func_137070(1, 0x1F);
}
