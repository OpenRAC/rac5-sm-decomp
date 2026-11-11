/* LEVEL_15:0x0E9A40 -- calls the helper with the three floats of the
   caller's vector and the caller's float argument. */
typedef struct {
    float f_00;
    float f_04;
    float f_08;
} V3;

extern void func_0E9930(float a0, float a1, float a2, float a3);

void func_0E9A40(int a0, V3 *a1, float a2)
{
    func_0E9930(a1->f_00, a1->f_04, a1->f_08, a2);
}
