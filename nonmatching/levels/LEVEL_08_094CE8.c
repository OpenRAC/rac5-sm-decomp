/* USA LEVEL_08:0x094CE8, 20 retail bytes.
 * Pinned C links to 20 bytes but differs at body byte 2: the
 * source-global address and copied word occupy the opposite
 * temporary registers. Revisit the source-level record type or
 * a narrowly qualified compiler route, with controls for prior
 * accepted global copies. This source is uncounted.
 */
extern int D_0023F218;
extern int D_0023F210;

void func_094CE8(void)
{
    D_0023F218 = D_0023F210;
}
