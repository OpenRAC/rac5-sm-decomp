/* LEVEL_05:0x019D98 -- copies the global vector into the caller's record
   and hands the record back. */
typedef struct {
    float x;
    float y;
    float z;
} Vector;

extern Vector D_0021B8E8;

Vector *func_019D98(Vector *dst)
{
    *dst = D_0021B8E8;
    return dst;
}
