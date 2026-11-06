/* LEVEL_03.REL:0x1A20A0, bounded 64-byte retail body.
 * Pinned C links 64 bytes; first difference at body byte +20.
 * The conditional byte field update differs after the first comparison. Reopen with signedness of its state fields.
 */
extern void func_19FDD0(char *, int);

void func_1A20A0(char *record)
{
    if ((unsigned char)record[0x45] < 0x24 && record[0x46] != 2) {
        (*(char **)(record + 0x54))[0x9e] = 0x15;
        func_19FDD0(record, 0x13);
    }
}
