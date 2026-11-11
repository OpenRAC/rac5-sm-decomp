/* LEVEL_23:00A6D0 -- hands the three sub-blocks and three floats of the
   global record to the level's routine. */
extern char *D_001C2654;
extern void func_002108(void *a0, void *a1, void *a2, float f12, float f13,
                        float f14);
void func_00A6D0(void)
{
    char *p = D_001C2654;

    func_002108(p + 0x30, p + 0x2CC, p + 0x2F0,
                *(float *)(p + 0x30C), *(float *)(p + 0x318),
                *(float *)(p + 0x324));
}
