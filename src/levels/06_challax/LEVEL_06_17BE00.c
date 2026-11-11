/* LEVEL_06:0x17BE00 -- placement copy of LEVEL_01_18D340.c: stops the active audio instance when it is still playing, then optionally sets a gain. */
extern char *D_001F7408;
extern int SND_IsATRACPlaying(char *a0) __asm__("SND_IsATRACPlaying__FP13ATRACInstance");
extern void SND_StopATRACInstance(char *a0) __asm__("SND_StopATRACInstance__FP13ATRACInstance");
extern void func_026078(float f0);

void func_17BE00(int a0)
{
    if (D_001F7408 != 0) {
        if (SND_IsATRACPlaying(D_001F7408)) {
            SND_StopATRACInstance(D_001F7408);
        } else {
            D_001F7408 = 0;
        }
    }
    if (a0 != 0) {
        func_026078(1.0f);
    }
}
