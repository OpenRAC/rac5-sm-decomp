/* RAD_IOPStartSound 0x01EAF708 (14 November 2026).
 * Measured pinned: 10 differing words; first difference at 0x0.
 * Recover the observed types, statement order and lifetimes before retrying.
 * No matching credit.
 */
struct iop_sound {
    int pad_0[3];
    int state;                    /* 0x0C */
};

int RAD_IOPStartSound(struct iop_sound *snd)
{
    if (snd != 0) {
        if (snd->state == 1) {
            snd->state = 2;
            return 1;
        }
        if (snd->state == 2) {
            snd->state = 2;
            return 1;
        }
    }
    return 0;
}
