/* USA SCUS_976.15 boot: anonymous body at 0x01E92F40, inside the next-label
 * interval of SND_StopATRACInstance__FP13ATRACInstance.
 * Observed body: 124 bytes, followed by one zero alignment word.
 * Measured 15 November 2026, -O2 -G0, default GNU assembler, independent SN
 * link at the retail address:
 * - gnu-ee-trial-divpad and its blockmove variant: 124 of 124 bytes. These
 *   are level profiles; this body has no boot-gate route today.
 * - rebuilt default route and gnu-ee-trial: 116 compiled bytes, 84 equal
 *   positions, first differing byte +0x18: retail has two padding nops
 *   before the division (blocker 09).
 * Profile-dependent trial: no complete-program gate, promotion or credit.
 * Converts a pitch ratio to a rounded driver pitch offset, 127 units per
 * octave of the ratio raised to the twelfth power; a ratio of exactly 1
 * gives 0 without calling the math library. It is called by the positional
 * sound entry points.
 */extern float powf(float, float);
extern float logf(float);

int func_1E92F40(float ratio)
{
    int offset = 0;

    if (ratio != 1.0f)
        offset = (int)(logf(powf(ratio, 12.0f)) / 0.69314718f * 127.0f + 0.5f);
    return offset;
}
