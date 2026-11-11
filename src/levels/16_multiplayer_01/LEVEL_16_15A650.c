/* LEVEL_16:0x15A650 -- placement copy of LEVEL_01_18D340.c: stops the active audio instance when it is still playing, then optionally sets a gain. */
extern char *D_001BDC58;
extern int SND_IsATRACPlaying(char *a0) __asm__("SND_IsATRACPlaying__FP13ATRACInstance");
extern void SND_StopATRACInstance(char *a0) __asm__("SND_StopATRACInstance__FP13ATRACInstance");
extern void func_0257E8(float f0);

void func_15A650(int a0)
{
    if (D_001BDC58 != 0) {
        if (SND_IsATRACPlaying(D_001BDC58)) {
            SND_StopATRACInstance(D_001BDC58);
        } else {
            D_001BDC58 = 0;
        }
    }
    if (a0 != 0) {
        func_0257E8(1.0f);
    }
}
