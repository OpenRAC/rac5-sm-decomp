/* MEMCARD_Saving__Fv 0x01E62998 (14 November 2026).
 * Measured pinned: 4 differing words; first difference at 0x14.
 * Recover the observed types, statement order and lifetimes before retrying.
 * No matching credit.
 */
typedef struct {
    unsigned char pad[0x1A];
    unsigned char state;
    unsigned char substate;
} tMEMCARD_REGION;

extern tMEMCARD_REGION memcard_region;

int MEMCARD_Saving__Fv(void) {
    int saving = 0;
    if ((unsigned char)(memcard_region.state - 11) < 7)
        saving = memcard_region.substate == 2;
    return saving;
}
