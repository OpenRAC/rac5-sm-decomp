/* LEVEL_19:0x15D3F0 -- initializes a rope-like object from its resource record: relocates the record, relocates and validates the eleven segment records and copies the valid ones into packed frames, then sets the default sway parameters and anchors the first segment at the object's position. */
extern void *memset(void *p, int c, unsigned int n);

typedef struct Frame {
    float f00, f04, f08, f0C, f10, f14, f18, f1C;
    float f20, f24, f28, f2C;
    float f30, f34, f38, f3C;
    int w40;
} Frame;

typedef struct Pk {
    float f00, f04, f08, f0C, f10, f14, f18, f1C;
    float f20, f24, f28, f2C;
    float f30, f34, f38, f3C;
} Pk;

typedef struct Res {
    int w0;
    struct Frame *seg[11];
} Res;

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
    Frame **src;
    Frame *p;
    Pk *fr;
    int i;
    int ok;

    st = (char *)o->s2;
    res = o->res;
    memset(st, 0, 0x3B8);
    ok = Fix(&res->w0);
    if (ok) {
        src = res->seg;
        for (i = 0; i < 11; i++, src++) {
            if (*src != 0) {
                p = (Frame *)(D_001B5A24 + (int)*src);
                if (p->w40 == 0) {
                    *src = 0;
                } else {
                    *src = p;
                }
            }
            p = res->seg[i];
            ((Frame **)st)[i] = p;
            if (p != 0) {
                fr = (Pk *)(st + 0x2C) + i;
                fr->f20 = p->f20;
                fr->f24 = p->f24;
                fr->f28 = p->f28;
                fr->f2C = p->f2C;
                fr->f00 = p->f00;
                fr->f04 = p->f04;
                fr->f08 = p->f08;
                fr->f0C = p->f0C;
                fr->f10 = p->f10;
                fr->f14 = p->f14;
                fr->f18 = p->f18;
                fr->f1C = p->f1C;
                fr->f30 = p->f30;
                fr->f34 = p->f34;
                fr->f38 = p->f38;
                fr->f3C = p->f3C;
            }
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
