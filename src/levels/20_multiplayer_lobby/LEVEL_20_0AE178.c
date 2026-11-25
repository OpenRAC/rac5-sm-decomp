/* LEVEL_20:0x0AE178 -- placement copy of LEVEL_01_0D4550.c: caches the selected entry's data in a global record, then dispatches on the current state flags and reports the entry's value. */

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

extern struct Cache D_0019E678;
extern struct Mgr D_0019E698;
extern int D_00115004;

extern struct Ent *func_093988(struct Mgr *m);
extern int func_0F7900(void *h);
extern int func_0F7910(void *h);
extern unsigned int func_0F78F8(void *h);
extern void func_0F78E0(void *h, unsigned int n, int *out);
extern unsigned int func_067228(int id);
extern int func_0964D8(void);
extern void func_016950(int a, int b);
extern int func_08F6B0(int a);
extern void func_0F7918(void *h, unsigned int n);
extern int func_0F7920(void *h);
extern void func_0F7968(int a, unsigned char b, unsigned char c);
extern int func_092C28(struct Mgr *m, unsigned int flags);
extern int func_0F78E8(void *h, unsigned int n);
extern int func_0E3BC8(int a, int b);

void func_0AE178(void)
{
    struct Ent *e;
    unsigned int flags;

    e = func_093988(&D_0019E698);
    if (e != 0 && e->p_D4 != 0) {
        D_0019E678.w_00 = func_0F7900(e->p_D4);
        D_0019E678.w_04 = func_0F7910(e->p_D4);
        D_0019E678.w_08 = e->w_DC;
        D_0019E678.b_1C = e->w_D0 >= func_0F78F8(e->p_D4);
        func_0F78E0(e->p_D4, e->w_D0, D_0019E678.w_0C);
    }
    flags = func_067228(0x6B10);
    if (flags & 8) {
        func_016950(4, 0);
    } else if (flags & 0x1000) {
        if (func_0964D8() == 0) {
            func_016950(4, 0);
        }
    } else if (flags & 0x4000) {
        if (e != 0 && e->p_D4 != 0 && e->w_D8 != 0) {
            func_08F6B0(1);
            func_016950(4, 0);
            func_0F7918(e->p_D4, e->w_D0);
            func_0F7968(D_00115004, func_0F7920(e->p_D4), e->w_D0);
        }
    } else {
        func_092C28(&D_0019E698, flags);
    }
    func_0E3BC8(0, e != 0 ? func_0F78E8(e->p_D4, e->w_D0) : 0);
    func_0E3BC8(1, 0x1F);
}
