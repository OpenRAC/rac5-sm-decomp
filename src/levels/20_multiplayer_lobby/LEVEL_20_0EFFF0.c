/* LEVEL_20:0x0EFFF0 -- placement copy of LEVEL_16_11DEF0.c: per-frame state machine of a load/confirm screen. */
typedef struct Handler {
    char pad00[0xD0];
    void (*fn)(int, int);
    int arg;
    int arg2;
} Handler;

typedef struct Mgr {
    char pad00[0x1C];
    void *f1C;
} Mgr;

extern int D_0011CCB0;
extern char D_0011B988;
extern Mgr D_00204AE8;
extern char D_0010D190[];

extern int func_0E2D48(int a);
extern int func_0E2860(int a);
extern int func_0E2A40(int a);
extern int func_0E28E0(void);
extern void *func_0E2118(int id);
extern void func_0B0B78(int a, void *b, void *c, void *d);
extern void func_0B0BB0(int a);
extern int func_0B0680(void);
extern int func_0B0690(void);
extern void func_0B0958(int a);
extern int func_0169D0(int a, int b);
extern unsigned int func_067228(int a);
extern int func_08F6B0(int a);
extern int func_096438(void *obj);
extern Handler *func_093988(Mgr *m);
extern int func_092C28(Mgr *m, unsigned int f);
extern void *func_08BB18(void *p);

void func_0EFFF0(void *obj)
{
    int r;
    unsigned int flags;
    Handler *h;

    switch (D_0011CCB0) {
    case 1:
        if (func_0E2D48(0x14) != 0) {
            D_0011B988 = 1;
            D_0011CCB0 = 2;
        } else {
            func_0B0B78(0, func_0E2118(0x6E8), 0, 0);
            func_0B0BB0(0x1E);
        }
        break;
    case 2:
        D_0011B988 = 1;
        if (func_0E2860(1) != 0) {
            func_0B0B78(0, func_0E2118(0x6E8), 0, 0);
            func_0B0BB0(0x1E);
        } else {
            D_0011B988 = 0;
            if (func_0E2A40(0) == 0) {
                D_0011CCB0 = 4;
            } else if (func_0E28E0() != 0) {
                D_0011CCB0 = 4;
            } else {
                D_0011CCB0 = 0;
            }
        }
        break;
    case 4:
        if (func_0E2A40(0) == 0) {
            func_0B0B78(1, func_0E2118(0x6E7), func_0E2118(0x218), 0);
            if (func_0B0680() == 2) {
                if (func_0B0690() != 0) {
                    func_0B0958(0);
                }
                func_0169D0(0, 1);
            }
        } else {
            func_0B0B78(3, func_0E2118(0x6E7), func_0E2118(0x712), func_0E2118(0x218));
            r = func_0B0680();
            if (r == 1) {
                func_0B0B78(0, func_0E2118(0x6E4), 0, 0);
                D_0011CCB0 = r;
            } else if (r == 2) {
                if (func_0B0690() != 0) {
                    func_0B0958(0);
                }
                func_0169D0(0, 1);
            }
        }
        break;
    case 0:
        flags = func_067228(0x6B10);
        if (flags & 0x1000) {
            func_08F6B0(0);
            func_08F6B0(7);
            func_096438(obj);
            break;
        }
        if (flags & 0x4000) {
            h = func_093988(&D_00204AE8);
            if (h != 0) {
                h->fn(h->arg, h->arg2);
            }
        }
        func_092C28(&D_00204AE8, flags & 0xFFFFEFFF);
        D_00204AE8.f1C = func_08BB18(D_0010D190);
        break;
    }
}
