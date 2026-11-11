/* LEVEL_03:080530 -- forwards the destination and the record's three floats. */
extern void func_1243E8(void *a0, float f12, float f13, float f14);
void func_080530(char *a0, void *a1)
{
    func_1243E8(a1, *(float *)(a0 + 0x30), *(float *)(a0 + 0x34),
                *(float *)(a0 + 0x38));
}
