/* LEVEL_01.REL:0x15BF00, bounded 56-byte retail body.
 * Pinned C links 60 bytes; first difference at body byte +4.
 * The pinned compiler links 60 bytes; the retail call uses floating-point zero arguments and another nested-record access order. Reopen with the callee prototype.
 */
extern void func_07CD28(int, int, char *, int, int, int);

void func_15BF00(char *record)
{
    char *nested = *(char **)(record + 0x58);
    *(int *)(nested + 0x60) = 4;
    func_07CD28(0, 0, record, 0xe, 0, 1);
}
