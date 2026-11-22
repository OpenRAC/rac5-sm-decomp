/* LEVEL_06:0x1355E8 -- placement copy of LEVEL_01_13EEF0.c: per-frame update of a ring of spinning sparks: ages the owner, spins every spark's coefficient pairs and places it between its anchor and the owner. */
typedef struct Cls {
    char pad_00[0x10];
    float vec[3];
} Cls;

typedef struct Rec {
    Cls *cls;
    float k[3];
    float from[3];
    char pad_1C[0x0C];
    float spin_a[16];
    float spin_b[16];
    char pad_A8[1];
} Rec;

typedef struct Part {
    char pad_00[0x28];
    unsigned int count;
    float t;
    char pad_30[4];
    char recs[1];
} Part;

typedef struct Obj {
    char pad_00[0x30];
    float pos[3];
    char pad_3C[9];
    unsigned char state;
    char pad_46[0x12];
    Part *part;
    char pad_5C[0x14];
    float life;
} Obj;

extern char D_0037E570[];

extern void func_0E79D8(float step, char *dst, float *v, int flag);
extern void func_135F90(Rec *rec, float sum, float *v);

static __inline__ float Spin(float *p)
{
    float x;
    float y;
    float ny;
    float nx;

    x = p[0];
    y = p[1];
    nx = p[2] * x - p[3] * y;
    ny = p[2] * y + p[3] * x;
    p[0] = nx;
    p[1] = ny;
    return ny;
}

static __inline__ void Lerp3(float *out, float *to, float *from, float t)
{
    out[0] = (to[0] - from[0]) * t + from[0];
    out[1] = (to[1] - from[1]) * t + from[1];
    out[2] = (to[2] - from[2]) * t + from[2];
}

static __inline__ void AddScaled3(float *out, float *k, float s)
{
    out[0] = out[0] + k[0] * s;
    out[1] = out[1] + k[1] * s;
    out[2] = out[2] + k[2] * s;
}

static __inline__ void Copy3(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

void func_1355E8(Obj *o)
{
    float v[8];
    Part *part;
    Rec *rec;
    Cls *cls;
    float *p;
    unsigned int i;
    unsigned int j;
    int done;
    float life;
    float sum;
    float fx;
    float fy;
    float fz;

    part = o->part;
    o->life = o->life - 0.14285715f;
    part->t = part->t + 0.33333334f;
    done = 0;
    if (o->life <= 0.0f) {
        o->life = 0.0f;
        done = 1;
    }
    v[7] = part->t;
    i = 0;
    if (part->count != 0) {
        do {
            life = o->life;
            rec = (Rec *)(part->recs + i * 0xA8);
            sum = 0.0f;
            fx = o->pos[0];
            fy = o->pos[1];
            fz = o->pos[2];
            cls = rec->cls;
            v[0] = (fx - rec->from[0]) * life + rec->from[0];
            v[1] = (fy - rec->from[1]) * life + rec->from[1];
            v[2] = (fz - rec->from[2]) * life + rec->from[2];
            p = rec->spin_a;
            for (j = 0; j < 4; j++) {
                sum = sum + Spin(p);
                p = p + 4;
            }
            v[6] = 1.0f;
            for (j = 0; j < 4; j++) {
                Spin(rec->spin_b + j * 4);
                v[6] = v[6] + rec->spin_b[j * 4 + 1];
            }
            AddScaled3(v, rec->k, sum);
            Copy3(v + 3, cls->vec);
            func_0E79D8(0.04000000283122063f, D_0037E570 + i * 0x20, v, 0);
            if (done) {
                func_135F90(rec, sum, v);
            }
            i++;
        } while (i < part->count);
    }
    if (done) {
        o->state = 2;
        o->life = 1.0f;
    }
}
