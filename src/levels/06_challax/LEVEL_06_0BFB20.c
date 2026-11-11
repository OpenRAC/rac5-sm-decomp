/* LEVEL_06:0x0BFB20 -- copy a four-float vector into the global.
   The retail copies sixteen bytes as two float quadwords. */
typedef struct {
    float x;
    float y;
    float z;
    float w;
} Vec4;

extern Vec4 D_318798;

void func_0BFB20(Vec4 *src)
{
    D_318798 = *src;
}
