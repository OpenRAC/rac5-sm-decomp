/* Candidate only: the full-program build and compiler profile are not qualified. */
typedef struct {
    char _bytes[0x7C];
} ATRACInstance;

extern ATRACInstance g_AtracInstances[];
extern int SND_IsATRACPlaying__FP13ATRACInstance(ATRACInstance *p);
extern int SND_IsATRACPaused__FP13ATRACInstance(ATRACInstance *p);

int SND_IsAllAtracPaused__Fv(void) {
    ATRACInstance *p;
    ATRACInstance *end;

    p = g_AtracInstances;
    end = p + 2;
    do {
        if (SND_IsATRACPlaying__FP13ATRACInstance(p)
            && !SND_IsATRACPaused__FP13ATRACInstance(p)) {
            return 0;
        }
        p++;
    } while (p < end);
    return 1;
}
