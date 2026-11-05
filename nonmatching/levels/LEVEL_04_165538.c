/* USA LEVEL_04:0x165538, 48 retail bytes; three raw-identical candidate sites.
 * Pinned C links to 44 bytes, first difference at body byte 16: it shortens
 * the second-byte equality result and final boolean move. Revisit with a
 * source-level result lifetime that keeps the retail branch layout without
 * artificial compiler steering. This source is uncounted.
 */
int func_165538(char *object, unsigned char first, unsigned char second)
{
    unsigned char *bytes = *(unsigned char **)(object + 0x58);
    return bytes[0] == first && bytes[1] == second;
}
