/* USA LEVEL_09:0x089520, 20 retail bytes.
 * Pinned C links to 20 bytes but differs at body byte 2: the
 * source-global address and copied word occupy the opposite
 * temporary registers. Revisit the source-level record type or
 * a narrowly qualified compiler route, with controls for prior
 * accepted global copies. This source is uncounted.
 */
extern int D_001E0158;
extern int D_001E0150;

void func_089520(void)
{
    D_001E0158 = D_001E0150;
}
