/* USA SCUS_976.15 boot: SND_IsATRACPaused__FP13ATRACInstance, 0x01E92528.
 * Observed body: 72 bytes; it fills its interval. Measured 26 November 2026:
 * all 72 body bytes are exact after independent SN linking at the retail
 * address under the rebuilt default GNU route and gnu-ee-trial, with -O2 -G0
 * and the default GNU assembler. The default tools are rebuilt, not
 * hash-qualified. This is an unaccepted witness: complete-program integration,
 * boundaries, types and qualification require separate review. No promotion or
 * matching credit is claimed here. Reconstructed from the retail boot. Returns
 * whether a playing instance has its pause byte (+0x78) set; a stopped
 * instance reports not paused. The result variable must be a one-byte local
 * that the compiler does not widen to a full register (the retail C++ bool).
 * Every int or char local is widened, and the comparison is then written
 * straight into it; a byte local that stays narrow keeps the comparison in a
 * scratch register and copies it, which is the retail form. The one-member
 * struct below is the plain-C stand-in for that bool and is the point
 * reviewers must accept.
 */
typedef struct ATRACInstance {
    unsigned char unknown[0x78];
    unsigned char paused;
    unsigned char tail[3];
} ATRACInstance;

/* Plain-C stand-in for the C++ bool of the original: one byte, not widened. */
typedef struct {
    unsigned char value;
} bool8;

extern int SND_IsATRACPlaying__FP13ATRACInstance(ATRACInstance *instance);

int SND_IsATRACPaused__FP13ATRACInstance(ATRACInstance *instance)
{
    bool8 paused;

    paused.value = 0;
    if (SND_IsATRACPlaying__FP13ATRACInstance(instance)) {
        paused.value = instance->paused != 0;
    }
    return paused.value;
}
