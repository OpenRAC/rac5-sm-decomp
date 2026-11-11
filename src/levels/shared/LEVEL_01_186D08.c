/* LEVEL_01.REL @ 0x186D08 — 92 octets, lwc1/swc1 */
typedef struct {
    float x, y, z;
} Vec3;

typedef struct {
    float v00;
    float v04;
    Vec3 a;
    Vec3 b;
    float v20;
    float v24;
    float v28;
    float v2C;
    Vec3 c;
} Rec;

void func_186D08(Rec *a0)
{
    Vec3 *pa = (Vec3 *)((char *)a0 + 8);
    Vec3 *pb = (Vec3 *)((char *)a0 + 0x14);
    Vec3 *pc = (Vec3 *)((char *)a0 + 0x30);
    float d0 = a0->v04 - a0->v00;
    float d1 = pa->x - pb->x;

    pc->x = d1;
    a0->v2C = d0 * 4.6566128730773926e-10f;
    pc->y = pa->y - pb->y;
    pc->z = pa->z - pb->z;
}
