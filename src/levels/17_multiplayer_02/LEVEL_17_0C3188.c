/* LEVEL_17:0x0C3188 -- placement copy of LEVEL_01_0D4550.c: caches the selected entry's data in a global record, then dispatches on the current state flags and reports the entry's value. */

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

extern struct Cache D_0026C138;
extern struct Mgr D_0026C158;
extern int D_001A5F24;

extern struct Ent *func_0A8998(struct Mgr *m);
extern int func_125258(void *h);
extern int func_125268(void *h);
extern unsigned int func_125250(void *h);
extern void func_125238(void *h, unsigned int n, int *out);
extern unsigned int func_07A030(int id);
extern int func_0AB4E8(void);
extern void func_018518(int a, int b);
extern int func_0A4590(int a);
extern void func_125270(void *h, unsigned int n);
extern int func_125278(void *h);
extern void func_1252E0(int a, unsigned char b, unsigned char c);
extern int func_0A7C38(struct Mgr *m, unsigned int flags);
extern int func_125240(void *h, unsigned int n);
extern int func_110358(int a, int b);

void func_0C3188(void)
{
    struct Ent *e;
    unsigned int flags;

    e = func_0A8998(&D_0026C158);
    if (e != 0 && e->p_D4 != 0) {
        D_0026C138.w_00 = func_125258(e->p_D4);
        D_0026C138.w_04 = func_125268(e->p_D4);
        D_0026C138.w_08 = e->w_DC;
        D_0026C138.b_1C = e->w_D0 >= func_125250(e->p_D4);
        func_125238(e->p_D4, e->w_D0, D_0026C138.w_0C);
    }
    flags = func_07A030(0x6B10);
    if (flags & 8) {
        func_018518(4, 0);
    } else if (flags & 0x1000) {
        if (func_0AB4E8() == 0) {
            func_018518(4, 0);
        }
    } else if (flags & 0x4000) {
        if (e != 0 && e->p_D4 != 0 && e->w_D8 != 0) {
            func_0A4590(1);
            func_018518(4, 0);
            func_125270(e->p_D4, e->w_D0);
            func_1252E0(D_001A5F24, func_125278(e->p_D4), e->w_D0);
        }
    } else {
        func_0A7C38(&D_0026C158, flags);
    }
    func_110358(0, e != 0 ? func_125240(e->p_D4, e->w_D0) : 0);
    func_110358(1, 0x1F);
}
