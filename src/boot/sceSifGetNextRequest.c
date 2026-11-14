/* sceSifGetNextRequest 0x01ED4A80 -- pops the next pending request from a data queue with interrupts disabled and updates the queue's active flag. */
typedef struct SifRequest {
    char pad0[0x3C];
    struct SifRequest *next;
} SifRequest;

typedef struct {
    char pad0[4];
    int active;
    char pad8[4];
    SifRequest *pending;
} SifDataQueue;

extern int DIntr(void);
extern int EIntr(void);

SifRequest *sceSifGetNextRequest(SifDataQueue *qd) {
    SifRequest *r;

    DIntr();
    r = qd->pending;
    if (r == 0) {
        qd->active = 0;
    } else {
        qd->active = 1;
        qd->pending = r->next;
    }
    EIntr();
    return r;
}
