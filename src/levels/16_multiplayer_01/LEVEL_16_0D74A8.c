/* LEVEL_16:0x0D74A8 -- placement copy of LEVEL_01_0E8520.c: looks up the object's slot with the query, and when found spawns an effect there: the horizontal offset comes from the target position, the height is a random point between the config's low and high values; passes the config's other fields through. */
extern int rand(void);

typedef struct {
    int w0;
    int w4;
    float f8;
    float fC;
    float f10;
    int w14;
    int w18;
    int w1C;
} Cfg;

typedef struct {
    char pad00[4];
    float f4;
} Obj;

typedef struct {
    char pad00[0xC];
    char *table;
} Pool;

extern Pool *D_001B48AC;
extern int func_0F2218(Obj *o, float *out);
extern void func_0D7588(int a, Obj *o, char *e, float f0, float f1, float f2, int b, int c, int d, int f);

void func_0D74A8(Obj *o, Cfg *c)
{
    float v[4];
    int idx;
    char *e;
    float dx;
    float h;
    float lo;

    idx = func_0F2218(o, v);
    if (idx != -1) {
        e = D_001B48AC->table + idx * 0x4C + 8;
        lo = c->f8;
        dx = o->f4 - v[0];
        h = c->fC - lo;
        h = h * ((float)rand() * 4.656612873077393e-10f);
        func_0D7588(c->w4, o, e, dx, c->f10, lo + h, c->w0, c->w14, c->w18, c->w1C);
    }
}
