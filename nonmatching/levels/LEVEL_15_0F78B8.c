/* LEVEL_15.REL:0x0F78B8, bounded 32-byte retail function.
 * The former 60-byte candidate interval contains two separate
 * complete functions; the next starts at 0x0F78D8. Pinned C
 * links 20 bytes and first differs at byte +0 because it folds
 * the staged global-address calculation. Reopen with the
 * original data layout or a qualified address route.
 */
extern int gRT_BackBuffer;
extern char D_002A8B58[];
void func_0F78B8(void)
{
    *(int *)(D_002A8B58 + 0x40000 + 0x408c) = gRT_BackBuffer;
}