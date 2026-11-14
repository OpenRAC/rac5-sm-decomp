/* LEVEL_09:0x1B5D08 -- placement copy of LEVEL_07_1DBD58.c: copies the object's position to the output vector, then queries the helper four times against consecutive vectors and stores the four results. */
typedef struct {
    float x, y, z;
} V3;

typedef struct {
    char pad00[0x30];
    V3 pos;
} Obj;

extern char *func_1B6040(float *m, int unused, float *out, int flag);

static __inline__ void Copy3(V3 *d, V3 *s)
{
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
}

void func_1B5D08(Obj *o, V3 *out, V3 *dirs, char **results, int arg)
{
    unsigned int i;

    Copy3(out, &o->pos);
    for (i = 0; i < 4; i++) {
        results[i] = func_1B6040((float *)o, (int)out, (float *)&dirs[i], arg);
    }
}
