/* LEVEL_21.REL:0x0F52D8, bounded 52-byte retail body.
 * Pinned C links 40 bytes; first difference at body byte +4.
 * The pinned compiler folds a staged global address into a direct load and links 40 bytes. Reopen with the original data-base and field layout, then revalidate the complete 52-byte body.
 */
extern char *D_002ECCC4;
extern void func_016A90(int, int);

void func_0F52D8(void)
{
    func_016A90(*(int *)(D_002ECCC4 + 8), 1);
}
