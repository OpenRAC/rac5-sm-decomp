/* LEVEL_24:0x16DC08 -- placement copy of LEVEL_01_18D340.c: stops the active audio instance when it is still playing, then optionally sets a gain. */
extern char *D_001D9578;
extern int SND_IsATRACPlaying(char *a0) __asm__("SND_IsATRACPlaying__FP13ATRACInstance");
extern void SND_StopATRACInstance(char *a0) __asm__("SND_StopATRACInstance__FP13ATRACInstance");
extern void func_0253F8(float f0);

void func_16DC08(int a0)
{
    if (D_001D9578 != 0) {
        if (SND_IsATRACPlaying(D_001D9578)) {
            SND_StopATRACInstance(D_001D9578);
        } else {
            D_001D9578 = 0;
        }
    }
    if (a0 != 0) {
        func_0253F8(1.0f);
    }
}
