/* USA LEVEL_16.REL:0x17D9A0, 288-byte candidate (21 November 2026).
 * Measured gnu-ee-trial: 5 differing words; first difference at 0xA8.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern int D_001B48A4;

typedef struct {
    int w0;
    int w4;
    int w8;
} Rec;

typedef struct {
    char pad00[0x30];
    float pos[3];
    char pad3C[0x54 - 0x3C];
    Rec *rec;
} Obj;

extern int func_112E00(void);
extern void func_115308(int *ids, unsigned int *count);
extern void func_159930(int w8, int id, Obj *o, float *pos, float scale, int sel, void (*fn)(void), int w4);
extern void func_17DB70(void);

static __inline__ int Fix(int *p)
{
    if (*p == 0) {
        return 0;
    }
    *p = D_001B48A4 + *p;
    return 1;
}

static __inline__ int FixChecked(int *p)
{
    int t;

    if (*p == 0) {
        return 0;
    }
    t = D_001B48A4 + *p;
    if (*(int *)(t + 0x40) == 0) {
        *p = 0;
        return 0;
    }
    *p = t;
    return 1;
}

int func_17D9A0(Obj *o)
{
    int ids[4];
    unsigned int count;
    unsigned int i;
    Rec *r;
    int *p;

    r = o->rec;
    if (func_112E00() != 0) {
        return -1;
    }
    if (Fix(&r->w0) == 0) {
        return 0;
    }
    if (FixChecked(&r->w8) == 0) {
        return 0;
    }
    func_115308(ids, &count);
    p = ids;
    for (i = 0; i < count; i++) {
        func_159930(r->w8, *p, o, o->pos, 2.0f, 0x4F, func_17DB70, r->w4);
        p++;
    }
    return 1;
}
