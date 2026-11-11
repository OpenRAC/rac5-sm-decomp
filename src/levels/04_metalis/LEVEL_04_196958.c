/* LEVEL_04:0x196958 -- placement copy of LEVEL_01_18D340.c: stops the active audio instance when it is still playing, then optionally sets a gain. */
extern char *D_00221CF0;
extern int SND_IsATRACPlaying(char *a0) __asm__("SND_IsATRACPlaying__FP13ATRACInstance");
extern void SND_StopATRACInstance(char *a0) __asm__("SND_StopATRACInstance__FP13ATRACInstance");
extern void func_027758(float f0);

void func_196958(int a0)
{
    if (D_00221CF0 != 0) {
        if (SND_IsATRACPlaying(D_00221CF0)) {
            SND_StopATRACInstance(D_00221CF0);
        } else {
            D_00221CF0 = 0;
        }
    }
    if (a0 != 0) {
        func_027758(1.0f);
    }
}
