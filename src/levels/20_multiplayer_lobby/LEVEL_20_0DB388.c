/* LEVEL_20:0DB388 -- the length of the vector (fields 0xC, 0x00, 0x04, 0x08),
   squared, handed to func_0F9510 then sqrt then func_0F9220. */
typedef struct {
    float f_00;
    float f_04;
    float f_08;
    float f_0C;
} Vec;

extern double func_0F9510(float value);
extern double sqrt(double value);
extern void func_0F9220(double value);

void func_0DB388(Vec *a0)
{
    func_0F9220(sqrt(func_0F9510(
        a0->f_0C * a0->f_0C + a0->f_00 * a0->f_00 +
        a0->f_04 * a0->f_04 + a0->f_08 * a0->f_08)));
}
