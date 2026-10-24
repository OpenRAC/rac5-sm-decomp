/* LEVEL_07:0x01A9F0 -- recopie le quadruplet de reference dans le
   mobile. */

typedef struct {
    float x;
    float y;
    float z;
    float w;
} V4;

extern V4 D_00245460;

void func_01A9F0(V4 *a0)
{
    a0->x = D_00245460.x;
    a0->y = D_00245460.y;
    a0->z = D_00245460.z;
    a0->w = D_00245460.w;
}
