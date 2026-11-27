/* LEVEL_17:0x11D918 -- placement copy of LEVEL_16_11DEF0.c: per-frame state machine of a load/confirm screen. */
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

extern int D_001ADC08;
extern char D_001AC8E0;
extern Mgr D_002D2890;
extern char D_0019E0B0[];

extern int func_10F4D8(int a);
extern int func_10EFF0(int a);
extern int func_10F1D0(int a);
extern int func_10F070(void);
extern void *func_10E8A8(int id);
extern void func_0C5B88(int a, void *b, void *c, void *d);
extern void func_0C5BC0(int a);
extern int func_0C5690(void);
extern int func_0C56A0(void);
extern void func_0C5968(int a);
extern int func_018598(int a, int b);
extern unsigned int func_07A030(int a);
extern int func_0A4590(int a);
extern int func_0AB448(void *obj);
extern Handler *func_0A8998(Mgr *m);
extern int func_0A7C38(Mgr *m, unsigned int f);
extern void *func_0A0918(void *p);

void func_11D918(void *obj)
{
    int r;
    unsigned int flags;
    Handler *h;

    switch (D_001ADC08) {
    case 1:
        if (func_10F4D8(0x14) != 0) {
            D_001AC8E0 = 1;
            D_001ADC08 = 2;
        } else {
            func_0C5B88(0, func_10E8A8(0x6E8), 0, 0);
            func_0C5BC0(0x1E);
        }
        break;
    case 2:
        D_001AC8E0 = 1;
        if (func_10EFF0(1) != 0) {
            func_0C5B88(0, func_10E8A8(0x6E8), 0, 0);
            func_0C5BC0(0x1E);
        } else {
            D_001AC8E0 = 0;
            if (func_10F1D0(0) == 0) {
                D_001ADC08 = 4;
            } else if (func_10F070() != 0) {
                D_001ADC08 = 4;
            } else {
                D_001ADC08 = 0;
            }
        }
        break;
    case 4:
        if (func_10F1D0(0) == 0) {
            func_0C5B88(1, func_10E8A8(0x6E7), func_10E8A8(0x218), 0);
            if (func_0C5690() == 2) {
                if (func_0C56A0() != 0) {
                    func_0C5968(0);
                }
                func_018598(0, 1);
            }
        } else {
            func_0C5B88(3, func_10E8A8(0x6E7), func_10E8A8(0x712), func_10E8A8(0x218));
            r = func_0C5690();
            if (r == 1) {
                func_0C5B88(0, func_10E8A8(0x6E4), 0, 0);
                D_001ADC08 = r;
            } else if (r == 2) {
                if (func_0C56A0() != 0) {
                    func_0C5968(0);
                }
                func_018598(0, 1);
            }
        }
        break;
    case 0:
        flags = func_07A030(0x6B10);
        if (flags & 0x1000) {
            func_0A4590(0);
            func_0A4590(7);
            func_0AB448(obj);
            break;
        }
        if (flags & 0x4000) {
            h = func_0A8998(&D_002D2890);
            if (h != 0) {
                h->fn(h->arg, h->arg2);
            }
        }
        func_0A7C38(&D_002D2890, flags & 0xFFFFEFFF);
        D_002D2890.f1C = func_0A0918(D_0019E0B0);
        break;
    }
}
