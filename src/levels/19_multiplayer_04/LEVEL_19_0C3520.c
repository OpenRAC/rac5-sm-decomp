/* LEVEL_19:0x0C3520 -- placement copy of LEVEL_01_0D4550.c: caches the selected entry's data in a global record, then dispatches on the current state flags and reports the entry's value. */

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

extern struct Cache D_0027AFB8;
extern struct Mgr D_0027AFD8;
extern int D_001B3AA4;

extern struct Ent *func_0A8D30(struct Mgr *m);
extern int func_126198(void *h);
extern int func_1261A8(void *h);
extern unsigned int func_126190(void *h);
extern void func_126178(void *h, unsigned int n, int *out);
extern unsigned int func_079AA0(int id);
extern int func_0AB880(void);
extern void func_018898(int a, int b);
extern int func_0A4928(int a);
extern void func_1261B0(void *h, unsigned int n);
extern int func_1261B8(void *h);
extern void func_126210(int a, unsigned char b, unsigned char c);
extern int func_0A7FD0(struct Mgr *m, unsigned int flags);
extern int func_126180(void *h, unsigned int n);
extern int func_111480(int a, int b);

void func_0C3520(void)
{
    struct Ent *e;
    unsigned int flags;

    e = func_0A8D30(&D_0027AFD8);
    if (e != 0 && e->p_D4 != 0) {
        D_0027AFB8.w_00 = func_126198(e->p_D4);
        D_0027AFB8.w_04 = func_1261A8(e->p_D4);
        D_0027AFB8.w_08 = e->w_DC;
        D_0027AFB8.b_1C = e->w_D0 >= func_126190(e->p_D4);
        func_126178(e->p_D4, e->w_D0, D_0027AFB8.w_0C);
    }
    flags = func_079AA0(0x6B10);
    if (flags & 8) {
        func_018898(4, 0);
    } else if (flags & 0x1000) {
        if (func_0AB880() == 0) {
            func_018898(4, 0);
        }
    } else if (flags & 0x4000) {
        if (e != 0 && e->p_D4 != 0 && e->w_D8 != 0) {
            func_0A4928(1);
            func_018898(4, 0);
            func_1261B0(e->p_D4, e->w_D0);
            func_126210(D_001B3AA4, func_1261B8(e->p_D4), e->w_D0);
        }
    } else {
        func_0A7FD0(&D_0027AFD8, flags);
    }
    func_111480(0, e != 0 ? func_126180(e->p_D4, e->w_D0) : 0);
    func_111480(1, 0x1F);
}
