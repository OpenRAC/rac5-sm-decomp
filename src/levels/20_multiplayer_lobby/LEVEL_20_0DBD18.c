/* LEVEL_20:0x0DBD18 -- forwards the vector and the extra angle to
   func_0DBC08. */
typedef struct {
    float f_00;
    float f_04;
    float f_08;
} V;

extern void func_0DBC08(void *a0, float x, float y, float z, float w);

void func_0DBD18(void *a0, V *a1, float w)
{
    func_0DBC08(a0, a1->f_00, a1->f_04, a1->f_08, w);
}
