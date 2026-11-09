/* LEVEL_01:0x18D340 -- stops the active audio instance when it is still playing, then optionally sets a gain. */
extern char *D_002085F8;
extern int SND_IsATRACPlaying(char *a0) __asm__("SND_IsATRACPlaying__FP13ATRACInstance");
extern void SND_StopATRACInstance(char *a0) __asm__("SND_StopATRACInstance__FP13ATRACInstance");
extern void func_027AC8(float f0);

void func_18D340(int a0)
{
    if (D_002085F8 != 0) {
        if (SND_IsATRACPlaying(D_002085F8)) {
            SND_StopATRACInstance(D_002085F8);
        } else {
            D_002085F8 = 0;
        }
    }
    if (a0 != 0) {
        func_027AC8(1.0f);
    }
}
