/* LEVEL_03:0x005B00 -- adds the vector produced by func_005A98 to the
   second argument and stores the result in the first. */
typedef struct {
    float x;
    float y;
    float z;
} V3;

extern void func_005A98(V3 *out, V3 *in);

void func_005B00(V3 *a0, V3 *a1, V3 *a2)
{
    V3 t;
    func_005A98(&t, a2);
    a0->x = a1->x + t.x;
    a0->y = a1->y + t.y;
    a0->z = a1->z + t.z;
}
