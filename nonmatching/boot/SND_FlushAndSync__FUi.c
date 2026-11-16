/* USA SCUS_976.15 boot: SND_FlushAndSync__FUi, 0x01E910C0.
 * Observed body: 84 bytes, followed by one zero alignment word.
 * Measured 15 November 2026: all 84 body bytes are exact after independent
 * SN linking at the retail address under the rebuilt default GNU route and
 * gnu-ee-trial, with -O2 -G0 and the default GNU assembler.
 * The default tools are rebuilt, not hash-qualified. This is an unaccepted
 * witness: complete-program integration, boundaries, types and qualification
 * require separate review. No promotion or matching credit is claimed here.
 * Reconstructed from the retail boot. Flushes the sound command queue, waiting
 * 5 ms after each unfinished flush, for at most `retries` rounds (a count of
 * zero is treated as one). Returns 1 when the queue emptied, 0 on timeout.
 * The zero count is incremented rather than assigned 1: retail computes
 * retries + 1 and selects it conditionally. Assigning 1 gives 76 bytes.
 */
extern int snd_FlushSoundCommands(void);
extern void DelayThread(int microseconds);

int SND_FlushAndSync__FUi(unsigned int retries)
{
    if (retries == 0)
        retries++;
    while (snd_FlushSoundCommands() != 0) {
        DelayThread(5000);
        if (--retries == 0)
            return 0;
    }
    return 1;
}
