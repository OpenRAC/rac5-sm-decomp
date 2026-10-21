/* LEVEL_17:0x15B8F8 -- calls func_103D88 with the global, then copies the
   four floats of the first argument into the third. */
typedef struct {
    float x;
    float y;
    float z;
    float w;
} V4;

extern V4 D_1C82F8;

extern void func_103D88(void *a0, void *a1, V4 *a2);

void func_15B8F8(V4 *src, void *a1, V4 *dst)
{
    func_103D88(a1, src, &D_1C82F8);
    dst->x = src->x;
    dst->y = src->y;
    dst->z = src->z;
    dst->w = src->w;
}
