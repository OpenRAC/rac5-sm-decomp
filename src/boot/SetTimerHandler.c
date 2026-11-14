/* SetTimerHandler 0x01ED9DC0 -- interrupt-safe wrapper around the interrupt-context timer handler setter. */
extern int DIntr(void);
extern int EIntr(void);
extern int iSetTimerHandler(int id, int a, int b, int c);

int SetTimerHandler(int id, int a, int b, int c) {
    int was;
    int r;

    was = DIntr();
    r = iSetTimerHandler(id, a, b, c);
    if (was != 0) EIntr();
    return r;
}
