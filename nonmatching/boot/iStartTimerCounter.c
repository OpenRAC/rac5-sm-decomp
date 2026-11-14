/* iStartTimerCounter 0x01ED9B80 (14 November 2026).
 * Measured sdk991111: 15 differing words; first difference at 0x4.
 * Recover the observed types, statement order and lifetimes before retrying.
 * No matching credit.
 */
typedef struct {
    char pad0[8];
    unsigned int id;
    unsigned int flags;
    unsigned long long start;
} TimerCounter;

typedef struct {
    char pad0[0x1C];
    int active_id;
} TimerState;

extern TimerState D_01EFFF90;
extern unsigned long long iGetTimerSystemTime(void);
extern void func_01ED9668(TimerCounter *t);
extern void func_01ED94D8(unsigned long long now);

int iStartTimerCounter(int tag) {
    TimerState *st = &D_01EFFF90;
    TimerCounter *t;
    unsigned long long now;

    t = (TimerCounter *)(((unsigned int)tag >> 10) << 6);
    if (tag < 0 || (tag & 0x3FF) != t->id) return 0x80008002;
    if (st->active_id == tag) return 0x80000010;
    if (t->flags & 1) return 1;
    now = iGetTimerSystemTime();
    t->start = now;
    t->flags |= 1;
    if (t->flags & 2) func_01ED9668(t);
    func_01ED94D8(now);
    return 0;
}
