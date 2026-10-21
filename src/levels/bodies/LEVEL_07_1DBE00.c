/* LEVEL_07:0x1DBE00 -- copies the three floats of the record's tail vector into
   the caller's vector. */
typedef struct {
    float x;
    float y;
    float z;
} V3;

typedef struct {
    char pad[0x30];
    V3 v;
} Src;

void func_1DBE00(Src *a0, V3 *a1)
{
    V3 *s = &a0->v;
    a1->x = s->x;
    a1->y = s->y;
    a1->z = s->z;
}
