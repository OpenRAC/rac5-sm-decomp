/* StartTimerCounter 0x01ED9C30 -- interrupt-safe wrapper around the interrupt-context timer start. */
extern int DIntr(void);
extern int EIntr(void);
extern int iStartTimerCounter(int id);

int StartTimerCounter(int id) {
    int was;
    int r;

    was = DIntr();
    r = iStartTimerCounter(id);
    if (was != 0) EIntr();
    return r;
}
