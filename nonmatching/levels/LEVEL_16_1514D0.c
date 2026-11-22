/* USA LEVEL_16.REL:0x1514D0, 292-byte candidate (21 November 2026).
 * Measured pinned: 7 differing words; first difference at 0x7C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Handlers {
    char pad00[0xDC];
    void (*cb)(void);
} Handlers;

typedef struct Shared {
    char pad00[0xF8];
    int wF8;
} Shared;

typedef struct Rec {
    char pad00[0x278];
    float f278;
} Rec;

typedef struct Obj {
    char pad00[0x48];
    Handlers *handlers;
    char pad4C[0xC];
    Rec *rec;
    char pad5C[8];
    unsigned int flags;
    char pad68[0xC];
    char sub[1];
} Obj;

extern Shared *D_001A2114;
extern unsigned int D_001BDADC;
extern unsigned int D_0024E240;
extern char D_001D40F8[];
extern char D_001D4108[];
extern void func_152880(void);
extern void *memset(void *, int, unsigned int);
extern int func_022868(int a, int b);
extern void func_0211E8(char *sub, int a, int b, int c);
extern void func_05D910(Shared *s, char *a, char *b, int c, float x, float y, float z);

int func_1514D0(Obj *o)
{
    Rec *r = o->rec;

    o->handlers->cb = func_152880;
    memset(o->rec, 0, 0x27C);
    if (func_022868(10, D_001A2114->wF8) != 0) {
        r->f278 = 12.0f;
    } else {
        r->f278 = 6.0f;
    }
    D_001BDADC = (D_001BDADC & 0xF800FFFF) | (D_0024E240 << 16);
    func_0211E8(o->sub, 10, D_001A2114->wF8, -1);
    func_05D910(D_001A2114, D_001D40F8, D_001D4108, 1, 0.6000000238418579f, 0.4000000059604645f, 3.0f);
    o->flags |= 0x40000;
    return 1;
}
