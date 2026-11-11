/* LEVEL_03:0x01A088 -- recopie le triplet de reference dans le mobile. */

typedef struct {
    float x;
    float y;
    float z;
} V3;

extern V3 D_0024A9E0;

void func_01A088(V3 *a0)
{
    a0->x = D_0024A9E0.x;
    a0->y = D_0024A9E0.y;
    a0->z = D_0024A9E0.z;
}
