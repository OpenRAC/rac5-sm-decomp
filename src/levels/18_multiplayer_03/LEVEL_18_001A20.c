/* LEVEL_18:0x001A20 -- adds the vector produced by func_0019D8 to the third
   argument and stores the result in the first. */
typedef struct {
    float x;
    float y;
    float z;
} V3;

extern void func_0019D8(V3 *out, char *sub, float p, float q, float r, float s);

void func_001A20(V3 *a0, char *sub, V3 *a2, float p, float q, float r, float s)
{
    V3 t;
    func_0019D8(&t, sub, p, q, r, s);
    a0->x = a2->x + t.x;
    a0->y = a2->y + t.y;
    a0->z = a2->z + t.z;
}
