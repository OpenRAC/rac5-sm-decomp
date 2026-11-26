/* MEMCARD_SetDanSkinUnlocked__FUi 0x01E627D0 -- sets or clears the Dan skin bit (bit 1) of the memory card flags byte. */
extern unsigned char memcard_region[];

void MEMCARD_SetDanSkinUnlocked__FUi(unsigned int unlocked)
{
    memcard_region[0x64] &= ~2;
    memcard_region[0x64] |= (unlocked ? 2 : 0);
}
