/* USA LEVEL_19.REL:0x15D3F0, 456-byte candidate (22 November 2026).
 * Measured pinned: 6 differing words; first difference at 0x5C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern void *memset(void *p, int c, unsigned int n);

typedef struct Frame {
    float f00, f04, f08, f0C, f10, f14, f18, f1C;
    float f20, f24, f28, f2C;
    float f30, f34, f38, f3C;
    int w40;
} Frame;

typedef struct Res {
    int w0;
    struct Frame *seg[11];
} Res;

typedef struct State {
    Frame *seg[11];
    Frame frames[11];
    char pad_0[1];
} State;

typedef struct Obj {
    char pad_00[0x20];
    float pos[3];
    char pad_2C[0x28];
    Res *res;
    void *s2;
} Obj;

extern char *D_001B5A24;
extern char D_001D6610[];

static __inline__ void Copy3(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

static __inline__ int Fix(int *p)
{
    if (*p == 0) {
        return 0;
    }
    *p = (int)D_001B5A24 + *p;
    return 1;
}

extern int func_15EA78(Obj *o, int a);

int func_15D3F0(Obj *o)
{
    Res *res;
    char *st;
    Frame **dst;
    Frame **src;
    Frame **rd;
    Frame *p;
    char *fr;
    int i;
    int ok;

    st = (char *)o->s2;
    res = o->res;
    memset(st, 0, 0x3B8);
    ok = Fix(&res->w0);
    if (ok) {
        src = res->seg;
        rd = src;
        dst = (Frame **)st;
        fr = st + 0x2C;
        for (i = 10; i >= 0; i--) {
            if (*src != 0) {
                p = (Frame *)(D_001B5A24 + (int)*src);
                if (p->w40 == 0) {
                    *src = 0;
                } else {
                    *src = p;
                }
            }
            p = *rd;
            *dst = p;
            if (p != 0) {
                ((Frame *)fr)->f20 = p->f20;
                ((Frame *)fr)->f24 = p->f24;
                ((Frame *)fr)->f28 = p->f28;
                ((Frame *)fr)->f2C = p->f2C;
                ((Frame *)fr)->f00 = p->f00;
                ((Frame *)fr)->f04 = p->f04;
                ((Frame *)fr)->f08 = p->f08;
                ((Frame *)fr)->f0C = p->f0C;
                ((Frame *)fr)->f10 = p->f10;
                ((Frame *)fr)->f14 = p->f14;
                ((Frame *)fr)->f18 = p->f18;
                ((Frame *)fr)->f1C = p->f1C;
                ((Frame *)fr)->f30 = p->f30;
                ((Frame *)fr)->f34 = p->f34;
                ((Frame *)fr)->f38 = p->f38;
                ((Frame *)fr)->f3C = p->f3C;
                fr = fr + 0x40;
            }
            dst++;
            rd++;
            src++;
        }
        *(char **)(st + 0x3AC) = D_001D6610;
        *(float *)(st + 0x39C) = 0.1f;
        *(float *)(st + 0x3A8) = -30.0f;
        *(float *)(st + 0x3A4) = -1.0f;
        *(int *)(st + 0x398) = 0;
        *(int *)(st + 0x3A0) = 0;
        if (*(int *)st != 0) {
            Copy3((float *)(st + 0x348), o->pos);
            func_15EA78(o, 0);
            return 1;
        }
    }
    return 0;
}
