/* LEVEL_07:0x1AA3D8 -- placement copy of LEVEL_01_1994A0.c: initialises a freshly allocated actor record: clears it, sets its default timers, creates its animation set and wires up four tracked bone chains. */
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

extern Parent *D_002088E4;
extern char D_0021D520[];
extern char D_0021D538[];
extern int D_0021D54C;
extern int D_0021D550;
extern char D_0023B4B8[];
extern char D_0023B4C8[];
extern char D_0023B4D8[];

extern void *memset(void *p, int c, unsigned n);
extern void func_07A3C8(char *dst, int a, int b, int c, char *tbl);
extern void func_06BAC0(float a, float b, float c, Parent *p, char *t0, char *t1, int d);
extern void func_112158(char *dst, char *tbl, int v, char *a, char *b, char *c, char *d, void *e);

int func_1AA3D8(Obj *o)
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
    func_07A3C8(r + 0x10, 4, 0x42, 0x43, D_0023B4D8);
    func_06BAC0(0.5f, 0.4000000059604645f, 10.0f, D_002088E4, D_0023B4B8, D_0023B4C8, 1);
    e = D_002088E4->f5B0;
    func_112158(r + 0x5C, D_0021D520, D_0021D54C, p1, p2, r + 0x168, p3, e);
    func_112158(r + 0x98, D_0021D520, D_0021D54C, p1, p2, r + 0x174, p3, e);
    func_112158(r + 0xD4, D_0021D538, D_0021D550, p1, p2, r + 0x168, p3, e);
    func_112158(r + 0x110, D_0021D538, D_0021D550, p1, p2, r + 0x174, p3, e);
    r[0x185] = 1;
    return 1;
}
