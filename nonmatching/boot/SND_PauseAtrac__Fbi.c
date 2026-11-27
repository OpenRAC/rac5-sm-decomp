/* USA SCUS_976.15 boot: SND_PauseAtrac__Fbi, 0x01E92910.
 * Observed body: 168 bytes; it fills its interval.
 * Measured 26 November 2026 with the rebuilt default GNU route (pinned) and
 * gnu-ee-trial (on 16 November also gnu-ee-trial-divpad and
 * gnu-ee-trial-divpad-blockmove), -O2 -G0 and the default GNU assembler:
 * 160 compiled bytes against 168. After an independent SN link at the retail
 * address 69 positions are equal and the first differing byte is +0x24. All
 * routes agree.
 * Not exact; no complete-program gate, promotion or C matching credit.
 * Refuses (returns 0) when another caller holds the pause lock; otherwise
 * takes the lock, or releases it when unpausing, sets or clears the paused
 * byte of both streamed-music instances that are playing, and returns 1.
 * Retail keeps the refusal in line: the branch on the lock id jumps forward
 * over a block that sets the result to 0 and jumps to the shared epilogue
 * (the first register restore is duplicated in that jump's delay slot), and
 * the lock store stays in front of the unpause test. The compiler instead
 * inverts the branch to go straight to the epilogue with the zero in a delay
 * slot, and pads the loop head with one nop. Retail therefore has the extra
 * jump and the duplicated restore and no nop.
 * Forms tried that give these same 160 bytes or another length: the first
 * fifteen (one or two conditions, either polarity, result variable, local
 * copy of the lock, inline helper, byte result) and, on 26 November, a guard
 * around the whole body with a final return 0 (152 bytes), nested ifs with an
 * empty then or else arm, the lock read into a local, a goto to a common
 * return with a result variable (160), an ok flag with a guarded body (172),
 * a pointer to the lock, an indexed for loop naming the array (176), a
 * pointer loop with an unsigned char bool argument (172), unsigned char or
 * char return type, paused stored as (pause != 0) (136), the lock assigned
 * with a ternary (152). Callee, array and lock declarations follow the
 * accepted sources (the callee returns int; the lock is an int).
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
