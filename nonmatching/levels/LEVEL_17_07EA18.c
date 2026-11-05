/* USA LEVEL_17:0x07EA18, 20 retail bytes.
 * Pinned C links to 20 bytes but differs at body byte 2: the
 * source-global address and copied word occupy the opposite
 * temporary registers. Revisit the source-level record type or
 * a narrowly qualified compiler route, with controls for prior
 * accepted global copies. This source is uncounted.
 */
extern int D_00197988;
extern int D_00197980;

void func_07EA18(void)
{
    D_00197988 = D_00197980;
}
