/* LEVEL_24:00A4C8 -- hands the three panels and the three floats of the object
   held by D_001BFED4 to func_001F10. */
extern char *D_001BFED4;

void func_001F10(char *a0, char *a1, char *a2, float f12, float f13,
                 float f14);

void func_00A4C8(void)
{
    char *p = D_001BFED4;

    func_001F10(p + 0x30, p + 0x2CC, p + 0x2F0, *(float *)(p + 0x30C),
                *(float *)(p + 0x318), *(float *)(p + 0x324));
}
