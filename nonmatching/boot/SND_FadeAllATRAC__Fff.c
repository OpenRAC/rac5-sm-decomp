/* USA SCUS_976.15 boot: SND_FadeAllATRAC__Fff, 0x01E927A8.
 * Observed body: 116 bytes, followed by one zero alignment word.
 * Measured 14 November 2026: all 116 body bytes are exact after independent
 * SN linking at the retail address under gnu-ee-trial with -O2 -G0 and the
 * default GNU assembler. The rebuilt default route gives 98 of 116, first
 * differing byte +0x0C (prologue save order), the same profile question as
 * SND_Play__FP9GDE_SoundffPP14SND_PositionalUi.
 * The tools are rebuilt, not hash-qualified. This is an unaccepted witness:
 * complete-program integration, boundaries, types and a gnu-ee-trial
 * selector require separate review. No promotion or matching credit.
 * Reconstructed from the retail boot. Starts the given fade on each of the
 * two ATRAC instances that is playing. Accepted ATRAC callers corroborate
 * the two-instance, 0x7C-stride array.
 * The loop is indexed and names g_AtracInstances[i] at both calls. A walking
 * pointer compared with an end pointer moves the increment and one float
 * argument across the playing test (71 of 120 interval bytes).
 */typedef struct { unsigned char bytes[0x7C]; } ATRACInstance;
extern ATRACInstance g_AtracInstances[];
extern int SND_IsATRACPlaying__FP13ATRACInstance(ATRACInstance *instance);
extern void SND_FadeATRACInstance__FP13ATRACInstanceff(ATRACInstance *instance,
                                                     float target, float duration);
void SND_FadeAllATRAC__Fff(float target, float duration)
{
    unsigned int i;
    for (i = 0; i < 2; i++) {
        if (SND_IsATRACPlaying__FP13ATRACInstance(&g_AtracInstances[i]))
            SND_FadeATRACInstance__FP13ATRACInstanceff(&g_AtracInstances[i], target, duration);
    }
}