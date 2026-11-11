/* LEVEL_09.REL:0x00A6C0 -- relays the shared page's three areas and levels. */
extern char *D_001D9054;
extern void func_002108(void *a0, void *a1, void *a2, float f12, float f13,
                        float f14);
void func_00A6C0(void)
{
    char *r = D_001D9054;
    func_002108(r + 0x30, r + 0x2CC, r + 0x2F0, *(float *)(r + 0x30C),
                *(float *)(r + 0x318), *(float *)(r + 0x324));
}
