/* LEVEL_20:0DB388 -- the length of the vector (fields 0xC, 0x00, 0x04, 0x08),
   squared, handed to func_0F9510 then func_000000 then func_0F9220. */
typedef struct {
    float f_00;
    float f_04;
    float f_08;
    float f_0C;
} Vec;

int func_0F9510(float x);
int func_000000(int a0);
int func_0F9220(int a0);

void func_0DB388(Vec *a0)
{
    func_0F9220(func_000000(func_0F9510(
        a0->f_0C * a0->f_0C + a0->f_00 * a0->f_00 +
        a0->f_04 * a0->f_04 + a0->f_08 * a0->f_08)));
}
