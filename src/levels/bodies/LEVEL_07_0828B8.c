/* LEVEL_07:0828B8 -- forwards the destination and the record's three floats. */
extern void func_129208(void *a0, float f12, float f13, float f14);
void func_0828B8(char *a0, void *a1)
{
    func_129208(a1, *(float *)(a0 + 0x30), *(float *)(a0 + 0x34),
                *(float *)(a0 + 0x38));
}
