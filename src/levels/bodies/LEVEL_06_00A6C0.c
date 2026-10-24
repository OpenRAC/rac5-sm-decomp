/* LEVEL_06:00A6C0 -- hands the three panels and the three floats of the object
   held by D_001DE154 to func_002108. */
extern char *D_001DE154;

void func_002108(char *a0, char *a1, char *a2, float f12, float f13,
                 float f14);

void func_00A6C0(void)
{
    char *p = D_001DE154;

    func_002108(p + 0x30, p + 0x2CC, p + 0x2F0, *(float *)(p + 0x30C),
                *(float *)(p + 0x318), *(float *)(p + 0x324));
}
