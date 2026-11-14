/* sceSifRemoveRpc 0x01ED4958 -- unlinks a server record from a queue's singly linked list with interrupts disabled; returns the predecessor (or the queue head). */
typedef struct SifServer {
    char pad0[0x38];
    struct SifServer *link;
} SifServer;

typedef struct {
    char pad0[8];
    SifServer *head;
} SifQueue;

extern int DIntr(void);
extern int EIntr(void);

SifServer *sceSifRemoveRpc(SifServer *sd, SifQueue *qd) {
    SifServer *s;

    DIntr();
    s = qd->head;
    if (s == sd) {
        qd->head = s->link;
    } else {
        while (s != 0) {
            if (s->link == sd) {
                s->link = sd->link;
                break;
            }
            s = s->link;
        }
    }
    EIntr();
    return s;
}
