/* BinkSetSoundSystem 0x01EA7308 (14 November 2026).
 * Measured sdk991111: 5 differing words; first difference at +0xC.
 * Recover the observed types, statement order and lifetimes before retrying.
 * No matching credit.
 */
typedef void *(*tSoundSys)(void *param);

extern tSoundSys bink_sound_system_01EFAF78;
extern void *bink_sound_handle_01EFAF7C;
extern int bink_sound_locked_01EFAF80;

int BinkSetSoundSystem(tSoundSys sys, void *param) {
    void *r;

    if (sys == 0) {
        return 0;
    }
    if (bink_sound_system_01EFAF78 == 0) {
        bink_sound_system_01EFAF78 = sys;
    }
    if (bink_sound_system_01EFAF78 != sys) {
        if (bink_sound_locked_01EFAF80 != 0) {
            return 0;
        }
        bink_sound_system_01EFAF78 = sys;
    }
    r = bink_sound_system_01EFAF78(param);
    if (r != 0) {
        bink_sound_handle_01EFAF7C = r;
    }
    return bink_sound_handle_01EFAF7C != 0;
}
