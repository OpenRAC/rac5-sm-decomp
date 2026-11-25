/* LEVEL_08:0x0DF508 -- placement copy of LEVEL_01_0D4550.c: caches the selected entry's data in a global record, then dispatches on the current state flags and reports the entry's value. */

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

extern struct Cache D_0037C038;
extern struct Mgr D_0037C058;
extern int D_0024D934;

extern struct Ent *func_0C52F8(struct Mgr *m);
extern int func_1548A0(void *h);
extern int func_154848(void *h);
extern unsigned int func_154790(void *h);
extern void func_153E58(void *h, unsigned int n, int *out);
extern unsigned int func_090070(int id);
extern int func_0C7A48(void);
extern void func_01B1A0(int a, int b);
extern int func_0C0F10(int a);
extern void func_1548D8(void *h, unsigned int n);
extern int func_154970(void *h);
extern void func_16C290(int a, unsigned char b, unsigned char c);
extern int func_0C4598(struct Mgr *m, unsigned int flags);
extern int func_153F38(void *h, unsigned int n);
extern int func_1455A8(int a, int b);

void func_0DF508(void)
{
    struct Ent *e;
    unsigned int flags;

    e = func_0C52F8(&D_0037C058);
    if (e != 0 && e->p_D4 != 0) {
        D_0037C038.w_00 = func_1548A0(e->p_D4);
        D_0037C038.w_04 = func_154848(e->p_D4);
        D_0037C038.w_08 = e->w_DC;
        D_0037C038.b_1C = e->w_D0 >= func_154790(e->p_D4);
        func_153E58(e->p_D4, e->w_D0, D_0037C038.w_0C);
    }
    flags = func_090070(0x6B10);
    if (flags & 8) {
        func_01B1A0(4, 0);
    } else if (flags & 0x1000) {
        if (func_0C7A48() == 0) {
            func_01B1A0(4, 0);
        }
    } else if (flags & 0x4000) {
        if (e != 0 && e->p_D4 != 0 && e->w_D8 != 0) {
            func_0C0F10(1);
            func_01B1A0(4, 0);
            func_1548D8(e->p_D4, e->w_D0);
            func_16C290(D_0024D934, func_154970(e->p_D4), e->w_D0);
        }
    } else {
        func_0C4598(&D_0037C058, flags);
    }
    func_1455A8(0, e != 0 ? func_153F38(e->p_D4, e->w_D0) : 0);
    func_1455A8(1, 0x1F);
}
