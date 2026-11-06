/* LEVEL_21.REL:0x1429C0, bounded 64-byte retail body.
 * Pinned C links 48 bytes; first difference at body byte +0.
 * The string comparator uses different pointer indirection and stack setup. Reopen with caller evidence for its input types.
 */
extern int strcmp(const char *, const char *);

int func_1429C0(const char *first, const char *second)
{
    if (first != second &&
        strcmp(first, second) != 0)
        return 0;
    return 1;
}
