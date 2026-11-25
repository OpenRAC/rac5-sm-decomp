/* LEVEL_10:0x0D5990 -- placement copy of LEVEL_01_0D4550.c: caches the selected entry's data in a global record, then dispatches on the current state flags and reports the entry's value. */

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

extern struct Cache D_003361B8;
extern struct Mgr D_003361D8;
extern int D_0020DA74;

extern struct Ent *func_0BB750(struct Mgr *m);
extern int func_133C40(void *h);
extern int func_133C50(void *h);
extern unsigned int func_133C38(void *h);
extern void func_133C20(void *h, unsigned int n, int *out);
extern unsigned int func_088388(int id);
extern int func_0BDE70(void);
extern void func_019EA8(int a, int b);
extern int func_0B71F8(int a);
extern void func_133C58(void *h, unsigned int n);
extern int func_133C60(void *h);
extern void func_133CA8(int a, unsigned char b, unsigned char c);
extern int func_0BA9F0(struct Mgr *m, unsigned int flags);
extern int func_133C28(void *h, unsigned int n);
extern int func_131EF0(int a, int b);

void func_0D5990(void)
{
    struct Ent *e;
    unsigned int flags;

    e = func_0BB750(&D_003361D8);
    if (e != 0 && e->p_D4 != 0) {
        D_003361B8.w_00 = func_133C40(e->p_D4);
        D_003361B8.w_04 = func_133C50(e->p_D4);
        D_003361B8.w_08 = e->w_DC;
        D_003361B8.b_1C = e->w_D0 >= func_133C38(e->p_D4);
        func_133C20(e->p_D4, e->w_D0, D_003361B8.w_0C);
    }
    flags = func_088388(0x6B10);
    if (flags & 8) {
        func_019EA8(4, 0);
    } else if (flags & 0x1000) {
        if (func_0BDE70() == 0) {
            func_019EA8(4, 0);
        }
    } else if (flags & 0x4000) {
        if (e != 0 && e->p_D4 != 0 && e->w_D8 != 0) {
            func_0B71F8(1);
            func_019EA8(4, 0);
            func_133C58(e->p_D4, e->w_D0);
            func_133CA8(D_0020DA74, func_133C60(e->p_D4), e->w_D0);
        }
    } else {
        func_0BA9F0(&D_003361D8, flags);
    }
    func_131EF0(0, e != 0 ? func_133C28(e->p_D4, e->w_D0) : 0);
    func_131EF0(1, 0x1F);
}
