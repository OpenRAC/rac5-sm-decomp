/* LEVEL_04:0x1D7C98 -- writes the entry's scale times its first two factors into the output pair. */
typedef struct {
    char pad00[4];
    float s;
    float a;
    float b;
} Entry;

typedef struct {
    char pad00[0x58];
    Entry *e;
} Obj;

void func_1D7C98(Obj *o, float *out)
{
    Entry *e;
    float s;

    e = o->e;
    s = e->s;
    out[0] = s * e->a;
    out[1] = s * e->b;
}
