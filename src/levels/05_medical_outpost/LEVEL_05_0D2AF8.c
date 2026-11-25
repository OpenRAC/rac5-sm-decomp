/* LEVEL_05:0x0D2AF8 -- placement copy of LEVEL_01_0D4550.c: caches the selected entry's data in a global record, then dispatches on the current state flags and reports the entry's value. */

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

extern struct Cache D_00318C78;
extern struct Mgr D_00318C98;
extern int D_001F3DF4;

extern struct Ent *func_0B89B0(struct Mgr *m);
extern int func_131738(void *h);
extern int func_131748(void *h);
extern unsigned int func_131730(void *h);
extern void func_131718(void *h, unsigned int n, int *out);
extern unsigned int func_085978(int id);
extern int func_0BB0C8(void);
extern void func_019DC0(int a, int b);
extern int func_0B45C8(int a);
extern void func_131750(void *h, unsigned int n);
extern int func_131758(void *h);
extern void func_1317B8(int a, unsigned char b, unsigned char c);
extern int func_0B7C50(struct Mgr *m, unsigned int flags);
extern int func_131720(void *h, unsigned int n);
extern int func_12F9E8(int a, int b);

void func_0D2AF8(void)
{
    struct Ent *e;
    unsigned int flags;

    e = func_0B89B0(&D_00318C98);
    if (e != 0 && e->p_D4 != 0) {
        D_00318C78.w_00 = func_131738(e->p_D4);
        D_00318C78.w_04 = func_131748(e->p_D4);
        D_00318C78.w_08 = e->w_DC;
        D_00318C78.b_1C = e->w_D0 >= func_131730(e->p_D4);
        func_131718(e->p_D4, e->w_D0, D_00318C78.w_0C);
    }
    flags = func_085978(0x6B10);
    if (flags & 8) {
        func_019DC0(4, 0);
    } else if (flags & 0x1000) {
        if (func_0BB0C8() == 0) {
            func_019DC0(4, 0);
        }
    } else if (flags & 0x4000) {
        if (e != 0 && e->p_D4 != 0 && e->w_D8 != 0) {
            func_0B45C8(1);
            func_019DC0(4, 0);
            func_131750(e->p_D4, e->w_D0);
            func_1317B8(D_001F3DF4, func_131758(e->p_D4), e->w_D0);
        }
    } else {
        func_0B7C50(&D_00318C98, flags);
    }
    func_12F9E8(0, e != 0 ? func_131720(e->p_D4, e->w_D0) : 0);
    func_12F9E8(1, 0x1F);
}
