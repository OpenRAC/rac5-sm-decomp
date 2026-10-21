/* LEVEL_04:0x1BC6C8 -- a fixed point value returned by the helper is turned
   into a float and interpolated between the two fields of the object. */
typedef struct {
    char pad[0x04];
    float f04;
    float f08;
} Obj;

extern int func_000000(void);

float func_1BC6C8(void *a0)
{
    Obj *o = *(Obj **)((char *)a0 + 0x54);
    float a = o->f04;
    float d = o->f08 - a;

    return a + d * ((float)func_000000() * 4.6566129e-10f);
}
