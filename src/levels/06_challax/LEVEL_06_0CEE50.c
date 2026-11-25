/* LEVEL_06:0x0CEE50 -- placement copy of LEVEL_01_0D4550.c: caches the selected entry's data in a global record, then dispatches on the current state flags and reports the entry's value. */

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

extern struct Cache D_00319B38;
extern struct Mgr D_00319B58;
extern int D_001F3974;

extern struct Ent *func_0B4D08(struct Mgr *m);
extern int func_12C490(void *h);
extern int func_12C4A0(void *h);
extern unsigned int func_12C488(void *h);
extern void func_12C470(void *h, unsigned int n, int *out);
extern unsigned int func_080E98(int id);
extern int func_0B7420(void);
extern void func_019028(int a, int b);
extern int func_0B0848(int a);
extern void func_12C4A8(void *h, unsigned int n);
extern int func_12C4B0(void *h);
extern void func_12C500(int a, unsigned char b, unsigned char c);
extern int func_0B3FA8(struct Mgr *m, unsigned int flags);
extern int func_12C478(void *h, unsigned int n);
extern int func_12A740(int a, int b);

void func_0CEE50(void)
{
    struct Ent *e;
    unsigned int flags;

    e = func_0B4D08(&D_00319B58);
    if (e != 0 && e->p_D4 != 0) {
        D_00319B38.w_00 = func_12C490(e->p_D4);
        D_00319B38.w_04 = func_12C4A0(e->p_D4);
        D_00319B38.w_08 = e->w_DC;
        D_00319B38.b_1C = e->w_D0 >= func_12C488(e->p_D4);
        func_12C470(e->p_D4, e->w_D0, D_00319B38.w_0C);
    }
    flags = func_080E98(0x6B10);
    if (flags & 8) {
        func_019028(4, 0);
    } else if (flags & 0x1000) {
        if (func_0B7420() == 0) {
            func_019028(4, 0);
        }
    } else if (flags & 0x4000) {
        if (e != 0 && e->p_D4 != 0 && e->w_D8 != 0) {
            func_0B0848(1);
            func_019028(4, 0);
            func_12C4A8(e->p_D4, e->w_D0);
            func_12C500(D_001F3974, func_12C4B0(e->p_D4), e->w_D0);
        }
    } else {
        func_0B3FA8(&D_00319B58, flags);
    }
    func_12A740(0, e != 0 ? func_12C478(e->p_D4, e->w_D0) : 0);
    func_12A740(1, 0x1F);
}
