/* LEVEL_16.REL:073298 -- passes the caller's target and the three floats at
   0x30 to func_104878. */
typedef struct {
    char pad_00[0x30];
    float f_30;
    float f_34;
    float f_38;
} Obj;

extern void func_104878(void *a0, float a1, float a2, float a3);

void func_073298(Obj *a0, void *a1)
{
    func_104878(a1, a0->f_30, a0->f_34, a0->f_38);
}
