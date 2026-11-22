/* USA LEVEL_16.REL:0x11DEF0, 660-byte candidate (22 November 2026).
 * Measured pinned: 12 differing words; first difference at 0x4.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
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

extern int D_001BA610;
extern char D_001B92E8;
extern Mgr D_002E1590;
extern char D_001AAAB0[];

extern int func_10FF60(int a);
extern int func_10FA78(int a);
extern int func_10FC58(int a);
extern int func_10FAF8(void);
extern void *func_10F330(int id);
extern void func_0C6648(int a, void *b, void *c, void *d);
extern void func_0C6680(int a);
extern int func_0C6150(void);
extern int func_0C6160(void);
extern void func_0C6428(int a);
extern void func_018C18(int a, int b);
extern unsigned int func_0795B8(int a);
extern void func_0A50B0(int a);
extern void func_0ABF08(void *obj);
extern Handler *func_0A9458(Mgr *m);
extern void func_0A86F8(Mgr *m, unsigned int f);
extern void *func_0A1420(void *p);

void func_11DEF0(void *obj)
{
    int r;
    unsigned int flags;
    void *a;
    void *b;
    void *c;
    Handler *h;

    switch (D_001BA610) {
    case 1:
        if (func_10FF60(0x14) != 0) {
            D_001B92E8 = 1;
            D_001BA610 = 2;
        } else {
            func_0C6648(0, func_10F330(0x6E8), 0, 0);
            func_0C6680(0x1E);
        }
        break;
    case 2:
        D_001B92E8 = 1;
        if (func_10FA78(1) != 0) {
            func_0C6648(0, func_10F330(0x6E8), 0, 0);
            func_0C6680(0x1E);
        } else {
            D_001B92E8 = 0;
            if (func_10FC58(0) == 0 || func_10FAF8() != 0) {
                D_001BA610 = 4;
            } else {
                D_001BA610 = 0;
            }
        }
        break;
    case 4:
        if (func_10FC58(0) == 0) {
            func_0C6648(1, func_10F330(0x6E7), func_10F330(0x218), 0);
            if (func_0C6150() == 2) {
                if (func_0C6160() != 0) {
                    func_0C6428(0);
                }
                func_018C18(0, 1);
            }
        } else {
            func_0C6648(3, func_10F330(0x6E7), func_10F330(0x712), func_10F330(0x218));
            r = func_0C6150();
            if (r == 1) {
                func_0C6648(0, func_10F330(0x6E4), 0, 0);
                D_001BA610 = r;
            } else if (r == 2) {
                if (func_0C6160() != 0) {
                    func_0C6428(0);
                }
                func_018C18(0, 1);
            }
        }
        break;
    case 0:
        flags = func_0795B8(0x6B10);
        if (flags & 0x1000) {
            func_0A50B0(0);
            func_0A50B0(7);
            func_0ABF08(obj);
            break;
        }
        if (flags & 0x4000) {
            h = func_0A9458(&D_002E1590);
            if (h != 0) {
                h->fn(h->arg, h->arg2);
            }
        }
        func_0A86F8(&D_002E1590, flags & 0xFFFFEFFF);
        D_002E1590.f1C = func_0A1420(D_001AAAB0);
        break;
    }
}
