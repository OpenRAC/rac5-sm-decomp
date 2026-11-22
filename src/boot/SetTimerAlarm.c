/* boot:0x01ED9F70 -- takes a free alarm node and timer counter, installs the alarm handler and starts the counter. Ported from OpenRAC/rac4-decomp src/core/0012E978.c (func_0012E978). */
typedef struct Type1 {
    struct Type1 *f0;
    volatile int id;
    void *f8;
    void *arg;
} Type1;
extern Type1 *D_01FE99C0;
extern int AllocTimerCounter(void);
extern int SetTimerHandler(int id, int arg0, void *cb, void *arg);
extern void StartTimerCounter(int id);
extern void func_01ED9F10();
extern int DIntr(void);
extern int EIntr(void);

int SetTimerAlarm(int arg0, void *f8, void *arg)
{
    Type1 *p;
    Type1 *q;
    int di;
    int id;

    if (f8 == 0) {
        return 0x80000016;
    }
    di = DIntr();
    q = D_01FE99C0;
    if (q) {
        D_01FE99C0 = q->f0;
    }
    p = q;
    if (p == 0) {
        if (di) {
            EIntr();
        }
        return 0x80008005;
    }
    id = AllocTimerCounter();
    if (id < 0) {
        p->f0 = D_01FE99C0;
        D_01FE99C0 = p;
        p->id = 0;
        if (di) {
            EIntr();
        }
        return id;
    }
    p->f8 = f8;
    p->arg = arg;
    p->id = id;
    SetTimerHandler(id, arg0, func_01ED9F10, p);
    StartTimerCounter(id);
    if (di) {
        EIntr();
    }
    return ((unsigned int)p << 4) | (id & 0xFE) | 1;
}
