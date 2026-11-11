/* LEVEL_08.REL @ 0x0BBF18 — 36 octets, lwc1/swc1 */
typedef struct {
    float x, y, z;
} Vec3;

extern Vec3 D_00245030;

void func_0BBF18(Vec3 *a0)
{
    D_00245030.x = a0->x;
    D_00245030.y = a0->y;
    D_00245030.z = a0->z;
}
