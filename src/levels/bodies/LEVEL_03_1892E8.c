/* LEVEL_03:0x1892E8 -- placement copy of LEVEL_01_18D340.c: stops the active audio instance when it is still playing, then optionally sets a gain. */
extern char *D_00220EC8;
extern int SND_IsATRACPlaying(char *a0) __asm__("SND_IsATRACPlaying__FP13ATRACInstance");
extern void SND_StopATRACInstance(char *a0) __asm__("SND_StopATRACInstance__FP13ATRACInstance");
extern void func_0279A8(float f0);

void func_1892E8(int a0)
{
    if (D_00220EC8 != 0) {
        if (SND_IsATRACPlaying(D_00220EC8)) {
            SND_StopATRACInstance(D_00220EC8);
        } else {
            D_00220EC8 = 0;
        }
    }
    if (a0 != 0) {
        func_0279A8(1.0f);
    }
}
