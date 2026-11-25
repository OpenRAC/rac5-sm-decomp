/* LEVEL_16:0x0C3C48 -- placement copy of LEVEL_01_0D4550.c: caches the selected entry's data in a global record, then dispatches on the current state flags and reports the entry's value. */

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

extern struct Cache D_0027AE38;
extern struct Mgr D_0027AE58;
extern int D_001B2924;

extern struct Ent *func_0A9458(struct Mgr *m);
extern int func_125830(void *h);
extern int func_125840(void *h);
extern unsigned int func_125828(void *h);
extern void func_125810(void *h, unsigned int n, int *out);
extern unsigned int func_0795B8(int id);
extern int func_0ABFA8(void);
extern void func_018B98(int a, int b);
extern int func_0A50B0(int a);
extern void func_125848(void *h, unsigned int n);
extern int func_125850(void *h);
extern void func_1258A8(int a, unsigned char b, unsigned char c);
extern int func_0A86F8(struct Mgr *m, unsigned int flags);
extern int func_125818(void *h, unsigned int n);
extern int func_110DE0(int a, int b);

void func_0C3C48(void)
{
    struct Ent *e;
    unsigned int flags;

    e = func_0A9458(&D_0027AE58);
    if (e != 0 && e->p_D4 != 0) {
        D_0027AE38.w_00 = func_125830(e->p_D4);
        D_0027AE38.w_04 = func_125840(e->p_D4);
        D_0027AE38.w_08 = e->w_DC;
        D_0027AE38.b_1C = e->w_D0 >= func_125828(e->p_D4);
        func_125810(e->p_D4, e->w_D0, D_0027AE38.w_0C);
    }
    flags = func_0795B8(0x6B10);
    if (flags & 8) {
        func_018B98(4, 0);
    } else if (flags & 0x1000) {
        if (func_0ABFA8() == 0) {
            func_018B98(4, 0);
        }
    } else if (flags & 0x4000) {
        if (e != 0 && e->p_D4 != 0 && e->w_D8 != 0) {
            func_0A50B0(1);
            func_018B98(4, 0);
            func_125848(e->p_D4, e->w_D0);
            func_1258A8(D_001B2924, func_125850(e->p_D4), e->w_D0);
        }
    } else {
        func_0A86F8(&D_0027AE58, flags);
    }
    func_110DE0(0, e != 0 ? func_125818(e->p_D4, e->w_D0) : 0);
    func_110DE0(1, 0x1F);
}
