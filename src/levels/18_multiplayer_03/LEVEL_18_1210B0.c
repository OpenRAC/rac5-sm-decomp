/* LEVEL_18:0x1210B0 -- placement copy of LEVEL_16_121FF8.c: reports a table marker check, consulting the memory-card unlock query only when the marker matches. */

extern int D_001B60C8[];
extern int MEMCARD_GetDanSkinUnlocked(void) __asm__("MEMCARD_GetDanSkinUnlocked__Fv");

int func_1210B0(int a0)
{
    int s0;

    s0 = 0;
    if (D_001B60C8[a0] != 0xF0D4EEDD || MEMCARD_GetDanSkinUnlocked()) {
        s0 = 1;
    }
    return s0;
}
