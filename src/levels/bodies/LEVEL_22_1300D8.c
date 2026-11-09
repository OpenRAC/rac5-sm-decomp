/* LEVEL_22:0x1300D8 -- steps a screen-transition state machine and fades out. */
typedef struct St {
    char pad0[0xB2];
    unsigned char fB2;
    unsigned char fB3;
    unsigned char fB4;
    unsigned char fB5;
} St;

typedef struct Obj {
    char pad0[0x45];
    unsigned char f45;
    char pad46[0x58 - 0x46];
    St *f58;
    char pad5C[0x70 - 0x5C];
    float f70;
} Obj;

typedef struct Cfg {
    char pad0[0x1C6C];
    int f1C6C;
} Cfg;

extern unsigned char D_00282AA8;
extern int D_001668A4;
extern int D_00177C70;
extern Cfg *D_0015332C;

extern void func_0AA960(int a);
extern void func_0AA7E0(int a);
extern void func_0945E0(int a, unsigned b, int c, int d, int e, int f);
extern int func_105F60(int a, int b, int c, unsigned char *d, int e, int f);
extern void func_0AA970(void);
extern int func_0AA8A8(int a, int b);
extern int func_10A0C8(int a);
extern void func_105910(int a);
extern void func_12FE00(Obj *o, int a, int b);
extern void func_014A50(void);
extern void func_031CC0(int a);
extern void func_016EC0(int a, int b);
extern int func_10A770(int a);

void func_1300D8(Obj *o)
{
    St *s;
    unsigned char c;

    s = o->f58;
    func_0AA960(5);
    func_0AA7E0(0x16);
    o->f70 = o->f70 - 1.0f;
    if (0.0f < o->f70) {
        func_0945E0(0, 0xFF000000, 0x20, 0x20, 0x1E, 0);
        return;
    }
    if (s->fB2 == 0) {
        if (s->fB5 == 0) {
            c = 0;
            func_105F60(0, 0, 0, &c, 0, 0);
            if (c) {
                s->fB4 = 0x1E;
            } else {
                s->fB4 = 0;
            }
            s->fB5 = 1;
        }
        s->fB4 = s->fB4 - 1;
        if ((signed char)s->fB4 < 0) {
            func_0AA970();
            func_0AA8A8(0x15, 0);
            s->fB2 = 1;
        }
    } else if (s->fB3 != 0) {
        if (func_10A0C8(1) == 0) {
            func_105910(D_00282AA8);
            D_001668A4 = 0;
            func_12FE00(o, o->f45, 1);
            func_014A50();
        } else {
            func_0945E0(0, 0xFF000000, 0x20, 0x20, 0x1E, 0);
            func_031CC0(0);
        }
    } else {
        if (D_00282AA8 == 5) {
            if (D_00177C70 == 0x16) {
                func_016EC0(3, 1);
                return;
            }
            if (D_00177C70 != 0x17) {
                return;
            }
        }
        func_105910(5);
        func_10A770(D_0015332C->f1C6C);
        s->fB3 = 1;
    }
}
