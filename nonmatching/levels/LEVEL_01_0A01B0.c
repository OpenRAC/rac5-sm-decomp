/* LEVEL_01.REL:0x0A01B0: Ghidra body 72 bytes.
 * Pinned pure C links 68 bytes and first differs at +2.
 * Recheck array stride register allocation and stack candidate lifetime. No matching credit.
 */
extern float D_0029C698[];

void func_0A01B0(float value, int index)
{
    float candidate[4];
    float *selected;
    float *slot = &D_0029C698[index * 0x47];
    candidate[0] = value;
    selected = slot;
    if (*slot < value) {
        selected = candidate;
    }
    *slot = *selected;
}
