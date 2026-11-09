/* FRONTEND.REL:0x007A58: reviewed 136-byte candidate, held for ABI review.
 * Seeds a chain of helper calls from the timer value.
 * pinned C with gnu-ee-trial links 136/136 bytes and is byte-exact at this and
 * 20 other USA placements, but the prototypes disagree.
 * It declares func_023808 returning long long with (long long, long long), but
 * the held byte-exact candidate FRONTEND_023808.c defines it returning void
 * with (long long, long long).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern long long GetTimerSystemTime(void);
extern long long func_0232F8(long long x);
extern long long func_023808(long long a, long long b);
extern long long func_023B70(long long a, long long b);
extern long long func_0238C8(long long a, long long b);
extern void func_023110(long long a);

void func_007A58(void)
{
    long long t;
    long long x;

    t = GetTimerSystemTime();
    if (t >= 0) {
        x = func_0232F8(t);
    } else {
        x = func_0232F8((t & 1) | (long long)((unsigned long long)t >> 1));
        x = func_023808(x, x);
    }
    x = func_023B70(x, (((long long)0x8343 << 18) | 0xA000) << 29);
    x = func_0238C8(x, (((long long)0x825D << 20) | 0x9000) << 27);
    func_023110(x);
}
