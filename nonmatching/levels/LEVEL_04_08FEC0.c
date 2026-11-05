/* USA LEVEL_04:0x08FEC0, 20 retail bytes.
 * Pinned C links to 20 bytes but differs at body byte 2: the
 * source-global address and copied word occupy the opposite
 * temporary registers. Revisit the source-level record type or
 * a narrowly qualified compiler route, with controls for prior
 * accepted global copies. This source is uncounted.
 */
extern int D_0020F818;
extern int D_0020F810;

void func_08FEC0(void)
{
    D_0020F818 = D_0020F810;
}
