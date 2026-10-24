/* LEVEL_22:00A440 -- hands the three panels and the three floats of the object
   held by D_0014E5D4 to func_001E78. */
extern char *D_0014E5D4;

void func_001E78(char *a0, char *a1, char *a2, float f12, float f13,
                 float f14);

void func_00A440(void)
{
    char *p = D_0014E5D4;

    func_001E78(p + 0x30, p + 0x2CC, p + 0x2F0, *(float *)(p + 0x30C),
                *(float *)(p + 0x318), *(float *)(p + 0x324));
}
