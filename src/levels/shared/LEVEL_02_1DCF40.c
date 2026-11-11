/* LEVEL_02.REL:0x1DCF40 -- copies three floats out of a sub-object. */
typedef struct {
    float x;
    float y;
    float z;
} V3;

typedef struct {
    char pad[0x58];
    void *p;
} Obj;

void func_1DCF40(Obj *a0, V3 *a1)
{
    float *s = (float *)a0->p + 0x34;

    a1->x = s[0];
    a1->y = s[1];
    a1->z = s[2];
}
