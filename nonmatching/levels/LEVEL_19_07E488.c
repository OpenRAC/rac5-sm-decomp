/* USA LEVEL_19:0x07E488, 20 retail bytes.
 * Pinned C links to 20 bytes but differs at body byte 2: the
 * source-global address and copied word occupy the opposite
 * temporary registers. Revisit the source-level record type or
 * a narrowly qualified compiler route, with controls for prior
 * accepted global copies. This source is uncounted.
 */
extern int D_001A5508;
extern int D_001A5500;

void func_07E488(void)
{
    D_001A5508 = D_001A5500;
}
