/* LEVEL_07:0x195EE8 -- placement copy of LEVEL_01_18D340.c: stops the active audio instance when it is still playing, then optionally sets a gain. */
extern char *D_0021CE20;
extern int SND_IsATRACPlaying(char *a0) __asm__("SND_IsATRACPlaying__FP13ATRACInstance");
extern void SND_StopATRACInstance(char *a0) __asm__("SND_StopATRACInstance__FP13ATRACInstance");
extern void func_027E28(float f0);

void func_195EE8(int a0)
{
    if (D_0021CE20 != 0) {
        if (SND_IsATRACPlaying(D_0021CE20)) {
            SND_StopATRACInstance(D_0021CE20);
        } else {
            D_0021CE20 = 0;
        }
    }
    if (a0 != 0) {
        func_027E28(1.0f);
    }
}
