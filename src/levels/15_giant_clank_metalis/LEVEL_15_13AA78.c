/* LEVEL_15:0x13AA78 -- placement copy of LEVEL_01_18D340.c: stops the active audio instance when it is still playing, then optionally sets a gain. */
extern char *D_0015E208;
extern int SND_IsATRACPlaying(char *a0) __asm__("SND_IsATRACPlaying__FP13ATRACInstance");
extern void SND_StopATRACInstance(char *a0) __asm__("SND_StopATRACInstance__FP13ATRACInstance");
extern void func_021A78(float f0);

void func_13AA78(int a0)
{
    if (D_0015E208 != 0) {
        if (SND_IsATRACPlaying(D_0015E208)) {
            SND_StopATRACInstance(D_0015E208);
        } else {
            D_0015E208 = 0;
        }
    }
    if (a0 != 0) {
        func_021A78(1.0f);
    }
}
