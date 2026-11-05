/* USA LEVEL_22:0x131218, 44 retail bytes; two raw-identical candidate sites.
 * Pinned C also links to 44 bytes but first differs at body byte 4 in the
 * null/bounds branch layout. Early-return and result-variable forms did not
 * resolve it. Recover the original source condition ordering before retrying
 * both sites. This source is uncounted.
 */
int func_131218(char *object, unsigned int slot)
{
    char *child = *(char **)(object + 0x58);
    unsigned int index = slot & 0xFFu;
    if (child != 0 && index < 4)
        return *(unsigned char *)(child + 0x90 + index) != 0;
    return 0;
}
