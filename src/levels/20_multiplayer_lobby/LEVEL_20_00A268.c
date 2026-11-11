/* LEVEL_20:00A268 -- hands the three sub-blocks and three floats of the
   global record to the level's routine. */
extern char *D_000FD3C4;
extern void func_001CC0(void *a0, void *a1, void *a2, float f12, float f13,
                        float f14);
void func_00A268(void)
{
    char *p = D_000FD3C4;

    func_001CC0(p + 0x30, p + 0x2CC, p + 0x2F0,
                *(float *)(p + 0x30C), *(float *)(p + 0x318),
                *(float *)(p + 0x324));
}
