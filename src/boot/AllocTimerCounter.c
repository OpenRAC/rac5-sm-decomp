/* AllocTimerCounter 0x01ED9B20 -- interrupt-safe wrapper around the interrupt-context timer allocator. */
extern int DIntr(void);
extern int EIntr(void);
extern int iAllocTimerCounter(void);

int AllocTimerCounter(void) {
    int was;
    int r;

    was = DIntr();
    r = iAllocTimerCounter();
    if (was != 0) EIntr();
    return r;
}
