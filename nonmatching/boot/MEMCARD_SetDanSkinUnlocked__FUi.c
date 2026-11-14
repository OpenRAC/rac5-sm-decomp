/* MEMCARD_SetDanSkinUnlocked__FUi 0x01E627D0 (14 November 2026).
 * Measured pinned: 6 differing words; first difference at 0x4.
 * Recover the observed types, statement order and lifetimes before retrying.
 * No matching credit.
 */
typedef struct {
    unsigned char pad[0x64];
    unsigned char other : 1;
    unsigned char dan : 1;
    unsigned char rest : 6;
} tMEMCARD_REGION;

extern tMEMCARD_REGION memcard_region;

void MEMCARD_SetDanSkinUnlocked__FUi(unsigned int unlocked) {
    memcard_region.dan = unlocked;
}
