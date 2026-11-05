/* USA LEVEL_06:0x085A18, 20 retail bytes.
 * Pinned C links to 20 bytes but differs at body byte 2: the
 * source-global address and copied word occupy the opposite
 * temporary registers. Revisit the source-level record type or
 * a narrowly qualified compiler route, with controls for prior
 * accepted global copies. This source is uncounted.
 */
extern int D_001E5258;
extern int D_001E5250;

void func_085A18(void)
{
    D_001E5258 = D_001E5250;
}
