/* LEVEL_23:0x0CB380 -- placement copy of LEVEL_01_0D4550.c: caches the selected entry's data in a global record, then dispatches on the current state flags and reports the entry's value. */

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

extern struct Cache D_002FE1F8;
extern struct Mgr D_002FE218;
extern int D_001D7E74;

extern struct Ent *func_0B11A0(struct Mgr *m);
extern int func_127538(void *h);
extern int func_127548(void *h);
extern unsigned int func_127530(void *h);
extern void func_127518(void *h, unsigned int n, int *out);
extern unsigned int func_07DEE0(int id);
extern int func_0B38C0(void);
extern void func_019338(int a, int b);
extern int func_0ACDE8(int a);
extern void func_127550(void *h, unsigned int n);
extern int func_127558(void *h);
extern void func_1275C8(int a, unsigned char b, unsigned char c);
extern int func_0B0440(struct Mgr *m, unsigned int flags);
extern int func_127520(void *h, unsigned int n);
extern int func_1257E8(int a, int b);

void func_0CB380(void)
{
    struct Ent *e;
    unsigned int flags;

    e = func_0B11A0(&D_002FE218);
    if (e != 0 && e->p_D4 != 0) {
        D_002FE1F8.w_00 = func_127538(e->p_D4);
        D_002FE1F8.w_04 = func_127548(e->p_D4);
        D_002FE1F8.w_08 = e->w_DC;
        D_002FE1F8.b_1C = e->w_D0 >= func_127530(e->p_D4);
        func_127518(e->p_D4, e->w_D0, D_002FE1F8.w_0C);
    }
    flags = func_07DEE0(0x6B10);
    if (flags & 8) {
        func_019338(4, 0);
    } else if (flags & 0x1000) {
        if (func_0B38C0() == 0) {
            func_019338(4, 0);
        }
    } else if (flags & 0x4000) {
        if (e != 0 && e->p_D4 != 0 && e->w_D8 != 0) {
            func_0ACDE8(1);
            func_019338(4, 0);
            func_127550(e->p_D4, e->w_D0);
            func_1275C8(D_001D7E74, func_127558(e->p_D4), e->w_D0);
        }
    } else {
        func_0B0440(&D_002FE218, flags);
    }
    func_1257E8(0, e != 0 ? func_127520(e->p_D4, e->w_D0) : 0);
    func_1257E8(1, 0x1F);
}
