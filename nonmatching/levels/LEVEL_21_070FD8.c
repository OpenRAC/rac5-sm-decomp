/* USA LEVEL_21:0x070FD8, 20 retail bytes.
 * Pinned C links to 20 bytes but differs at body byte 2: the
 * source-global address and copied word occupy the opposite
 * temporary registers. Revisit the source-level record type or
 * a narrowly qualified compiler route, with controls for prior
 * accepted global copies. This source is uncounted.
 */
extern int D_0014AFD8;
extern int D_0014AFD0;

void func_070FD8(void)
{
    D_0014AFD8 = D_0014AFD0;
}
