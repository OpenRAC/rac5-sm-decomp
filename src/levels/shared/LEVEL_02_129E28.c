/* LEVEL_02:0x129E28 -- copies nine floats, field by field, from a
   source whose fields sit at 0x00,0x04,0x08 / 0x10,0x14,0x18 / 0x20,0x24,0x28
   into a contiguous destination. */
typedef struct {
    float f[9];
} Dst;

typedef struct {
    float a[3];
    float pad0;
    float b[3];
    float pad1;
    float c[3];
} Src;

void func_129E28(Dst *dst, Src *src)
{
    dst->f[0] = src->a[0];
    dst->f[1] = src->a[1];
    dst->f[2] = src->a[2];
    dst->f[3] = src->b[0];
    dst->f[4] = src->b[1];
    dst->f[5] = src->b[2];
    dst->f[6] = src->c[0];
    dst->f[7] = src->c[1];
    dst->f[8] = src->c[2];
}
