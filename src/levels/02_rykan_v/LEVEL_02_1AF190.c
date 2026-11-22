/* LEVEL_02:0x1AF190 -- placement copy of LEVEL_01_1994A0.c: initialises a freshly allocated actor record: clears it, sets its default timers, creates its animation set and wires up four tracked bone chains. */
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

extern Parent *D_002095A4;
extern char D_0021D960[];
extern char D_0021D978[];
extern int D_0021D98C;
extern int D_0021D990;
extern char D_0023CE50[];
extern char D_0023CE60[];
extern char D_0023CE70[];

extern void *memset(void *p, int c, unsigned n);
extern void func_07EAC0(char *dst, int a, int b, int c, char *tbl);
extern void func_06FE50(float a, float b, float c, Parent *p, char *t0, char *t1, int d);
extern void func_115450(char *dst, char *tbl, int v, char *a, char *b, char *c, char *d, void *e);

int func_1AF190(Obj *o)
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
    func_07EAC0(r + 0x10, 4, 0x42, 0x43, D_0023CE70);
    func_06FE50(0.5f, 0.4000000059604645f, 10.0f, D_002095A4, D_0023CE50, D_0023CE60, 1);
    e = D_002095A4->f5B0;
    func_115450(r + 0x5C, D_0021D960, D_0021D98C, p1, p2, r + 0x168, p3, e);
    func_115450(r + 0x98, D_0021D960, D_0021D98C, p1, p2, r + 0x174, p3, e);
    func_115450(r + 0xD4, D_0021D978, D_0021D990, p1, p2, r + 0x168, p3, e);
    func_115450(r + 0x110, D_0021D978, D_0021D990, p1, p2, r + 0x174, p3, e);
    r[0x185] = 1;
    return 1;
}
