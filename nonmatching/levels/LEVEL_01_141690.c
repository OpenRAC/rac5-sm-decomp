/* LEVEL_01.REL:0x141690: Ghidra body 184 bytes.
 * Pinned pure C links 116 bytes and first differs at +2.
 * Recheck target pointer aliasing and repeated vertex stores. No matching credit.
 */
void func_141690(char *record)
{
    float x = *(float *)(record + 0x20) * 0.375f;
    char *target = **(char ***)(record + 0x58);
    float y = *(float *)(record + 0x24) * 0.375f;
    float z = *(float *)(record + 0x28) * 0.375f;
    *(float *)(target + 0x0c) = *(float *)(record + 0x30) + x;
    *(float *)(target + 0x10) = *(float *)(record + 0x34) + y;
    *(float *)(target + 0x14) = *(float *)(record + 0x38) + z;
    *(float *)(target + 0x20) = *(float *)(record + 0x30) - x;
    *(float *)(target + 0x24) = *(float *)(record + 0x34) - y;
    *(float *)(target + 0x28) = *(float *)(record + 0x38) - z;
}
