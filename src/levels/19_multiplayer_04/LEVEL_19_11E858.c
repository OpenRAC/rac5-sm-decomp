/* LEVEL_19:0x11E858 -- placement copy of LEVEL_16_11DEF0.c: per-frame state machine of a load/confirm screen. */
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

extern int D_001BB788;
extern char D_001BA460;
extern Mgr D_002E1710;
extern char D_001ABC30[];

extern int func_110600(int a);
extern int func_110118(int a);
extern int func_1102F8(int a);
extern int func_110198(void);
extern void *func_10F9D0(int id);
extern void func_0C5F20(int a, void *b, void *c, void *d);
extern void func_0C5F58(int a);
extern int func_0C5A28(void);
extern int func_0C5A38(void);
extern void func_0C5D00(int a);
extern int func_018918(int a, int b);
extern unsigned int func_079AA0(int a);
extern int func_0A4928(int a);
extern int func_0AB7E0(void *obj);
extern Handler *func_0A8D30(Mgr *m);
extern int func_0A7FD0(Mgr *m, unsigned int f);
extern void *func_0A0CB0(void *p);

void func_11E858(void *obj)
{
    int r;
    unsigned int flags;
    Handler *h;

    switch (D_001BB788) {
    case 1:
        if (func_110600(0x14) != 0) {
            D_001BA460 = 1;
            D_001BB788 = 2;
        } else {
            func_0C5F20(0, func_10F9D0(0x6E8), 0, 0);
            func_0C5F58(0x1E);
        }
        break;
    case 2:
        D_001BA460 = 1;
        if (func_110118(1) != 0) {
            func_0C5F20(0, func_10F9D0(0x6E8), 0, 0);
            func_0C5F58(0x1E);
        } else {
            D_001BA460 = 0;
            if (func_1102F8(0) == 0) {
                D_001BB788 = 4;
            } else if (func_110198() != 0) {
                D_001BB788 = 4;
            } else {
                D_001BB788 = 0;
            }
        }
        break;
    case 4:
        if (func_1102F8(0) == 0) {
            func_0C5F20(1, func_10F9D0(0x6E7), func_10F9D0(0x218), 0);
            if (func_0C5A28() == 2) {
                if (func_0C5A38() != 0) {
                    func_0C5D00(0);
                }
                func_018918(0, 1);
            }
        } else {
            func_0C5F20(3, func_10F9D0(0x6E7), func_10F9D0(0x712), func_10F9D0(0x218));
            r = func_0C5A28();
            if (r == 1) {
                func_0C5F20(0, func_10F9D0(0x6E4), 0, 0);
                D_001BB788 = r;
            } else if (r == 2) {
                if (func_0C5A38() != 0) {
                    func_0C5D00(0);
                }
                func_018918(0, 1);
            }
        }
        break;
    case 0:
        flags = func_079AA0(0x6B10);
        if (flags & 0x1000) {
            func_0A4928(0);
            func_0A4928(7);
            func_0AB7E0(obj);
            break;
        }
        if (flags & 0x4000) {
            h = func_0A8D30(&D_002E1710);
            if (h != 0) {
                h->fn(h->arg, h->arg2);
            }
        }
        func_0A7FD0(&D_002E1710, flags & 0xFFFFEFFF);
        D_002E1710.f1C = func_0A0CB0(D_001ABC30);
        break;
    }
}
