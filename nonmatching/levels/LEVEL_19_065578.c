/* LEVEL_19.REL:0x065578, bounded 56-byte retail body.
 * Pinned C links 56 bytes; first difference at body byte +2.
 * The pinned compiler links 56 bytes but first differs at byte +2 in global-store and 36-byte-stride table register allocation. A typed table and five other qualified compiler routes miss. Reopen with the original table layout or value lifetime.
 */
typedef struct { char before[0x20]; int entries[16 * 9]; } Table;
extern int D_001A4C84;
extern Table D_001EC670;
void func_065578(void)
{
    unsigned int index = 0;
    int *entry = D_001EC670.entries;
    D_001A4C84 = 0;
    do {
        *entry = 0;
        ++index;
        entry += 9;
    } while (index < 16);
}