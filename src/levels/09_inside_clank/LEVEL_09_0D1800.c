/* LEVEL_09:0x0D1800 -- placement copy of LEVEL_01_0D4550.c: caches the selected entry's data in a global record, then dispatches on the current state flags and reports the entry's value. */

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

extern struct Cache D_00314538;
extern struct Mgr D_00314558;
extern int D_001EE874;

extern struct Ent *func_0B76B8(struct Mgr *m);
extern int func_12ED58(void *h);
extern int func_12ED68(void *h);
extern unsigned int func_12ED50(void *h);
extern void func_12ED38(void *h, unsigned int n, int *out);
extern unsigned int func_0849D8(int id);
extern int func_0B9DD0(void);
extern void func_019C18(int a, int b);
extern int func_0B32D0(int a);
extern void func_12ED70(void *h, unsigned int n);
extern int func_12ED78(void *h);
extern void func_12EDC8(int a, unsigned char b, unsigned char c);
extern int func_0B6958(struct Mgr *m, unsigned int flags);
extern int func_12ED40(void *h, unsigned int n);
extern int func_12D008(int a, int b);

void func_0D1800(void)
{
    struct Ent *e;
    unsigned int flags;

    e = func_0B76B8(&D_00314558);
    if (e != 0 && e->p_D4 != 0) {
        D_00314538.w_00 = func_12ED58(e->p_D4);
        D_00314538.w_04 = func_12ED68(e->p_D4);
        D_00314538.w_08 = e->w_DC;
        D_00314538.b_1C = e->w_D0 >= func_12ED50(e->p_D4);
        func_12ED38(e->p_D4, e->w_D0, D_00314538.w_0C);
    }
    flags = func_0849D8(0x6B10);
    if (flags & 8) {
        func_019C18(4, 0);
    } else if (flags & 0x1000) {
        if (func_0B9DD0() == 0) {
            func_019C18(4, 0);
        }
    } else if (flags & 0x4000) {
        if (e != 0 && e->p_D4 != 0 && e->w_D8 != 0) {
            func_0B32D0(1);
            func_019C18(4, 0);
            func_12ED70(e->p_D4, e->w_D0);
            func_12EDC8(D_001EE874, func_12ED78(e->p_D4), e->w_D0);
        }
    } else {
        func_0B6958(&D_00314558, flags);
    }
    func_12D008(0, e != 0 ? func_12ED40(e->p_D4, e->w_D0) : 0);
    func_12D008(1, 0x1F);
}
