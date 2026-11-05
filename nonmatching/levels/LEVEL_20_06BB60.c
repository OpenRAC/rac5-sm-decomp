/* USA LEVEL_20:0x06BB60, 20 retail bytes.
 * Pinned C links to 20 bytes but differs at body byte 2: the
 * source-global address and copied word occupy the opposite
 * temporary registers. Revisit the source-level record type or
 * a narrowly qualified compiler route, with controls for prior
 * accepted global copies. This source is uncounted.
 */
extern int D_00106A68;
extern int D_00106A60;

void func_06BB60(void)
{
    D_00106A68 = D_00106A60;
}
