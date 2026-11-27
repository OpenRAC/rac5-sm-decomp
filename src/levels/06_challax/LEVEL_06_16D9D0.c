/* LEVEL_06:0x16D9D0 -- tests whether a tracked point is within range of the object. */
typedef struct Info { char pad0[0x15A]; unsigned char flag; } Info;
typedef struct Mid { char pad0[0x58]; Info *info; } Mid;
typedef struct Ext {
    char pad0[0x2C]; Mid *mid; void *target; float range; char pad1[0x10];
    void *first; char pad2[0x4]; unsigned char useMid;
} Ext;
typedef struct Obj { char pad0[0x30]; float pos[3]; char pad1[0x18]; Ext *ext; } Obj;
extern void func_018B30(float *v);
extern int func_07D818(void *t, float *v);

static __inline__ void Sub(float *d, float *a, float *b)
{
    d[0] = a[0] - b[0];
    d[1] = a[1] - b[1];
    d[2] = a[2] - b[2];
}

int func_16D9D0(Obj *o)
{
    float pt[4];
    float d[3];
    Ext *e;
    e = o->ext;
    func_018B30(pt);
    if (e->first != 0 && func_07D818(e->first, pt) != 0)
        return 1;
    if (e->useMid == 0 || e->mid->info->flag != 0) {
        if (func_07D818(e->target, pt) != 0) {
            Sub(d, pt, o->pos);
            if (e->range * e->range < d[0] * d[0] + d[2] * d[2])
                return 0;
            return 1;
        }
    }
    return 0;
}
