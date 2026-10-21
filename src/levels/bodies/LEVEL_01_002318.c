/* LEVEL_01:0x002318 -- stores one float and writes back the angle and the
   length of the (c,d) vector. */
typedef struct {
    float f0;
} Obj;

extern float atan2f(float y, float x);
extern float sqrtf(float x);

void func_002318(Obj *o, float *outA, float *outB, float a, float b, float c,
                 float d)
{
    o->f0 = a;
    *outA = b - atan2f(d, c);
    *outB = sqrtf(c * c + d * d);
}
