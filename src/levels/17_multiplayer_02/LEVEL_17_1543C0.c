/* LEVEL_17:0x1543C0 -- placement copy of LEVEL_01_18D340.c: stops the active audio instance when it is still playing, then optionally sets a gain. */
extern char *D_001B1270;
extern int SND_IsATRACPlaying(char *a0) __asm__("SND_IsATRACPlaying__FP13ATRACInstance");
extern void SND_StopATRACInstance(char *a0) __asm__("SND_StopATRACInstance__FP13ATRACInstance");
extern void func_025168(float f0);

void func_1543C0(int a0)
{
    if (D_001B1270 != 0) {
        if (SND_IsATRACPlaying(D_001B1270)) {
            SND_StopATRACInstance(D_001B1270);
        } else {
            D_001B1270 = 0;
        }
    }
    if (a0 != 0) {
        func_025168(1.0f);
    }
}
