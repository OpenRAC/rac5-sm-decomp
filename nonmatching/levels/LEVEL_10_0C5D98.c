/* LEVEL_10.REL:0x0C5D98, bounded 44-byte body.
 * Pinned C links 44 bytes but first differs at body byte +4:
 * the global-address setup is scheduled before the forwarded
 * argument copies, opposite to retail.
 * Reopen: recover a natural argument/prototype form or qualify
 * a compiler route preserving the retail order. Integer/wide
 * parameter forms, five cc1 routes and scoped flags did not.
 */
extern char D_00209A58[];
extern void func_0BAD10(void *, int, void *, void *);

void func_0C5D98(void *a, void *b)
{
    func_0BAD10(D_00209A58, 0, a, b);
}
