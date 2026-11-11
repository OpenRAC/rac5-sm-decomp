/* LEVEL_06:0x11A430 -- forwards the vector and the extra angle to
   func_11A320. */
typedef struct {
    float f_00;
    float f_04;
    float f_08;
} V;

extern void func_11A320(void *a0, float x, float y, float z, float w);

void func_11A430(void *a0, V *a1, float w)
{
    func_11A320(a0, a1->f_00, a1->f_04, a1->f_08, w);
}
