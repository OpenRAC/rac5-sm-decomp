/* LEVEL_03.REL:0x122108 -- relays the first handle, the three words of the
   vector and the caller's scale to func_121FF8. */
typedef struct {
    float f_00;
    float f_04;
    float f_08;
} Vec;

void func_121FF8(void *a0, float a, float b, float c, float d);

void func_122108(void *a0, Vec *a1, float x)
{
    func_121FF8(a0, a1->f_00, a1->f_04, a1->f_08, x);
}
