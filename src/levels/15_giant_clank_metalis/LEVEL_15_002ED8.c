/* LEVEL_15:0x002ED8 -- copy of a three-float vector into a global struct.
   The destination is the vector field of a global record; the vector itself
   is copied as one aggregate (a quadword move plus a word move). */

typedef struct {
    float x;
    float y;
    float z;
} V3;

typedef struct {
    char pad[0x1D8];
    V3 v;
} Record;

extern Record *D_143EBC;

void func_002ED8(V3 *src)
{
    Record *dst = D_143EBC;

    dst->v = *src;
}
