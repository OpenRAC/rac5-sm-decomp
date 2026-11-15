/* USA SCUS_976.15 boot: SND_UpdateATRAC__Fv, 0x01E92278.
 * Observed body: 512 bytes; it fills its interval.
 * Measured 15 November 2026, -O2 -G0, default GNU assembler, independent SN
 * link at the retail address:
 * - gnu-ee-trial-divpad-blockmove: 512 compiled bytes, 370 equal positions,
 *   first differing byte +0x00 (a 0x60-byte frame against retail's 0x50).
 * - rebuilt default GNU route and gnu-ee-trial: 504 bytes, 218 equal.
 * Not exact; no complete-program gate, promotion or C matching credit.
 * Per-frame update of the two ATRAC instances. For each playing instance
 * with a valid sound: registers the completion callback once, handles a
 * pending stop, follows the pause request, and advances an active volume
 * fade (interpolate, clamp to [0, 1], store, set volume and pan, advance
 * the clock by 1/30, finish and optionally request a stop).
 * Retail keeps an instance pointer, a running byte offset and the array
 * base in three registers and forms the sound-handle address as offset plus
 * (base + 0x70). This source materialises the array address twice and keeps
 * an eighth saved register. Indexed loops, a pointer with an index, and a
 * handle address taken after the playing test give 500 to 532 bytes.
 * The field at +0x5C is a float here; the accepted fade function stores
 * zero through an int. Reopen with a loop form that keeps the pointer and
 * the offset as separate induction values.
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
    int sound;
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
    ATRACInstance *end;
    ATRACInstance *q;
    int i;
    int *snd;
    float value;
    float vol;
    float low;
    float high;
    const float *v;
    const float *lo;
    const float *hi;
    const float *clamped;

    p = g_AtracInstances;
    end = p + 2;
    i = 0;
    do {
        snd = &g_AtracInstances[i].sound;
        if (SND_IsATRACPlaying__FP13ATRACInstance(p)
            && *snd != -1) {
            if (p->callbackPending == 0) {
                p->callbackPending = 1;
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
        p++;
        i++;
    } while (p < end);
}
