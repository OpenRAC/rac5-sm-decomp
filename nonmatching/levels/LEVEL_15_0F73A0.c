/* LEVEL_15.REL:0x0F73A0, bounded 48-byte body.
 * Pinned C links 36 bytes against this 48-byte retail body;
 * first difference is at byte +16 after the local call.
 * The compiler folds base+0x40000+0x4048 into one address,
 * whereas retail materializes the 0x40000 offset separately.
 * Reopen: recover a natural data layout/expression or qualify
 * a compiler route that keeps both additions. Nested pointer,
 * array and integer-base forms and scoped flags did not.
 */
extern char D_002A8B58[];
extern void func_097980(int);

void func_0F73A0(void)
{
    func_097980(0);
    *(int *)(D_002A8B58 + 0x44048) = 0;
}
