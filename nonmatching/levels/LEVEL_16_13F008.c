/* USA LEVEL_16.REL:0x13F008, 340-byte candidate (21 November 2026).
 * Measured pinned: 22 differing words; first difference at 0x0.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char pad00[0x13];
    unsigned char b13;
    unsigned char b14;
    unsigned char b15;
} Cfg;

typedef struct {
    char pad00[0x10];
    unsigned char b10;
    unsigned char b11;
} Src;

typedef struct {
    int mode;
    int a;
    int b;
    int n;
} Req4;

typedef struct {
    int mode;
    int a;
    int b;
} Req3;

typedef struct {
    char pad00[0x54];
    Src *src;
    int *out;
    char pad5C[0x70 - 0x5C];
    int w70;
} Obj;

extern unsigned char D_001BD79C;
extern int D_001D04A0;
extern char D_001E4090[];
extern int func_112A88(int a0, int a1, int a2);
extern int func_13F480(Obj *o, char *p, void *req, unsigned int count);
extern void func_15D4E8(Obj *o, float f);
extern void func_183128(Obj *o, void *link);

int func_13F008(Obj *o)
{
    Src *s = o->src;
    int *out = o->out;
    int ok;

    *out = 0;
    if (func_112A88(((unsigned char *)s)[0x13], ((unsigned char *)s)[0x14], ((unsigned char *)s)[0x15]) != 0)
        return -1;
    D_001BD79C = 1;
    if (D_001D04A0 == 0x13) {
        Req4 r = { 2, s->b10, s->b11, 12 };

        ok = func_13F480(o, D_001E4090, &r, 4);
    } else {
        Req3 r = { 2, s->b10, s->b11 };

        ok = func_13F480(o, D_001E4090, &r, 3);
    }
    D_001BD79C = 0;
    if (ok == 0)
        return -1;
    func_15D4E8(o, 30.0f);
    func_183128(o, out + 1);
    o->w70 = 0;
    return 1;
}
