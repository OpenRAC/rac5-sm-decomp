/* LEVEL_08.REL:0x2300A8, bounded 64-byte retail body.
 * Pinned C links 64 bytes; first difference at body byte +36.
 * The two-record call loop differs in its continuation branch. Reopen with the original loop bound and pointer type.
 */
extern void func_22F5E0(char *);

void func_2300A8(char *record)
{
    char *end = record + 0x30;
    do {
        func_22F5E0(record);
        record += 0x18;
    } while (record < end);
}
