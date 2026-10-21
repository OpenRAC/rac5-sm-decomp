/* LEVEL_01:0x126270 -- the double dot product is written back scaled, then
   the projection of a1 on a2 is stored. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

void func_126270(Vec3 *a0, Vec3 *a1, Vec3 *a2)
{
    float s = a1->x * a2->x + a1->y * a2->y + a1->z * a2->z;
    float px;
    float py;
    float pz;

    s = s + s;
    px = s * a2->x;
    a0->x = px;
    py = s * a2->y;
    a0->y = py;
    pz = s * a2->z;
    a0->z = pz;
    a0->x = a1->x - px;
    a0->y = a1->y - py;
    a0->z = a1->z - pz;
}
