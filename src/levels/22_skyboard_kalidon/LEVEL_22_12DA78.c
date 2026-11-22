/* LEVEL_22:0x12DA78 -- placement copy of LEVEL_01_1994A0.c: initialises a freshly allocated actor record: clears it, sets its default timers, creates its animation set and wires up four tracked bone chains. */
typedef struct Rec {
    char pad00[0x188];
} Rec;

typedef struct Obj {
    char pad00[0x58];
    char *rec;
} Obj;

typedef struct Parent {
    char pad00[0x5B0];
    void *f5B0;
} Parent;

extern Parent *D_00153964;
extern char D_00166868[];
extern char D_00166880[];
extern int D_00166894;
extern int D_00166898;
extern char D_0017B4E8[];
extern char D_0017B4F8[];
extern char D_0017B508[];

extern void *memset(void *p, int c, unsigned n);
extern void func_06AFD0(char *dst, int a, int b, int c, char *tbl);
extern void func_0609C0(float a, float b, float c, Parent *p, char *t0, char *t1, int d);
extern void func_0EAEB0(char *dst, char *tbl, int v, char *a, char *b, char *c, char *d, void *e);

int func_12DA78(Obj *o)
{
    char *r;
    char *p1;
    char *p2;
    char *p3;
    void *e;

    r = o->rec;
    p1 = r + 0x150;
    memset(r, 0, 0x188);
    p2 = r + 0x15C;
    r[0x14D] = 1;
    *(float *)(r + 0x4C) = 0.20000000298023224f;
    *(float *)(r + 0x50) = 0.20000000298023224f;
    *(float *)(r + 0x54) = 1000.0f;
    p3 = r + 0x185;
    func_06AFD0(r + 0x10, 4, 0x42, 0x43, D_0017B508);
    func_0609C0(0.5f, 0.4000000059604645f, 10.0f, D_00153964, D_0017B4E8, D_0017B4F8, 1);
    e = D_00153964->f5B0;
    func_0EAEB0(r + 0x5C, D_00166868, D_00166894, p1, p2, r + 0x168, p3, e);
    func_0EAEB0(r + 0x98, D_00166868, D_00166894, p1, p2, r + 0x174, p3, e);
    func_0EAEB0(r + 0xD4, D_00166880, D_00166898, p1, p2, r + 0x168, p3, e);
    func_0EAEB0(r + 0x110, D_00166880, D_00166898, p1, p2, r + 0x174, p3, e);
    r[0x185] = 1;
    return 1;
}
