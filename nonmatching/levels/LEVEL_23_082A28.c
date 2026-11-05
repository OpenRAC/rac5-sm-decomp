/* USA LEVEL_23:0x082A28, 20 retail bytes.
 * Pinned C links to 20 bytes but differs at body byte 2: the
 * source-global address and copied word occupy the opposite
 * temporary registers. Revisit the source-level record type or
 * a narrowly qualified compiler route, with controls for prior
 * accepted global copies. This source is uncounted.
 */
extern int D_001C9758;
extern int D_001C9750;

void func_082A28(void)
{
    D_001C9758 = D_001C9750;
}
