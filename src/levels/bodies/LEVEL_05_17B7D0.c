/* LEVEL_05:0x17B7D0 -- placement copy of LEVEL_01_18D340.c: stops the active audio instance when it is still playing, then optionally sets a gain. */
extern char *D_001F7538;
extern int SND_IsATRACPlaying(char *a0) __asm__("SND_IsATRACPlaying__FP13ATRACInstance");
extern void SND_StopATRACInstance(char *a0) __asm__("SND_StopATRACInstance__FP13ATRACInstance");
extern void func_026908(float f0);

void func_17B7D0(int a0)
{
    if (D_001F7538 != 0) {
        if (SND_IsATRACPlaying(D_001F7538)) {
            SND_StopATRACInstance(D_001F7538);
        } else {
            D_001F7538 = 0;
        }
    }
    if (a0 != 0) {
        func_026908(1.0f);
    }
}
