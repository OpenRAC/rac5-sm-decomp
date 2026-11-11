/* LEVEL_09.REL:0x11C7B8 -- takes the squared length of the four floats at
   +0x0..+0xC and feeds it through func_1D51A8, the erased sqrt and
   func_1D4EB8 in turn. */
typedef struct {
    float x;
    float y;
    float z;
    float w;
} Vec4;

extern double func_1D51A8(float value);
extern double sqrt(double value);
extern void func_1D4EB8(double value);

void func_11C7B8(Vec4 *a0)
{
    float len = a0->w * a0->w + a0->x * a0->x + a0->y * a0->y + a0->z * a0->z;

    func_1D4EB8(sqrt(func_1D51A8(len)));
}
