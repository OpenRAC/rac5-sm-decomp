/* LEVEL_06:0x0E6218 -- the reciprocal of a radius is stored in the
   object, after the helper has been told about the new value. */
typedef struct {
    float f;
} Src;

typedef struct {
    char pad[0x14];
    Src *link;
    float value;
} Dst;

void func_090188(void *a, int b, int c);

void func_0E6218(Dst *a0, int a1, Src *a2)
{
    func_090188(a0, a1, 1);
    a0->link = a2;
    a0->value = 1.0f / a2->f;
}
