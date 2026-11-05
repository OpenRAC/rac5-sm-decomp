/* USA LEVEL_07:0x08EC50, 20 retail bytes.
 * Pinned C links to 20 bytes but differs at body byte 2: the
 * source-global address and copied word occupy the opposite
 * temporary registers. Revisit the source-level record type or
 * a narrowly qualified compiler route, with controls for prior
 * accepted global copies. This source is uncounted.
 */
extern int D_0020A658;
extern int D_0020A650;

void func_08EC50(void)
{
    D_0020A658 = D_0020A650;
}
