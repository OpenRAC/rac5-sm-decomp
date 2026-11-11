/* LEVEL_22:0x073128 -- hands the object's triple and the caller's word. */
typedef struct {
    char pad[0x30];
    float f_30;
    float f_34;
    float f_38;
} Obj;

extern void func_0FE3B8(int a0, float a1, float a2, float a3);

void func_073128(Obj *a0, int a1)
{
    func_0FE3B8(a1, a0->f_30, a0->f_34, a0->f_38);
}
