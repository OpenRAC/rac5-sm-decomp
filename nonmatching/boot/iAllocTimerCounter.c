/* iAllocTimerCounter 0x01ED9AB0 (14 November 2026).
 * Measured sdk991111: 15 differing words; first difference at 0xC.
 * Recover the observed types, statement order and lifetimes before retrying.
 * No matching credit.
 */
typedef struct TimerCounter {
    struct TimerCounter *next;
    char pad4[4];
    unsigned int id;
    unsigned int w0C;
    char pad10[8];
    unsigned long long q18;
    char pad20[8];
    unsigned int w28;
} TimerCounter;

typedef struct {
    char pad0[0xC];
    unsigned int serial;
    unsigned int used;
    TimerCounter *free_list;
} TimerState;

extern TimerState D_01EFFF90;

int iAllocTimerCounter(void) {
    TimerCounter *t;

    t = D_01EFFF90.free_list;
    if (t == 0) return 0x80008005;
    D_01EFFF90.used++;
    t->w28 = 0;
    D_01EFFF90.free_list = t->next;
    t->w0C = 0;
    D_01EFFF90.serial++;
    t->q18 = 0;
    t->id = ((D_01EFFF90.serial << 1) & 0x3FE) | 1;
    return ((int)t << 4) | t->id;
}
