/* LEVEL_19:0x1538B0 -- placement copy of LEVEL_01_18D340.c: stops the active audio instance when it is still playing, then optionally sets a gain. */
extern char *D_001BEE48;
extern int SND_IsATRACPlaying(char *a0) __asm__("SND_IsATRACPlaying__FP13ATRACInstance");
extern void SND_StopATRACInstance(char *a0) __asm__("SND_StopATRACInstance__FP13ATRACInstance");
extern void func_025390(float f0);

void func_1538B0(int a0)
{
    if (D_001BEE48 != 0) {
        if (SND_IsATRACPlaying(D_001BEE48)) {
            SND_StopATRACInstance(D_001BEE48);
        } else {
            D_001BEE48 = 0;
        }
    }
    if (a0 != 0) {
        func_025390(1.0f);
    }
}
