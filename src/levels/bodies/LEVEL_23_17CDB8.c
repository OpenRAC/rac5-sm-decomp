/* LEVEL_23:0x17CDB8 -- placement copy of LEVEL_22_1300D8.c: steps a screen-transition state machine and fades out. */
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

extern unsigned char D_002FE328;
extern int D_001DBE24;
extern int D_001ED970;
extern Cfg *D_001C73AC;

extern void func_0B3250(int a);
extern void func_0B30D0(int a);
extern void func_09CD40(int a, unsigned b, int c, int d, int e, int f);
extern int func_120208(int a, int b, int c, unsigned char *d, int e, int f);
extern void func_0B3260(void);
extern int func_0B3198(int a, int b);
extern int func_124370(int a);
extern void func_11FBB8(int a);
extern void func_17CAE0(Obj *o, int a, int b);
extern void func_016B98(void);
extern void func_0355A0(int a);
extern int func_0193B8(int a, int b);
extern int func_124A18(int a);

void func_17CDB8(Obj *o)
{
    St *s;
    unsigned char c;

    s = o->f58;
    func_0B3250(5);
    func_0B30D0(0x16);
    o->f70 = o->f70 - 1.0f;
    if (0.0f < o->f70) {
        func_09CD40(0, 0xFF000000, 0x20, 0x20, 0x1E, 0);
        return;
    }
    if (s->fB2 == 0) {
        if (s->fB5 == 0) {
            c = 0;
            func_120208(0, 0, 0, &c, 0, 0);
            if (c) {
                s->fB4 = 0x1E;
            } else {
                s->fB4 = 0;
            }
            s->fB5 = 1;
        }
        s->fB4 = s->fB4 - 1;
        if ((signed char)s->fB4 < 0) {
            func_0B3260();
            func_0B3198(0x15, 0);
            s->fB2 = 1;
        }
    } else if (s->fB3 != 0) {
        if (func_124370(1) == 0) {
            func_11FBB8(D_002FE328);
            D_001DBE24 = 0;
            func_17CAE0(o, o->f45, 1);
            func_016B98();
        } else {
            func_09CD40(0, 0xFF000000, 0x20, 0x20, 0x1E, 0);
            func_0355A0(0);
        }
    } else {
        if (D_002FE328 == 5) {
            if (D_001ED970 == 0x16) {
                func_0193B8(3, 1);
                return;
            }
            if (D_001ED970 != 0x17) {
                return;
            }
        }
        func_11FBB8(5);
        func_124A18(D_001C73AC->f1C6C);
        s->fB3 = 1;
    }
}
