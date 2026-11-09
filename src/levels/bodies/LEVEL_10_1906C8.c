/* LEVEL_10:0x1906C8 -- placement copy of LEVEL_01_18D340.c: stops the active audio instance when it is still playing, then optionally sets a gain. */
extern char *D_002114F8;
extern int SND_IsATRACPlaying(char *a0) __asm__("SND_IsATRACPlaying__FP13ATRACInstance");
extern void SND_StopATRACInstance(char *a0) __asm__("SND_StopATRACInstance__FP13ATRACInstance");
extern void func_0273A8(float f0);

void func_1906C8(int a0)
{
    if (D_002114F8 != 0) {
        if (SND_IsATRACPlaying(D_002114F8)) {
            SND_StopATRACInstance(D_002114F8);
        } else {
            D_002114F8 = 0;
        }
    }
    if (a0 != 0) {
        func_0273A8(1.0f);
    }
}
