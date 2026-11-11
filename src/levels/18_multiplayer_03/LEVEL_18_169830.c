/* LEVEL_18:0x169830 -- placement copy of LEVEL_17_15D1C0.c: tests whether the second object is within 4 units of the first. */
typedef struct Vec { float x, y, z; } Vec;
typedef struct V { char pad[0x30]; Vec pos; char pad2[0xB8]; void *p; } V;
extern int func_036BE8(V *);
extern int func_05C148(V *);
extern int func_1134D0(V *);
int func_169830(V *a, V *b)
{
    int r = 0;
    if (!func_036BE8(b) && b->p && !func_05C148(b) && !func_1134D0(b)) {
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
