/* LEVEL_02:0x1A5C68 -- placement copy of LEVEL_01_18D340.c: stops the active audio instance when it is still playing, then optionally sets a gain. */
extern char *D_0021D640;
extern int SND_IsATRACPlaying(char *a0) __asm__("SND_IsATRACPlaying__FP13ATRACInstance");
extern void SND_StopATRACInstance(char *a0) __asm__("SND_StopATRACInstance__FP13ATRACInstance");
extern void func_0282B0(float f0);

void func_1A5C68(int a0)
{
    if (D_0021D640 != 0) {
        if (SND_IsATRACPlaying(D_0021D640)) {
            SND_StopATRACInstance(D_0021D640);
        } else {
            D_0021D640 = 0;
        }
    }
    if (a0 != 0) {
        func_0282B0(1.0f);
    }
}
