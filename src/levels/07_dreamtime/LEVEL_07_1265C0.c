/* LEVEL_07:1265C0 -- sum of the four squares of the record, then the three
   erased calls in a row. */
typedef struct {
    float x;
    float y;
    float z;
    float w;
} V4;

extern double func_1FF6B8(float value);
extern double sqrt(double value);
extern void func_1FF3C8(double value);

void func_1265C0(V4 *a0)
{
    float s = a0->w*a0->w + a0->x*a0->x + a0->y*a0->y + a0->z*a0->z;

    func_1FF3C8(sqrt(func_1FF6B8(s)));
}
