/* LEVEL_23:0x173AC0 -- placement copy of LEVEL_01_18D340.c: stops the active audio instance when it is still playing, then optionally sets a gain. */
extern char *D_001DBB20;
extern int SND_IsATRACPlaying(char *a0) __asm__("SND_IsATRACPlaying__FP13ATRACInstance");
extern void SND_StopATRACInstance(char *a0) __asm__("SND_StopATRACInstance__FP13ATRACInstance");
extern void func_025820(float f0);

void func_173AC0(int a0)
{
    if (D_001DBB20 != 0) {
        if (SND_IsATRACPlaying(D_001DBB20)) {
            SND_StopATRACInstance(D_001DBB20);
        } else {
            D_001DBB20 = 0;
        }
    }
    if (a0 != 0) {
        func_025820(1.0f);
    }
}
