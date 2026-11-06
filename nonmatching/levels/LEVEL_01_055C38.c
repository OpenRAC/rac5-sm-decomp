/* LEVEL_01.REL:0x055C38: 20 USA placements.
 * Ghidra body: 96 bytes; pinned C links 92 bytes and first differs at +10.
 * The three-component acceleration has a different source/target load order at byte 10. Reopen with evidenced vector aliasing and value lifetimes.
 * This source has no matching credit.
 */
void func_055C38(void *record, float scale)
{
    float *source = (float *)((char *)record + 0x2f4);
    float *target = (float *)((char *)record + 0xc5c);
    float value[3];
    value[0] = scale * source[0];
    target[0] = target[0] + value[0];
    value[1] = scale * source[1];
    target[1] = target[1] + value[1];
    value[2] = scale * source[2];
    target[2] = target[2] + value[2];
}
