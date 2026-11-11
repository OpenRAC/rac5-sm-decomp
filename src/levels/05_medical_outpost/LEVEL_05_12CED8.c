/* LEVEL_05:0x12CED8 -- placement copy of LEVEL_01_131560.c: gathers the objects around a point, aims at each one and runs its class reaction handler, optionally recording the result. */
extern float sqrtf(float x);

typedef struct Item Item;
typedef long (*Handler)(float scale, Item *item, int a, int b, float *pos, float *dir, Item *skip);

typedef struct Cls {
    char pad_00[0x20];
    Handler handler;
} Cls;

typedef struct Link {
    int first;
} Link;

struct Item {
    char pad_00[0x20];
    float fwd[4];
    float pos[4];
    Cls *cls;
    char pad_44[0x14];
    Link *link;
};

typedef struct Row {
    int mode;
    float scale;
    int a;
    int b;
} Row;

extern Row D_00207C58[];

extern unsigned int func_01B980(Item **buf, int cap, float *pos, int p6, int p7, int p8, int one);
extern int func_0161A0(Item *item);
extern int func_039F50(int first, Item *skip);
extern void func_0160C8(int a, int b, Item *item, long result);

static __inline__ void Copy3(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

static __inline__ void Sub3(float *out, float *a, float *b)
{
    out[0] = a[0] - b[0];
    out[1] = a[1] - b[1];
    out[2] = a[2] - b[2];
}

unsigned int func_12CED8(float *pos, int idx, Item *skip, int x, int y, int p6, int p7, int p8)
{
    Item *buf[16];
    float d[4];
    float at[4];
    float fw[4];
    int off;
    unsigned int n;
    unsigned int i;
    Item **p;
    Item *o;
    Cls *cls;
    float *fwd;
    float *atp;
    Row *r;
    float len2;
    float inv;
    float scale;
    long result;

    n = func_01B980(buf, 0x10, pos, p6, p7, p8, 1);
    i = 0;
    if (i < n) {
        off = idx << 4;
        p = buf;
        do {
            o = *p;
            if (o != skip && o->cls->handler != 0 && (func_0161A0(o) == 0 || func_039F50(o->link->first, skip) != 0)) {
                fwd = o->fwd;
                Sub3(d, o->pos, pos);
                d[3] = 0.0f;
                len2 = d[0] * d[0] + d[1] * d[1] + d[2] * d[2];
                if (len2 < 2.3841858e-07f) {
                    Copy3(d, fwd);
                } else {
                    inv = 1.0f / sqrtf(len2);
                    d[0] = inv * d[0];
                    d[1] = inv * d[1];
                    d[2] = inv * d[2];
                }
                atp = at;
                Copy3(at, o->pos);
                atp[3] = 1.0f;
                fw[3] = 0.0f;
                Copy3(fw, d);
                cls = o->cls;
                if (cls->handler == 0) {
                    result = -1;
                } else {
                    r = (Row *)((char *)D_00207C58 + off);
                    if (r->mode < 0) {
                        scale = r->scale;
                    } else if (r->mode < 2) {
                        scale = r->scale;
                    } else if (r->mode == 2) {
                        scale = r->scale * 0.5f;
                    } else {
                        scale = r->scale;
                    }
                    result = cls->handler(scale, o, r->a, r->b, atp, fw, skip);
                }
                if (x != 0 && y != 0) {
                    func_0160C8(x, y, o, result);
                }
            }
            i++;
            p++;
        } while (i < n);
    }
    return n;
}
