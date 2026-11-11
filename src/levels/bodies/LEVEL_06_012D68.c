/* LEVEL_06:0x012D68 -- placement copy of LEVEL_01_012D80.c: computes the bounding box of the whole level (global bounds, or +-1000 when absent), then grows it by one unit on every side. */
typedef struct V3 {
    float x;
    float y;
    float z;
} V3;

typedef struct Bounds {
    char pad00[0x34];
    V3 min;
    V3 max;
} Bounds;

typedef struct Part {
    char pad00[0x80];
} Part;

typedef struct Rec2 {
    char pad00[0x62];
    unsigned char n;
} Rec2;

typedef struct Rec3 {
    char pad00[0x51];
    unsigned char n;
} Rec3;

typedef struct Level {
    char pad00[0x1C];
    Rec3 *list3;
    int cnt3;
    char pad24[0x2C - 0x24];
    Rec2 *list2;
    unsigned int cnt2;
    char pad34[0x44 - 0x34];
    Part *parts;
    int nparts;
} Level;

extern Bounds *D_001F599C[1];
extern Level *D_001F5990;

extern void func_07B730(float *lo, float *hi, Part *p);
extern void func_07D688(float *lo, float *hi, Rec2 *r);
extern void func_07CDC0(float *lo, float *hi, Rec3 *r);

void func_012D68(float *lo, float *hi)
{
    V3 *b;
    Part *p;
    Part *end;
    Rec2 *r2;
    Rec3 *r3;
    unsigned int i;
    int j;
    int n;

    if (D_001F599C[0] != 0) {
        b = &D_001F599C[0]->min;
        lo[0] = b->x;
        lo[1] = b->y;
        lo[2] = b->z;
        b = &D_001F599C[0]->max;
        hi[0] = b->x;
        hi[1] = b->y;
        hi[2] = b->z;
    } else {
        lo[0] = 1000.0f;
        lo[1] = 1000.0f;
        lo[2] = 1000.0f;
        hi[0] = -1000.0f;
        hi[1] = -1000.0f;
        hi[2] = -1000.0f;
    }
    p = D_001F5990->parts;
    end = p + D_001F5990->nparts;
    for (; p != end; p++) {
        func_07B730(lo, hi, p);
    }
    r2 = D_001F5990->list2;
    for (i = 0; i < D_001F5990->cnt2; i++) {
        func_07D688(lo, hi, r2);
        r2 = (Rec2 *)((char *)r2 + 0x64 + r2->n * 8);
    }
    r3 = D_001F5990->list3;
    n = D_001F5990->cnt3;
    for (j = 0; j != n; j++) {
        func_07CDC0(lo, hi, r3);
        r3 = (Rec3 *)((char *)r3 + 0x54 + r3->n * 8);
    }
    lo[0] = lo[0] - 1.0f;
    lo[1] = lo[1] - 1.0f;
    lo[2] = lo[2] - 1.0f;
    hi[0] = hi[0] + 1.0f;
    hi[1] = hi[1] + 1.0f;
    hi[2] = hi[2] + 1.0f;
}
