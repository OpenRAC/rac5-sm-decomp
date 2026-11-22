/* USA LEVEL_03.REL:0x1E2608, 304-byte candidate (21 November 2026).
 * Measured gnu-ee-trial: 9 differing words; first difference at 0x48.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Obj Obj;

typedef struct Src {
    char pad_00[0x28];
    float scale;
    char pad_2C[0x80 - 0x2C];
} Src;

typedef struct Cfg {
    char pad_00[4];
    Src *srcs;
    int countA;
    char pad_0C[4];
    int countB;
} Cfg;

typedef struct SlotA {
    char pad_00[8];
    char sub[8];
    float v;
} SlotA;

typedef struct SlotB {
    char pad_00[8];
    float a;
    float b;
} SlotB;

extern int rand(void);
extern void func_120068(void *a0);

void func_1E2608(SlotA *a, SlotB *b, Cfg *cfg)
{
    int i;
    int j;
    int n;
    int m;
    Src *s;
    float scale;

    n = cfg->countA;
    for (i = 0; i != n; i++) {
        s = &cfg->srcs[i];
        func_120068(&a[i]);
        func_120068(a[i].sub);
        scale = s->scale;
        a[i].v = scale * ((float)rand() * 4.656612873077393e-10f);
    }
    m = cfg->countB;
    for (j = 0; j != m; j++) {
        func_120068(&b[j]);
        b[j].a = (float)rand() * 4.6566123179658803e-10f;
        b[j].b = (float)rand() * 4.6566123179658803e-10f;
    }
}
