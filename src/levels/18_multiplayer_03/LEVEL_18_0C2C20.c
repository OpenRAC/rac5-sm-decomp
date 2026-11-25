/* LEVEL_18:0x0C2C20 -- placement copy of LEVEL_01_0D4550.c: caches the selected entry's data in a global record, then dispatches on the current state flags and reports the entry's value. */

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

extern struct Cache D_0027B1B8;
extern struct Mgr D_0027B1D8;
extern int D_001B3DA4;

extern struct Ent *func_0A8430(struct Mgr *m);
extern int func_1248E8(void *h);
extern int func_1248F8(void *h);
extern unsigned int func_1248E0(void *h);
extern void func_1248C8(void *h, unsigned int n, int *out);
extern unsigned int func_078F38(int id);
extern int func_0AAF80(void);
extern void func_0181E0(int a, int b);
extern int func_0A40A8(int a);
extern void func_124900(void *h, unsigned int n);
extern int func_124908(void *h);
extern void func_124958(int a, unsigned char b, unsigned char c);
extern int func_0A76D0(struct Mgr *m, unsigned int flags);
extern int func_1248D0(void *h, unsigned int n);
extern int func_10FA90(int a, int b);

void func_0C2C20(void)
{
    struct Ent *e;
    unsigned int flags;

    e = func_0A8430(&D_0027B1D8);
    if (e != 0 && e->p_D4 != 0) {
        D_0027B1B8.w_00 = func_1248E8(e->p_D4);
        D_0027B1B8.w_04 = func_1248F8(e->p_D4);
        D_0027B1B8.w_08 = e->w_DC;
        D_0027B1B8.b_1C = e->w_D0 >= func_1248E0(e->p_D4);
        func_1248C8(e->p_D4, e->w_D0, D_0027B1B8.w_0C);
    }
    flags = func_078F38(0x6B10);
    if (flags & 8) {
        func_0181E0(4, 0);
    } else if (flags & 0x1000) {
        if (func_0AAF80() == 0) {
            func_0181E0(4, 0);
        }
    } else if (flags & 0x4000) {
        if (e != 0 && e->p_D4 != 0 && e->w_D8 != 0) {
            func_0A40A8(1);
            func_0181E0(4, 0);
            func_124900(e->p_D4, e->w_D0);
            func_124958(D_001B3DA4, func_124908(e->p_D4), e->w_D0);
        }
    } else {
        func_0A76D0(&D_0027B1D8, flags);
    }
    func_10FA90(0, e != 0 ? func_1248D0(e->p_D4, e->w_D0) : 0);
    func_10FA90(1, 0x1F);
}
