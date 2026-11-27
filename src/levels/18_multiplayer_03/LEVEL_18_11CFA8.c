/* LEVEL_18:0x11CFA8 -- placement copy of LEVEL_16_11DEF0.c: per-frame state machine of a load/confirm screen. */
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

extern int D_001BBA90;
extern char D_001BA768;
extern Mgr D_002E1910;
extern char D_001ABF30[];

extern int func_10EC10(int a);
extern int func_10E728(int a);
extern int func_10E908(int a);
extern int func_10E7A8(void);
extern void *func_10DFE0(int id);
extern void func_0C5620(int a, void *b, void *c, void *d);
extern void func_0C5658(int a);
extern int func_0C5128(void);
extern int func_0C5138(void);
extern void func_0C5400(int a);
extern int func_018260(int a, int b);
extern unsigned int func_078F38(int a);
extern int func_0A40A8(int a);
extern int func_0AAEE0(void *obj);
extern Handler *func_0A8430(Mgr *m);
extern int func_0A76D0(Mgr *m, unsigned int f);
extern void *func_0A0430(void *p);

void func_11CFA8(void *obj)
{
    int r;
    unsigned int flags;
    Handler *h;

    switch (D_001BBA90) {
    case 1:
        if (func_10EC10(0x14) != 0) {
            D_001BA768 = 1;
            D_001BBA90 = 2;
        } else {
            func_0C5620(0, func_10DFE0(0x6E8), 0, 0);
            func_0C5658(0x1E);
        }
        break;
    case 2:
        D_001BA768 = 1;
        if (func_10E728(1) != 0) {
            func_0C5620(0, func_10DFE0(0x6E8), 0, 0);
            func_0C5658(0x1E);
        } else {
            D_001BA768 = 0;
            if (func_10E908(0) == 0) {
                D_001BBA90 = 4;
            } else if (func_10E7A8() != 0) {
                D_001BBA90 = 4;
            } else {
                D_001BBA90 = 0;
            }
        }
        break;
    case 4:
        if (func_10E908(0) == 0) {
            func_0C5620(1, func_10DFE0(0x6E7), func_10DFE0(0x218), 0);
            if (func_0C5128() == 2) {
                if (func_0C5138() != 0) {
                    func_0C5400(0);
                }
                func_018260(0, 1);
            }
        } else {
            func_0C5620(3, func_10DFE0(0x6E7), func_10DFE0(0x712), func_10DFE0(0x218));
            r = func_0C5128();
            if (r == 1) {
                func_0C5620(0, func_10DFE0(0x6E4), 0, 0);
                D_001BBA90 = r;
            } else if (r == 2) {
                if (func_0C5138() != 0) {
                    func_0C5400(0);
                }
                func_018260(0, 1);
            }
        }
        break;
    case 0:
        flags = func_078F38(0x6B10);
        if (flags & 0x1000) {
            func_0A40A8(0);
            func_0A40A8(7);
            func_0AAEE0(obj);
            break;
        }
        if (flags & 0x4000) {
            h = func_0A8430(&D_002E1910);
            if (h != 0) {
                h->fn(h->arg, h->arg2);
            }
        }
        func_0A76D0(&D_002E1910, flags & 0xFFFFEFFF);
        D_002E1910.f1C = func_0A0430(D_001ABF30);
        break;
    }
}
