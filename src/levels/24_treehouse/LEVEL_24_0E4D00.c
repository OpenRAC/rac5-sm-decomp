/* LEVEL_24:0x0E4D00 -- placement copy of LEVEL_04_0F4628.c: creates a record of the given kind and fills it from the caller: copies the position and direction vectors, stores the two integer parameters and four float parameters, and clears the two tail words; returns the record. */
typedef struct {
    int mode;
    int pad[3];
} Req;

typedef struct {
    float pos[3];
    float dir[3];
    int w18;
    int w1C;
    int w20;
    float f24;
    float f28;
    float f2C;
    float f30;
    int w34;
    int w38;
} Rec;

static __inline__ void Copy3(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

extern Rec *func_090580(Req *req, int kind, int a);

Rec *func_0E4D00(int kind, float *pos, float *dir, int a, int b, float f0, float f1, float f2, float f3)
{
    Req req;
    Rec *r;

    req.mode = 1;
    r = func_090580(&req, kind, 1);
    Copy3(r->pos, pos);
    Copy3(r->dir, dir);
    r->w18 = a;
    r->w20 = b;
    r->f24 = f0;
    r->f28 = f1;
    r->f30 = f2;
    r->f2C = f3;
    r->w38 = 0;
    r->w34 = 0;
    return r;
}
