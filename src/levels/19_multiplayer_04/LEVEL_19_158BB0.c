/* LEVEL_19:0x158BB0 -- (re)initialises an object's work record: resolves its four stored offsets into pointers (dropping those whose target is invalid), sets the default fields and the global limits, and starts the follow-up; returns 1, or -1 when the guard check fails. */
typedef struct Rec {
    int ptr[4];
} Rec;

typedef struct Work {
    int w_00;
    int w_04;
    int w_08;
    int w_0C;
    float f_10;
} Work;

typedef struct Limits {
    char pad_00[0x18];
    float f_18;
    float f_1C;
} Limits;

typedef struct Obj {
    char pad_00[0x54];
    Rec *rec_54;
    Work *work_58;
} Obj;

extern int D_001B5A24;
extern Limits *D_001BEFD0;
extern int func_1135A8(void);
extern void func_158EE0(Obj *o, int a);
extern unsigned int func_1135E0(void);
extern void func_0A50C0(int a, int b);

static __inline__ void Resolve(int *p)
{
    int v;
    int t;

    v = *p;
    if (v != 0) {
        t = D_001B5A24 + v;
        if (*(int *)(t + 0x40) == 0)
            *p = 0;
        else
            *p = t;
    }
}

int func_158BB0(Obj *o)
{
    Work *w;
    Rec *rec;
    int i;
    Limits **lp;

    if (func_1135A8() != 0)
        return -1;
    rec = o->rec_54;
    for (i = 0; i < 2; i++) {
        Resolve(&rec->ptr[i]);
        Resolve(&rec->ptr[i + 2]);
    }
    w = o->work_58;
    w->w_00 = 0;
    w->w_04 = 0;
    w->w_08 = -1;
    func_158EE0(o, 0);
    w->w_0C = 0;
    lp = &D_001BEFD0;
    if (*lp != 0) {
        (*lp)->f_1C = 10000.0f;
        (*lp)->f_18 = 100000.0f;
    }
    w->f_10 = 300.0f;
    if (func_1135E0() != 0)
        func_0A50C0(0x15C, 5);
    return 1;
}
