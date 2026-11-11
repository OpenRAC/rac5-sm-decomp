/* LEVEL_22:0x09FBF8 -- recopie le triplet du mobile dans le repere
   global. */

typedef struct {
    float x;
    float y;
    float z;
} V3;

extern V3 D_0015B4F0;

void func_09FBF8(V3 *a0)
{
    D_0015B4F0.x = a0->x;
    D_0015B4F0.y = a0->y;
    D_0015B4F0.z = a0->z;
}
