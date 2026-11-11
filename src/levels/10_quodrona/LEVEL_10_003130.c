/* LEVEL_10:0x003130 -- copy a three-float vector into a global record. */

typedef struct {
    float x;
    float y;
    float z;
} V3;

typedef struct {
    char pad[0x1D8];
    V3 v;
} Record;

extern Record *D_1F8254;

void func_003130(V3 *src)
{
    Record *dst = D_1F8254;

    dst->v = *src;
}
