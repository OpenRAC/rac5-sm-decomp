/* USA LEVEL_10.REL:0x19F978, 180-byte candidate (14 November 2026).
 * Measured pinned: 8 differing words; first difference at 84.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Req {
    float pos[3];
    float dir[3];
    float scale;
    int zero;
} Req;

typedef struct Obj {
    float dir[3];
    char padC[0x24];
    float pos[3];
    char pad3C[9];
    unsigned char kind;
    char pad46[0x11];
    char *rec;
} Obj;

extern int func_1A0930(Obj *o);
extern int func_1A0B00(Obj *o);
extern void func_0ECB38(char *dst, Req *req, int a);

static __inline__ void Copy3(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

void func_19F978(Obj *o)
{
    Req req;

    switch (o->kind) {
    case 0:
        if (func_1A0930(o) != 0)
            return;
        break;
    case 1:
        if (func_1A0B00(o) != 0)
            return;
        break;
    }
    req.zero = 0;
    Copy3(req.pos, o->pos);
    req.dir[0] = o->dir[0];
    req.dir[2] = o->dir[2];
    req.dir[1] = o->dir[1];
    req.scale = 1.0f;
    func_0ECB38(o->rec + 0x40, &req, 0);
}
