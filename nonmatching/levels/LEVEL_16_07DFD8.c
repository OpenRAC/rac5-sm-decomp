/* USA LEVEL_16:0x07DFD8, 20 retail bytes.
 * Pinned C links to 20 bytes but differs at body byte 2: the
 * source-global address and copied word occupy the opposite
 * temporary registers. Revisit the source-level record type or
 * a narrowly qualified compiler route, with controls for prior
 * accepted global copies. This source is uncounted.
 */
extern int D_001A4388;
extern int D_001A4380;

void func_07DFD8(void)
{
    D_001A4388 = D_001A4380;
}
