/* LEVEL_02:0x0DAEE0 -- placement copy of LEVEL_01_0D4550.c: caches the selected entry's data in a global record, then dispatches on the current state flags and reports the entry's value. */

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

extern struct Cache D_003442B8;
extern struct Mgr D_003442D8;
extern int D_00219A34;

extern struct Ent *func_0C0D18(struct Mgr *m);
extern int func_13C170(void *h);
extern int func_13C180(void *h);
extern unsigned int func_13C168(void *h);
extern void func_13C150(void *h, unsigned int n, int *out);
extern unsigned int func_08E950(int id);
extern int func_0C3430(void);
extern void func_01B188(int a, int b);
extern int func_0BC930(int a);
extern void func_13C188(void *h, unsigned int n);
extern int func_13C190(void *h);
extern void func_13C1E0(int a, unsigned char b, unsigned char c);
extern int func_0BFFB8(struct Mgr *m, unsigned int flags);
extern int func_13C158(void *h, unsigned int n);
extern int func_13A420(int a, int b);

void func_0DAEE0(void)
{
    struct Ent *e;
    unsigned int flags;

    e = func_0C0D18(&D_003442D8);
    if (e != 0 && e->p_D4 != 0) {
        D_003442B8.w_00 = func_13C170(e->p_D4);
        D_003442B8.w_04 = func_13C180(e->p_D4);
        D_003442B8.w_08 = e->w_DC;
        D_003442B8.b_1C = e->w_D0 >= func_13C168(e->p_D4);
        func_13C150(e->p_D4, e->w_D0, D_003442B8.w_0C);
    }
    flags = func_08E950(0x6B10);
    if (flags & 8) {
        func_01B188(4, 0);
    } else if (flags & 0x1000) {
        if (func_0C3430() == 0) {
            func_01B188(4, 0);
        }
    } else if (flags & 0x4000) {
        if (e != 0 && e->p_D4 != 0 && e->w_D8 != 0) {
            func_0BC930(1);
            func_01B188(4, 0);
            func_13C188(e->p_D4, e->w_D0);
            func_13C1E0(D_00219A34, func_13C190(e->p_D4), e->w_D0);
        }
    } else {
        func_0BFFB8(&D_003442D8, flags);
    }
    func_13A420(0, e != 0 ? func_13C158(e->p_D4, e->w_D0) : 0);
    func_13A420(1, 0x1F);
}
