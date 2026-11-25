/* LEVEL_04:0x0D9DF8 -- placement copy of LEVEL_01_0D4550.c: caches the selected entry's data in a global record, then dispatches on the current state flags and reports the entry's value. */

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

extern struct Cache D_003475B8;
extern struct Mgr D_003475D8;
extern int D_0021DF34;

extern struct Ent *func_0BFBE8(struct Mgr *m);
extern int func_14F808(void *h);
extern int func_14F7B0(void *h);
extern unsigned int func_14F6F8(void *h);
extern void func_14EDC0(void *h, unsigned int n, int *out);
extern unsigned int func_08B2B8(int id);
extern int func_0C2338(void);
extern void func_01A4A8(int a, int b);
extern int func_0BB828(int a);
extern void func_14F840(void *h, unsigned int n);
extern int func_14F8D8(void *h);
extern void func_165500(int a, unsigned char b, unsigned char c);
extern int func_0BEE88(struct Mgr *m, unsigned int flags);
extern int func_14EEA0(void *h, unsigned int n);
extern int func_1404F0(int a, int b);

void func_0D9DF8(void)
{
    struct Ent *e;
    unsigned int flags;

    e = func_0BFBE8(&D_003475D8);
    if (e != 0 && e->p_D4 != 0) {
        D_003475B8.w_00 = func_14F808(e->p_D4);
        D_003475B8.w_04 = func_14F7B0(e->p_D4);
        D_003475B8.w_08 = e->w_DC;
        D_003475B8.b_1C = e->w_D0 >= func_14F6F8(e->p_D4);
        func_14EDC0(e->p_D4, e->w_D0, D_003475B8.w_0C);
    }
    flags = func_08B2B8(0x6B10);
    if (flags & 8) {
        func_01A4A8(4, 0);
    } else if (flags & 0x1000) {
        if (func_0C2338() == 0) {
            func_01A4A8(4, 0);
        }
    } else if (flags & 0x4000) {
        if (e != 0 && e->p_D4 != 0 && e->w_D8 != 0) {
            func_0BB828(1);
            func_01A4A8(4, 0);
            func_14F840(e->p_D4, e->w_D0);
            func_165500(D_0021DF34, func_14F8D8(e->p_D4), e->w_D0);
        }
    } else {
        func_0BEE88(&D_003475D8, flags);
    }
    func_1404F0(0, e != 0 ? func_14EEA0(e->p_D4, e->w_D0) : 0);
    func_1404F0(1, 0x1F);
}
