/* USA LEVEL_01:0x08CDC8, 20 retail bytes.
 * Pinned C links to 20 bytes but differs at body byte 2: the
 * source-global address and copied word occupy the opposite
 * temporary registers. Revisit the source-level record type or
 * a narrowly qualified compiler route, with controls for prior
 * accepted global copies. This source is uncounted.
 */
extern int D_001F6358;
extern int D_001F6350;

void func_08CDC8(void)
{
    D_001F6358 = D_001F6350;
}
