/* sceSifRemoveRpcQueue 0x01ED49F0 -- unlinks a data queue from the global queue list with interrupts disabled; returns the predecessor (or the list head). */
typedef struct SifQueue {
    char pad0[0x14];
    struct SifQueue *link;
} SifQueue;

typedef struct {
    char pad0[0x28];
    SifQueue *head;
} SifQueueList;

extern SifQueueList D_01FE58C0;
extern int DIntr(void);
extern int EIntr(void);

SifQueue *sceSifRemoveRpcQueue(SifQueue *qd) {
    SifQueue *s;

    DIntr();
    s = D_01FE58C0.head;
    if (s == qd) {
        D_01FE58C0.head = s->link;
    } else {
        while (s != 0) {
            if (s->link == qd) {
                s->link = qd->link;
                break;
            }
            s = s->link;
        }
    }
    EIntr();
    return s;
}
