/* LEVEL_08.REL:0x01AC70 -- copies the four floats of the global record at
   0x0027EDE0 into the argument vector, field by field. */
typedef struct {
    float x;
    float y;
    float z;
    float w;
} Vec4;

extern Vec4 D_0027EDE0;

void func_01AC70(Vec4 *a0)
{
    a0->x = D_0027EDE0.x;
    a0->y = D_0027EDE0.y;
    a0->z = D_0027EDE0.z;
    a0->w = D_0027EDE0.w;
}
