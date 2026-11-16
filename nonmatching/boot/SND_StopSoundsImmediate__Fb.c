/* USA SCUS_976.15 boot: SND_StopSoundsImmediate__Fb, 0x01E915A0.
 * Observed body: 356 bytes, followed by one zero alignment word.
 * Measured 14 November 2026: all 356 body bytes are exact after independent
 * SN linking at the retail address under the rebuilt default GNU route, with
 * -O2 -G0 and the default GNU assembler (also under gnu-ee-trial-divpad and
 * its blockmove variant; gnu-ee-trial alone pads three loops).
 * The default tools are rebuilt, not hash-qualified. This is an unaccepted
 * witness: complete-program integration, boundaries, types and qualification
 * require separate review. No promotion or matching credit is claimed here.
 * Reconstructed from the retail boot. Drains the sound command queue, stops
 * all sounds, then rescans the 64 positional records until the queue is
 * empty and no record is still busy: a playing record counts toward a
 * running total and is released once that total reaches 120; a record in
 * state 6 or 3 with a valid sound gets its pending flag set and a
 * still-playing query. The total persists across scans. It ends with 30
 * further flush-and-wait rounds. The boolean parameter is unused.
 * The outer loop tests the flush result before the busy flag, with the flag
 * initially set at its declaration; the scan is an int-indexed loop, which
 * is what gives retail's signed end comparison. A pointer walk with a
 * do-while outer loop gave 176 of 356.
 */typedef struct SND_Positional {
    int state;
    unsigned int unknown04;
    unsigned int soundID;
    unsigned int unknown0C;
    unsigned char unknown10[0x0F];
    unsigned char checkPending;
    unsigned char unknown20[0x38];
} SND_Positional;

extern SND_Positional gSounds[];
extern void DelayThread(unsigned int micros);
extern int snd_FlushSoundCommands(void);
extern void snd_StopAllSounds(void);
extern void func_1E92AB0(SND_Positional *sound);
extern void snd_SoundIsStillPlaying_CB(int sound, int arg2, int arg3);
extern void func_1E92DE8(int result, SND_Positional *sound);

void SND_StopSoundsImmediate__Fb(int unused) {
    SND_Positional *sound;
    unsigned int playingCount = 0;
    int found = 1;
    int i;

    (void)unused;
    while (snd_FlushSoundCommands()) {
        DelayThread(5000);
    }
    snd_StopAllSounds();

    while (snd_FlushSoundCommands() || found) {
        found = 0;
        for (i = 0; i < 64; i++) {
            sound = &gSounds[i];
            if (sound->state == 2) {
                playingCount++;
                if (playingCount < 120) {
                    found = 1;
                } else {
                    func_1E92AB0(sound);
                }
            } else if (sound->state == 6 || sound->state == 3) {
                found = 1;
                if (sound->soundID != 0xFFFFFFFFu) {
                    sound->checkPending = 1;
                    snd_SoundIsStillPlaying_CB((int)sound->soundID,
                                              (int)func_1E92DE8, (int)sound);
                }
            }
        }
        DelayThread(5000);
    }

    for (i = 29; i >= 0; i--) {
        snd_FlushSoundCommands();
        DelayThread(5000);
    }
}