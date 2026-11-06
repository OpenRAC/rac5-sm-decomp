/* LEVEL_22.REL:0x1311E0, bounded 52-byte retail body.
 * Pinned C links 52 bytes; first difference at body byte +6.
 * The pinned compiler links 52 bytes but assigns the masked index to another register at byte +6; five other qualified routes also miss. Reopen with caller evidence for index type and fallback record lifetime.
 */
extern char *D_001668A4;

int func_1311E0(char *record, unsigned char index)
{
    char *nested;
    index &= 0xff;
    if (record == 0)
        record = D_001668A4;
    if (record == 0)
        return 0;
    nested = *(char **)(record + 0x58);
    return *(int *)(nested + index * 4 + 0x40);
}