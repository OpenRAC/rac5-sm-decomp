/* USA SCUS_976.15 boot: SND_UpdateATRAC__Fv, 0x01E92278.
 * Observed body: 512 bytes; it fills its interval.
 * Measured 16 November 2026, -O2 -G0, default GNU assembler, independent SN
 * link at the retail address:
 * - gnu-ee-trial-divpad and gnu-ee-trial-divpad-blockmove: all 512 body
 *   bytes are exact.
 * - rebuilt default GNU route and gnu-ee-trial: 504 bytes, not exact (they
 *   do not pad the single-precision division).
 * The two exact profiles are qualified for level bodies only; the boot gate
 * has no route for them. This is an unaccepted trial: no complete-program
 * gate, boundary or type review, promotion or C matching credit.
 * Per-frame update of the two ATRAC instances. For each playing instance
 * with a valid sound: registers the completion callback once, handles a
 * pending stop, follows the pause request, and advances an active volume
 * fade (interpolate, clamp to [0, 1], store, set volume and pan, advance
 * the clock by 1/30, finish and optionally request a stop).
 * Source shape, each point measured:
 * - The loop is indexed and names the array again for the instance, the
 *   sound handle, the callback test and the fade. Retail has the matching
 *   three values: an instance pointer, a running byte offset, and the array
 *   base from which the handle address and the loop bound are formed inside
 *   the loop. A stepped pointer with a separate end keeps an eighth saved
 *   register and a 0x60-byte frame (370 of 512 equal).
 * - The index and the sound handle are unsigned: retail compares the bound
 *   unsigned and builds the invalid handle 0xFFFFFFFF in two instructions.
 * - The callback field is incremented from zero, not assigned 1: retail
 *   loads that 1 next to its store and keeps a separate register for the
 *   two byte flags. Assigning 1 shares one register for all three (508
 *   bytes). Testing the field through the instance pointer gives 516 bytes.
 * The field at +0x5C is a float here; the accepted fade function stores
 * zero through an int. Field names are placeholders.
 */
typedef struct {
    char _pad00[0x54];
    float fadeStart;
    float fadeEnd;
    float fadeTime;
    float fadeDuration;
    int field64;
    float volume;
    char _pad6C[4];
    unsigned int sound;
    int callbackPending;
    unsigned char pauseState;
    unsigned char pauseRequest;
    unsigned char stopRequest;
    unsigned char stopAfterFade;
} ATRACInstance;

extern ATRACInstance g_AtracInstances[];
extern int SND_IsATRACPlaying__FP13ATRACInstance(ATRACInstance *p);
extern void func_1E92E60(int result, long data);
extern void snd_SoundIsStillPlaying_CB(int sound, int arg2, int arg3);
extern void snd_StopSound(int sound);
extern void snd_PauseSound(int sound);
extern void snd_ContinueSound(int sound);
extern void snd_SetSoundVolPan(int sound, int volume, int pan);

void SND_UpdateATRAC__Fv(void) {
    ATRACInstance *p;
    ATRACInstance *q;
    unsigned int i;
    unsigned int *snd;
    float value;
    float vol;
    float low;
    float high;
    const float *v;
    const float *lo;
    const float *hi;
    const float *clamped;

    for (i = 0; i < 2; i++) {
        p = &g_AtracInstances[i];
        if (SND_IsATRACPlaying__FP13ATRACInstance(p)
            && *(snd = &g_AtracInstances[i].sound) != 0xFFFFFFFFu) {
            if (g_AtracInstances[i].callbackPending == 0) {
                p->callbackPending++;
                snd_SoundIsStillPlaying_CB(*snd,
                                           (int)func_1E92E60, (int)p);
            }
            if (p->stopRequest) {
                snd_StopSound(*snd);
                p->stopRequest = 0;
            } else {
                if (p->pauseRequest != p->pauseState) {
                    if (p->pauseRequest) {
                        snd_PauseSound(*snd);
                        p->pauseState = 1;
                    } else {
                        snd_ContinueSound(*snd);
                        p->pauseState = 0;
                    }
                }
                if (g_AtracInstances[i].fadeDuration != 0.0f) {
                    q = &g_AtracInstances[i];
                    value = (q->fadeEnd - q->fadeStart)
                            * (q->fadeTime / q->fadeDuration)
                            + q->fadeStart;
                    low = 0.0f;
                    high = 1.0f;
                    v = &value;
                    lo = &low;
                    hi = &high;
                    if (*v < *lo)
                        clamped = lo;
                    else if (*hi < *v)
                        clamped = hi;
                    else
                        clamped = v;
                    vol = *clamped;
                    q->volume = vol;
                    snd_SetSoundVolPan(q->sound, (int)(vol * 1024.0f), -2);
                    q->fadeTime = q->fadeTime + 0.033333335f;
                    if (q->fadeDuration <= q->fadeTime) {
                        q->fadeDuration = 0;
                        if (q->stopAfterFade) {
                            q->stopRequest = 1;
                            q->stopAfterFade = 0;
                        }
                    }
                }
            }
        }
    }
}
