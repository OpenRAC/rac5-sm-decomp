/* LEVEL_22:0x0C2A90 -- placement copy of LEVEL_01_0D4550.c: caches the selected entry's data in a global record, then dispatches on the current state flags and reports the entry's value. */

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

extern struct Cache D_00282978;
extern struct Mgr D_00282998;
extern int D_00163DF4;

extern struct Ent *func_0A88B0(struct Mgr *m);
extern int func_10D298(void *h);
extern int func_10D2A8(void *h);
extern unsigned int func_10D290(void *h);
extern void func_10D278(void *h, unsigned int n, int *out);
extern unsigned int func_079438(int id);
extern int func_0AAFD0(void);
extern void func_016E40(int a, int b);
extern int func_0A4570(int a);
extern void func_10D2B0(void *h, unsigned int n);
extern int func_10D2B8(void *h);
extern void func_10D318(int a, unsigned char b, unsigned char c);
extern int func_0A7B50(struct Mgr *m, unsigned int flags);
extern int func_10D280(void *h, unsigned int n);
extern int func_10B540(int a, int b);

void func_0C2A90(void)
{
    struct Ent *e;
    unsigned int flags;

    e = func_0A88B0(&D_00282998);
    if (e != 0 && e->p_D4 != 0) {
        D_00282978.w_00 = func_10D298(e->p_D4);
        D_00282978.w_04 = func_10D2A8(e->p_D4);
        D_00282978.w_08 = e->w_DC;
        D_00282978.b_1C = e->w_D0 >= func_10D290(e->p_D4);
        func_10D278(e->p_D4, e->w_D0, D_00282978.w_0C);
    }
    flags = func_079438(0x6B10);
    if (flags & 8) {
        func_016E40(4, 0);
    } else if (flags & 0x1000) {
        if (func_0AAFD0() == 0) {
            func_016E40(4, 0);
        }
    } else if (flags & 0x4000) {
        if (e != 0 && e->p_D4 != 0 && e->w_D8 != 0) {
            func_0A4570(1);
            func_016E40(4, 0);
            func_10D2B0(e->p_D4, e->w_D0);
            func_10D318(D_00163DF4, func_10D2B8(e->p_D4), e->w_D0);
        }
    } else {
        func_0A7B50(&D_00282998, flags);
    }
    func_10B540(0, e != 0 ? func_10D280(e->p_D4, e->w_D0) : 0);
    func_10B540(1, 0x1F);
}
