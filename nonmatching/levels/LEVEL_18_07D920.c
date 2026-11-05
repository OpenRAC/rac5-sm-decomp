/* USA LEVEL_18:0x07D920, 20 retail bytes.
 * Pinned C links to 20 bytes but differs at body byte 2: the
 * source-global address and copied word occupy the opposite
 * temporary registers. Revisit the source-level record type or
 * a narrowly qualified compiler route, with controls for prior
 * accepted global copies. This source is uncounted.
 */
extern int D_001A5808;
extern int D_001A5800;

void func_07D920(void)
{
    D_001A5808 = D_001A5800;
}
