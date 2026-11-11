/* LEVEL_17:0x15D1C0 -- tests whether the second object is within 4 units of the first. */
typedef struct Vec { float x, y, z; } Vec;
typedef struct V { char pad[0x30]; Vec pos; char pad2[0xB8]; void *p; } V;
extern int func_037C08(V *);
extern int func_05D070(V *);
extern int func_113EA8(V *);
int func_15D1C0(V *a, V *b)
{
    int r = 0;
    if (!func_037C08(b) && b->p && !func_05D070(b) && !func_113EA8(b)) {
        Vec *pa = &a->pos;
        Vec *pb = &b->pos;
        float dx = pb->x - pa->x;
        float dy = pb->y - pa->y;
        float dz = pb->z - pa->z;
        if (dx * dx + dy * dy + dz * dz < 16.0f)
            r = 1;
    }
    return r;
}
