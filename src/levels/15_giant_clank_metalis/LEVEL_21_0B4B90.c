/* LEVEL_21:0x0B4B90 -- placement copy of LEVEL_01_0D4550.c: caches the selected entry's data in a global record, then dispatches on the current state flags and reports the entry's value. */

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

extern struct Cache D_002445F8;
extern struct Mgr D_00244618;
extern int D_001596F4;

extern struct Ent *func_09AA50(struct Mgr *m);
extern int func_0F4C90(void *h);
extern int func_0F4CA0(void *h);
extern unsigned int func_0F4C88(void *h);
extern void func_0F4C70(void *h, unsigned int n, int *out);
extern unsigned int func_06C700(int id);
extern int func_09D168(void);
extern void func_016A10(int a, int b);
extern int func_096530(int a);
extern void func_0F4CA8(void *h, unsigned int n);
extern int func_0F4CB0(void *h);
extern void func_0F4D08(int a, unsigned char b, unsigned char c);
extern int func_099CF0(struct Mgr *m, unsigned int flags);
extern int func_0F4C78(void *h, unsigned int n);
extern int func_0F2F38(int a, int b);

void func_0B4B90(void)
{
    struct Ent *e;
    unsigned int flags;

    e = func_09AA50(&D_00244618);
    if (e != 0 && e->p_D4 != 0) {
        D_002445F8.w_00 = func_0F4C90(e->p_D4);
        D_002445F8.w_04 = func_0F4CA0(e->p_D4);
        D_002445F8.w_08 = e->w_DC;
        D_002445F8.b_1C = e->w_D0 >= func_0F4C88(e->p_D4);
        func_0F4C70(e->p_D4, e->w_D0, D_002445F8.w_0C);
    }
    flags = func_06C700(0x6B10);
    if (flags & 8) {
        func_016A10(4, 0);
    } else if (flags & 0x1000) {
        if (func_09D168() == 0) {
            func_016A10(4, 0);
        }
    } else if (flags & 0x4000) {
        if (e != 0 && e->p_D4 != 0 && e->w_D8 != 0) {
            func_096530(1);
            func_016A10(4, 0);
            func_0F4CA8(e->p_D4, e->w_D0);
            func_0F4D08(D_001596F4, func_0F4CB0(e->p_D4), e->w_D0);
        }
    } else {
        func_099CF0(&D_00244618, flags);
    }
    func_0F2F38(0, e != 0 ? func_0F4C78(e->p_D4, e->w_D0) : 0);
    func_0F2F38(1, 0x1F);
}
