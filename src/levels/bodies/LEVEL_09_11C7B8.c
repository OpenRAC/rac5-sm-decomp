/* LEVEL_09.REL:0x11C7B8 -- takes the squared length of the four floats at
   +0x0..+0xC and feeds it through func_1D51A8, the erased func_000000 and
   func_1D4EB8 in turn. */
typedef struct {
    float x;
    float y;
    float z;
    float w;
} Vec4;

extern void *func_1D51A8(float len);
extern void *func_000000(void *a);
extern void func_1D4EB8(void *a);

void func_11C7B8(Vec4 *a0)
{
    float len = a0->w * a0->w + a0->x * a0->x + a0->y * a0->y + a0->z * a0->z;

    func_1D4EB8(func_000000(func_1D51A8(len)));
}
