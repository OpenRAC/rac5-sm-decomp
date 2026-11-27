/* USA SCUS_976.15 boot: MEMCARD_Saving__Fv, 0x01E62998.
 * Observed body: 52 bytes; it fills its interval. Measured 26 November 2026:
 * all 52 body bytes are exact after independent SN linking at the retail
 * address under the rebuilt default GNU route and gnu-ee-trial, with -O2 -G0
 * and the default GNU assembler. The default tools are rebuilt, not
 * hash-qualified. This is an unaccepted witness: complete-program integration,
 * boundaries, types and qualification require separate review. No promotion or
 * matching credit is claimed here. Reconstructed from the retail boot. Reports
 * a save in progress: the memory card state byte is in the range 11 to 17 and
 * the sub-state byte is 2. As in SND_IsATRACPaused, the result must be a
 * one-byte local that is not widened to a full register (the retail C++ bool);
 * an int or char local lets the compiler write the comparison directly into it
 * and drops the retail copy. The one-member struct below is the plain-C
 * stand-in for that bool and is the point reviewers must accept.
 */
typedef struct {
    unsigned char pad[0x1A];
    unsigned char state;
    unsigned char substate;
} tMEMCARD_REGION;

/* Plain-C stand-in for the C++ bool of the original: one byte, not widened. */
typedef struct {
    unsigned char value;
} bool8;

extern tMEMCARD_REGION memcard_region;

int MEMCARD_Saving__Fv(void)
{
    bool8 saving;

    saving.value = 0;
    if ((unsigned char)(memcard_region.state - 11) < 7)
        saving.value = memcard_region.substate == 2;
    return saving.value;
}
