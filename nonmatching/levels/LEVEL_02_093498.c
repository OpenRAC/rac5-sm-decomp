/* USA LEVEL_02:0x093498, 20 retail bytes.
 * Pinned C links to 20 bytes but differs at body byte 2: the
 * source-global address and copied word occupy the opposite
 * temporary registers. Revisit the source-level record type or
 * a narrowly qualified compiler route, with controls for prior
 * accepted global copies. This source is uncounted.
 */
extern int D_0020B318;
extern int D_0020B310;

void func_093498(void)
{
    D_0020B318 = D_0020B310;
}
