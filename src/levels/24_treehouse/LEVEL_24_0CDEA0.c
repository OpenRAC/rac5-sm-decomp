/* LEVEL_24:0x0CDEA0 -- placement copy of LEVEL_01_0D4550.c: caches the selected entry's data in a global record, then dispatches on the current state flags and reports the entry's value. */

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

extern struct Cache D_002F8C78;
extern struct Mgr D_002F8C98;
extern int D_001D56F4;

extern struct Ent *func_0B3C98(struct Mgr *m);
extern int func_138ED8(void *h);
extern int func_138E80(void *h);
extern unsigned int func_138DC8(void *h);
extern void func_138490(void *h, unsigned int n, int *out);
extern unsigned int func_0812C0(int id);
extern int func_0B63E8(void);
extern void func_018E18(int a, int b);
extern int func_0AF8B0(int a);
extern void func_138F10(void *h, unsigned int n);
extern int func_138FA8(void *h);
extern void func_14D280(int a, unsigned char b, unsigned char c);
extern int func_0B2F38(struct Mgr *m, unsigned int flags);
extern int func_138570(void *h, unsigned int n);
extern int func_129B70(int a, int b);

void func_0CDEA0(void)
{
    struct Ent *e;
    unsigned int flags;

    e = func_0B3C98(&D_002F8C98);
    if (e != 0 && e->p_D4 != 0) {
        D_002F8C78.w_00 = func_138ED8(e->p_D4);
        D_002F8C78.w_04 = func_138E80(e->p_D4);
        D_002F8C78.w_08 = e->w_DC;
        D_002F8C78.b_1C = e->w_D0 >= func_138DC8(e->p_D4);
        func_138490(e->p_D4, e->w_D0, D_002F8C78.w_0C);
    }
    flags = func_0812C0(0x6B10);
    if (flags & 8) {
        func_018E18(4, 0);
    } else if (flags & 0x1000) {
        if (func_0B63E8() == 0) {
            func_018E18(4, 0);
        }
    } else if (flags & 0x4000) {
        if (e != 0 && e->p_D4 != 0 && e->w_D8 != 0) {
            func_0AF8B0(1);
            func_018E18(4, 0);
            func_138F10(e->p_D4, e->w_D0);
            func_14D280(D_001D56F4, func_138FA8(e->p_D4), e->w_D0);
        }
    } else {
        func_0B2F38(&D_002F8C98, flags);
    }
    func_129B70(0, e != 0 ? func_138570(e->p_D4, e->w_D0) : 0);
    func_129B70(1, 0x1F);
}
