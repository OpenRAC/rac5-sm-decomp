/* LEVEL_10.REL:0x1731E8, bounded 64-byte retail body.
 * Pinned C links 64 bytes; first difference at body byte +27.
 * The conditional fallback call differs in its return path. Reopen with the first callee return type and sentinel semantics.
 */
extern long long func_173020(void);
extern int func_07D0C0(int);

int func_1731E8(int *record)
{
    if (func_173020() == -1) return 0;
    return func_07D0C0(*record);
}
