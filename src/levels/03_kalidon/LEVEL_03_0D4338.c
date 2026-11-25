/* LEVEL_03:0x0D4338 -- placement copy of LEVEL_01_0D4550.c: caches the selected entry's data in a global record, then dispatches on the current state flags and reports the entry's value. */

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

extern struct Cache D_00347C38;
extern struct Mgr D_00347C58;
extern int D_0021D0F4;

extern struct Ent *func_0BA1F0(struct Mgr *m);
extern int func_134190(void *h);
extern int func_1341A0(void *h);
extern unsigned int func_134188(void *h);
extern void func_134170(void *h, unsigned int n, int *out);
extern unsigned int func_087E78(int id);
extern int func_0BC908(void);
extern void func_01A590(int a, int b);
extern int func_0B5E08(int a);
extern void func_1341A8(void *h, unsigned int n);
extern int func_1341B0(void *h);
extern void func_134208(int a, unsigned char b, unsigned char c);
extern int func_0B9490(struct Mgr *m, unsigned int flags);
extern int func_134178(void *h, unsigned int n);
extern int func_132438(int a, int b);

void func_0D4338(void)
{
    struct Ent *e;
    unsigned int flags;

    e = func_0BA1F0(&D_00347C58);
    if (e != 0 && e->p_D4 != 0) {
        D_00347C38.w_00 = func_134190(e->p_D4);
        D_00347C38.w_04 = func_1341A0(e->p_D4);
        D_00347C38.w_08 = e->w_DC;
        D_00347C38.b_1C = e->w_D0 >= func_134188(e->p_D4);
        func_134170(e->p_D4, e->w_D0, D_00347C38.w_0C);
    }
    flags = func_087E78(0x6B10);
    if (flags & 8) {
        func_01A590(4, 0);
    } else if (flags & 0x1000) {
        if (func_0BC908() == 0) {
            func_01A590(4, 0);
        }
    } else if (flags & 0x4000) {
        if (e != 0 && e->p_D4 != 0 && e->w_D8 != 0) {
            func_0B5E08(1);
            func_01A590(4, 0);
            func_1341A8(e->p_D4, e->w_D0);
            func_134208(D_0021D0F4, func_1341B0(e->p_D4), e->w_D0);
        }
    } else {
        func_0B9490(&D_00347C58, flags);
    }
    func_132438(0, e != 0 ? func_134178(e->p_D4, e->w_D0) : 0);
    func_132438(1, 0x1F);
}
