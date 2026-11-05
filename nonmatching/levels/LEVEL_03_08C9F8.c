/* USA LEVEL_03:0x08C9F8, 20 retail bytes.
 * Pinned C links to 20 bytes but differs at body byte 2: the
 * source-global address and copied word occupy the opposite
 * temporary registers. Revisit the source-level record type or
 * a narrowly qualified compiler route, with controls for prior
 * accepted global copies. This source is uncounted.
 */
extern int D_0020E9D8;
extern int D_0020E9D0;

void func_08C9F8(void)
{
    D_0020E9D8 = D_0020E9D0;
}
