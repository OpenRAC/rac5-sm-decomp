/* LEVEL_20:0x0F40F8 -- placement copy of LEVEL_16_121FF8.c: reports a table marker check, consulting the memory-card unlock query only when the marker matches. */

extern int D_00117308[];
extern int MEMCARD_GetDanSkinUnlocked(void) __asm__("MEMCARD_GetDanSkinUnlocked__Fv");

int func_0F40F8(int a0)
{
    int s0;

    s0 = 0;
    if (D_00117308[a0] != 0xF0D4EEDD || MEMCARD_GetDanSkinUnlocked()) {
        s0 = 1;
    }
    return s0;
}
