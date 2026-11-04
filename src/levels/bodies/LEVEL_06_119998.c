/* LEVEL_06.REL:0x119998 -- squares the four components, sums them and routes
   the result through the erased helper into the level hook. */
typedef struct {
    float f_00;
    float f_04;
    float f_08;
    float f_0C;
} Vec;

extern double func_1DA288(float value);
extern double sqrt(double value);
extern void func_1D9F98(double value);

void func_119998(Vec *a0)
{
    func_1D9F98(sqrt(func_1DA288(
        a0->f_0C * a0->f_0C + a0->f_00 * a0->f_00
        + a0->f_04 * a0->f_04 + a0->f_08 * a0->f_08)));
}
