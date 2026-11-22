/* USA LEVEL_10.REL:0x1A6558, 428-byte candidate (22 November 2026).
 * Measured pinned: 2 differing words; first difference at 0x178.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Vt {
    char pad_00[0xDC];
    void (*fn)(void);
} Vt;

typedef struct Rec {
    int w0;
    float m0[16];
    float m1[16];
    char pad_84[0];
} Rec;

typedef struct Obj {
    float m[16];
    char pad_40[5];
    unsigned char b45;
    char pad_46[2];
    Vt *vt;
    char pad_4C[0xC];
    char *rec;
    char pad_5C[8];
    unsigned int flags;
    char pad_68[0];
} Obj;

extern int D_00211940;
extern void func_1A74E8(void);
extern void func_079458(Obj *o, int *p, int z);

static __inline__ void CopyM(float *d, float *s)
{
    d[8] = s[8];
    d[9] = s[9];
    d[10] = s[10];
    d[11] = s[11];
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    d[3] = s[3];
    d[4] = s[4];
    d[5] = s[5];
    d[6] = s[6];
    d[7] = s[7];
    d[12] = s[12];
    d[13] = s[13];
    d[14] = s[14];
    d[15] = s[15];
}

int func_1A6558(Obj *o)
{
    char *rec;

    rec = o->rec;
    *(int *)rec = 0;
    CopyM((float *)(rec + 4), o->m);
    CopyM((float *)(rec + 0x44), o->m);
    *(float *)(rec + 0x84) = 6.2831855f;
    o->b45 = 0;
    *(float *)(rec + 0x88) = 0.10000000149011612f;
    *(unsigned int *)((char *)o + 0x68) = 0xFF40FF40;
    o->flags = o->flags | 0x40;
    D_00211940 = 5;
    rec[0x90] = 0;
    *(float *)(rec + 0x8C) = o->m[13];
    o->flags = o->flags | 0x40000;
    o->vt->fn = func_1A74E8;
    func_079458(o, &D_00211940, 0);
    return 1;
}
