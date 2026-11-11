/* LEVEL_09:0x17C788 -- placement copy of LEVEL_01_18D340.c: stops the active audio instance when it is still playing, then optionally sets a gain. */
extern char *D_001F2300;
extern int SND_IsATRACPlaying(char *a0) __asm__("SND_IsATRACPlaying__FP13ATRACInstance");
extern void SND_StopATRACInstance(char *a0) __asm__("SND_StopATRACInstance__FP13ATRACInstance");
extern void func_026AD0(float f0);

void func_17C788(int a0)
{
    if (D_001F2300 != 0) {
        if (SND_IsATRACPlaying(D_001F2300)) {
            SND_StopATRACInstance(D_001F2300);
        } else {
            D_001F2300 = 0;
        }
    }
    if (a0 != 0) {
        func_026AD0(1.0f);
    }
}
