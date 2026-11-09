/* LEVEL_18:0x158F58 -- placement copy of LEVEL_01_18D340.c: stops the active audio instance when it is still playing, then optionally sets a gain. */
extern char *D_001BF128;
extern int SND_IsATRACPlaying(char *a0) __asm__("SND_IsATRACPlaying__FP13ATRACInstance");
extern void SND_StopATRACInstance(char *a0) __asm__("SND_StopATRACInstance__FP13ATRACInstance");
extern void func_024D98(float f0);

void func_158F58(int a0)
{
    if (D_001BF128 != 0) {
        if (SND_IsATRACPlaying(D_001BF128)) {
            SND_StopATRACInstance(D_001BF128);
        } else {
            D_001BF128 = 0;
        }
    }
    if (a0 != 0) {
        func_024D98(1.0f);
    }
}
