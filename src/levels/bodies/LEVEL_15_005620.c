/* LEVEL_15:0x005620 -- adds the vector built by the helper to the
   caller's second vector and stores the result in the first. */
typedef struct {
    float f_00;
    float f_04;
    float f_08;
} V3;

extern void func_00055B8(V3 *a0, V3 *a1);

void func_005620(V3 *a0, V3 *a1, V3 *a2)
{
    V3 t;

    func_00055B8(&t, a2);
    a0->f_00 = a1->f_00 + t.f_00;
    a0->f_04 = a1->f_04 + t.f_04;
    a0->f_08 = a1->f_08 + t.f_08;
}
