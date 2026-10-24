/* LEVEL_04.REL:0x00A4F0 -- relays the shared page's three areas and three
   levels to the emitter. */
extern char *D_002083D4;
extern void func_001F10(void *a0, void *a1, void *a2, float f12, float f13,
                        float f14);

void func_00A4F0(void)
{
    char *r = D_002083D4;

    func_001F10(r + 0x30, r + 0x2CC, r + 0x2F0, *(float *)(r + 0x30C),
                *(float *)(r + 0x318), *(float *)(r + 0x324));
}
