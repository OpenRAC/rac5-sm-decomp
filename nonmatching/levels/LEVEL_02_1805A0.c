/* USA LEVEL_02:0x1805A0, 60 retail bytes; four raw-identical candidate sites.
 * Pinned C links to 60 bytes but differs at body byte 18: the byte index and
 * slot-base pointer use the opposite temporary registers. A typed record,
 * reversed pointer expression and qualified SDK/GNU trial profiles preserve
 * the same difference. Recover the original record access shape or a measured
 * compiler schedule before retrying. This source is uncounted.
 */
void func_1805A0(char *object)
{
    char *child = *(char **)(object + 0x54);
    char *target = *(char **)(child + 0x18);
    if (target != 0) {
        unsigned int index = *(unsigned char *)(target + 0x45);
        int *slots = *(int **)(target + 0x54);
        slots[index] = *(int *)(child + 8);
        *(unsigned char *)(target + 0x45) = *(unsigned char *)(target + 0x45) + 1;
    }
}
