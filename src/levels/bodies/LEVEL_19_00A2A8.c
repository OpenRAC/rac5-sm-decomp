/* LEVEL_19.REL:0x00A2A8 -- relays the shared page's three areas and three
   levels to the emitter. */
extern char *D_0019BE5C;
extern void func_001D00(void *a0, void *a1, void *a2, float f12, float f13,
                        float f14);

void func_00A2A8(void)
{
    char *r = D_0019BE5C;

    func_001D00(r + 0x30, r + 0x2CC, r + 0x2F0, *(float *)(r + 0x30C),
                *(float *)(r + 0x318), *(float *)(r + 0x324));
}
