/* LEVEL_18.REL:0x101470 -- takes the squared length of the four floats at
   +0x0..+0xC and feeds it through func_198280, the erased sqrt and
   func_197F90 in turn. */
typedef struct {
    float x;
    float y;
    float z;
    float w;
} Vec4;

extern double func_198280(float value);
extern double sqrt(double value);
extern void func_197F90(double value);

void func_101470(Vec4 *a0)
{
    float len = a0->w * a0->w + a0->x * a0->x + a0->y * a0->y + a0->z * a0->z;

    func_197F90(sqrt(func_198280(len)));
}
