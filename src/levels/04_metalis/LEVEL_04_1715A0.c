/* LEVEL_04.REL:1715A0 -- passes two arguments, the floats at 0x0 and 0x8
   and the caller's float to func_1299D0. */
typedef struct {
    float f_00;
    char pad_04[0x4];
    float f_08;
} Obj;

extern void func_1299D0(void *a0, void *a1, float a2, float a3, float a4);

void func_1715A0(Obj *a0, void *a1, void *a2, float x)
{
    func_1299D0(a1, a2, a0->f_00, a0->f_08, x);
}
