/* USA SCUS_976.15 boot: SND_PauseAtrac__Fbi, 0x01E92910.
 * Observed body: 168 bytes; it fills its interval.
 * Measured 16 November 2026 with the rebuilt default GNU route, gnu-ee-trial,
 * gnu-ee-trial-divpad and gnu-ee-trial-divpad-blockmove, -O2 -G0 and the
 * default GNU assembler: 160 compiled bytes against 168. After an independent
 * SN link at the retail address 69 positions are equal and the first
 * differing byte is +0x24. The four routes agree.
 * Not exact; no complete-program gate, promotion or C matching credit.
 * Refuses (returns 0) when another caller holds the pause lock; otherwise
 * takes the lock, or releases it when unpausing, sets or clears the paused
 * byte of both streamed-music instances that are playing, and returns 1.
 * Retail keeps the refusal in line (a branch over `result = 0` and a jump to
 * the epilogue) and leaves the lock store in front of the unpause test; the
 * compiler inverts the branch, moves the store into a delay slot and pads the
 * loop head with one instruction. Fifteen forms of the refusal test (one or
 * two conditions, either polarity, result variable, local copy of the lock,
 * inline helper, byte result) give these same 160 bytes or a longer body.
 * The first parameter is a C++ bool in the mangled name. Reopen with a C++
 * front end for the boot or with evidence for the original refusal test.
 */
typedef struct {
    unsigned char bytes[0x79];
    unsigned char paused;
    unsigned char tail[2];
} ATRACInstance;

extern int atrac_pause_lock_id;
extern ATRACInstance g_AtracInstances[];
extern int SND_IsATRACPlaying__FP13ATRACInstance(ATRACInstance *instance);

int SND_PauseAtrac__Fbi(int pause, int id)
{
    ATRACInstance *instance;
    ATRACInstance *end;

    if (atrac_pause_lock_id >= 0 && atrac_pause_lock_id != id)
        return 0;
    atrac_pause_lock_id = id;
    if (!pause)
        atrac_pause_lock_id = -1;
    instance = g_AtracInstances;
    end = instance + 2;
    do {
        if (SND_IsATRACPlaying__FP13ATRACInstance(instance)) {
            if (pause)
                instance->paused = 1;
            else
                instance->paused = 0;
        }
        instance++;
    } while (instance < end);
    return 1;
}
