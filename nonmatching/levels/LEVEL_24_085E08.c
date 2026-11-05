/* USA LEVEL_24:0x085E08, 20 retail bytes.
 * Pinned C links to 20 bytes but differs at body byte 2: the
 * source-global address and copied word occupy the opposite
 * temporary registers. Revisit the source-level record type or
 * a narrowly qualified compiler route, with controls for prior
 * accepted global copies. This source is uncounted.
 */
extern int D_001C6FD8;
extern int D_001C6FD0;

void func_085E08(void)
{
    D_001C6FD8 = D_001C6FD0;
}
