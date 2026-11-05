/* USA LEVEL_10:0x08D138, 20 retail bytes.
 * Pinned C links to 20 bytes but differs at body byte 2: the
 * source-global address and copied word occupy the opposite
 * temporary registers. Revisit the source-level record type or
 * a narrowly qualified compiler route, with controls for prior
 * accepted global copies. This source is uncounted.
 */
extern int D_001FF358;
extern int D_001FF350;

void func_08D138(void)
{
    D_001FF358 = D_001FF350;
}
