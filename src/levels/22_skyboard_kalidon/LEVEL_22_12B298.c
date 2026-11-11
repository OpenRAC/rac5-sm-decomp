/* LEVEL_22:0x12B298 -- placement copy of LEVEL_01_18D340.c: stops the active audio instance when it is still playing, then optionally sets a gain. */
extern char *D_00166728;
extern int SND_IsATRACPlaying(char *a0) __asm__("SND_IsATRACPlaying__FP13ATRACInstance");
extern void SND_StopATRACInstance(char *a0) __asm__("SND_StopATRACInstance__FP13ATRACInstance");
extern void func_022458(float f0);

void func_12B298(int a0)
{
    if (D_00166728 != 0) {
        if (SND_IsATRACPlaying(D_00166728)) {
            SND_StopATRACInstance(D_00166728);
        } else {
            D_00166728 = 0;
        }
    }
    if (a0 != 0) {
        func_022458(1.0f);
    }
}
