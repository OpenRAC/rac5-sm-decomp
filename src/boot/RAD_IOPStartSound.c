/* RAD_IOPStartSound: moves a loaded or already playing IOP sound slot to the playing state; the slot state is also written by the IOP completion callback. */
struct iop_sound {
    int pad_0[3];
    volatile int state;
};

int RAD_IOPStartSound(struct iop_sound *snd)
{
    if (snd != 0) {
        if (snd->state == 1 || snd->state == 2) {
            snd->state = 2;
            return 1;
        }
    }
    return 0;
}
