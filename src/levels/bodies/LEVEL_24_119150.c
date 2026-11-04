/* LEVEL_24:119150 -- sum of the four squares of the record, then the three
   erased calls in a row. */
typedef struct {
    float x;
    float y;
    float z;
    float w;
} V4;

extern double func_1BC018(float value);
extern double sqrt(double value);
extern void func_1BBD28(double value);

void func_119150(V4 *a0)
{
    float s = a0->w*a0->w + a0->x*a0->x + a0->y*a0->y + a0->z*a0->z;

    func_1BBD28(sqrt(func_1BC018(s)));
}
