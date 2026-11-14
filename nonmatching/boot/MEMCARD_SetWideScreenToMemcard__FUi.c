/* MEMCARD_SetWideScreenToMemcard__FUi 0x01E62810 (14 November 2026).
 * Measured pinned: 7 differing words; first difference at 0x0.
 * Recover the observed types, statement order and lifetimes before retrying.
 * No matching credit.
 */
typedef struct {
    unsigned char pad[0x64];
    unsigned char flags;
} tMEMCARD_REGION;

extern tMEMCARD_REGION memcard_region;

void MEMCARD_SetWideScreenToMemcard__FUi(unsigned int wide) {
    unsigned char flags = memcard_region.flags & 0xFE;

    memcard_region.flags = flags | (wide != 0);
}
