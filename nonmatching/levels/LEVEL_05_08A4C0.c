/* USA LEVEL_05:0x08A4C0, 20 retail bytes.
 * Pinned C links to 20 bytes but differs at body byte 2: the
 * source-global address and copied word occupy the opposite
 * temporary registers. Revisit the source-level record type or
 * a narrowly qualified compiler route, with controls for prior
 * accepted global copies. This source is uncounted.
 */
extern int D_001E56D8;
extern int D_001E56D0;

void func_08A4C0(void)
{
    D_001E56D8 = D_001E56D0;
}
