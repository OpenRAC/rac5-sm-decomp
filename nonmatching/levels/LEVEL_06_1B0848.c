/* LEVEL_06.REL:0x1B0848, bounded 64-byte retail body.
 * Pinned C links 64 bytes; first difference at body byte +23.
 * The two-call state transition differs in branch scheduling. Reopen with the state byte type and caller evidence.
 */
extern void func_1AF0A8(char *, int);
extern void func_1B0888(char *);

void func_1B0848(char *record)
{
    if (record[0x45] != 0x1c) {
        func_1AF0A8(record, 0x1d);
        func_1B0888(record);
    }
}
