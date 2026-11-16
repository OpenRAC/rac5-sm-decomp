/* USA SCUS_976.15 boot: SND_IsATRACPaused__FP13ATRACInstance, 0x01E92528.
 * Observed body: 72 bytes; it fills its interval.
 * Measured 15 November 2026 with the rebuilt default GNU route, gnu-ee-trial
 * and gnu-ee-trial-divpad-blockmove, -O2 -G0, default GNU assembler and
 * independent SN link at the retail address: 68 compiled bytes, 49 equal
 * positions in the compared prefix, first differing byte +0x1C. The three
 * routes agree.
 * Not exact; no complete-program gate, promotion or C matching credit.
 * Returns whether a playing instance has its pause byte (+0x78) set.
 * Retail normalises the byte in one register and copies it to the saved
 * result; the compiler writes the result directly. MEMCARD_Saving__Fv has
 * the same extra copy. Boolean, byte and wider result types, conditional
 * expressions, early returns and inline helpers, in C and with a C++ front
 * end, all give this 68-byte form or an early-return form.
 * Reopen with evidence for a second use of the normalised value.
 */
typedef struct ATRACInstance {
    unsigned char unknown[0x78];
    unsigned char paused;
    unsigned char tail[3];
} ATRACInstance;

extern int SND_IsATRACPlaying__FP13ATRACInstance(ATRACInstance *instance);

int SND_IsATRACPaused__FP13ATRACInstance(ATRACInstance *instance)
{
    int paused = 0;
    if (SND_IsATRACPlaying__FP13ATRACInstance(instance)) {
        paused = instance->paused != 0;
    }
    return paused;
}
