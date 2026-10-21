/* LEVEL_10:0x019E80 -- copies the global vector into the caller's record
   and hands the record back. */
typedef struct {
    float x;
    float y;
    float z;
} Vector;

extern Vector D_00238FE8;

Vector *func_019E80(Vector *dst)
{
    *dst = D_00238FE8;
    return dst;
}
