/* LEVEL_05.REL:11F040 -- squares the four floats of the record, adds them and
   feeds the length to the level's two routines. */
typedef struct {
    float f_00;
    float f_04;
    float f_08;
    float f_0C;
} Vec;

extern double func_1DA738(float value);
extern double sqrt(double value);
extern void func_1DA448(double value);

void func_11F040(Vec *a0)
{
    float len = a0->f_0C * a0->f_0C + a0->f_00 * a0->f_00
                + a0->f_04 * a0->f_04 + a0->f_08 * a0->f_08;

    func_1DA448(sqrt(func_1DA738(len)));
}
