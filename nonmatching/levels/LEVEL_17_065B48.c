/* LEVEL_17.REL:0x065B48, bounded 56-byte retail body.
 * Pinned C links 56 bytes; first difference at body byte +2.
 * The pinned compiler links 56 bytes but first differs at byte +2 in global-store and 36-byte-stride table register allocation. A typed table and five other qualified compiler routes miss. Reopen with the original table layout or value lifetime.
 */
typedef struct { char before[0x20]; int entries[16 * 9]; } Table;
extern int D_00197104;
extern Table D_001DD7F0;
void func_065B48(void)
{
    unsigned int index = 0;
    int *entry = D_001DD7F0.entries;
    D_00197104 = 0;
    do {
        *entry = 0;
        ++index;
        entry += 9;
    } while (index < 16);
}