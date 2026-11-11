/* LEVEL_17.REL:0739C8 -- passes the caller's target and the three floats at
   0x30 to func_103E88. */
typedef struct {
    char pad_00[0x30];
    float f_30;
    float f_34;
    float f_38;
} Obj;

extern void func_103E88(void *a0, float a1, float a2, float a3);

void func_0739C8(Obj *a0, void *a1)
{
    func_103E88(a1, a0->f_30, a0->f_34, a0->f_38);
}
