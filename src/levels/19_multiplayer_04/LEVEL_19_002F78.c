/* LEVEL_19:0x002F78 -- copy a three-float vector into a global record. */

typedef struct {
    float x;
    float y;
    float z;
} V3;

typedef struct {
    char pad[0x1D8];
    V3 v;
} Record;

extern Record *D_19BE5C;

void func_002F78(V3 *src)
{
    Record *dst = D_19BE5C;

    dst->v = *src;
}
