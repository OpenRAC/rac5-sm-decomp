/* LEVEL_08.REL:0x178460, bounded 56-byte retail body.
 * Pinned C links 56 bytes; first difference at body byte +19.
 * The pinned compiler links 56 bytes but uses a signed byte load where retail uses an unsigned byte in the post-store condition. Reopen with evidenced field signedness.
 */
extern void func_1784E0(char *, int);
void func_178460(char *record, unsigned char value)
{
    char *nested = *(char **)(record + 0x58);
    nested[0x16] = value;
    if (record[0x45] == 0 || record[0x45] == 3)
        func_1784E0(record, 2);
}