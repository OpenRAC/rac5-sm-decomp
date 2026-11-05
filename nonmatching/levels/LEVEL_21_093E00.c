/* LEVEL_21.REL:0x093E00, bounded 28-byte body.
 * Isolated pinned C links 24 bytes; first difference at body byte +0:
 * the compiler folds the explicit recursive call into a loop.
 * Reopen: recover a natural source or qualified compiler route that
 * preserves the retail call and return sequence.
 */
extern void func_093E00(void);

void func_093E00(void)
{
    func_093E00();
}
