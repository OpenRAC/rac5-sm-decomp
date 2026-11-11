/* LEVEL_04:0x19AC50 -- queues up to a given number of the listed entries that pass the test into the owner's pending slots, choosing at random when more qualify than allowed. */
typedef struct {
    int slot[24];
    char pad_60;
    unsigned char count;
} Queue;

typedef struct {
    char pad_00[0x58];
    Queue *queue;
} Owner;

extern int rand(void);
extern int func_19CBC8(int item);
extern int func_19CCE8(int item);

void func_19AC50(Owner *o, int *items, unsigned int n, unsigned int limit)
{
    int cand[4];
    int found;
    unsigned int i;
    unsigned int j;
    unsigned int k;
    int item;
    int idx;
    Queue *q;

    found = 0;
    q = o->queue;
    for (i = 0; i < n; i++) {
        item = items[i];
        if (func_19CBC8(item)) {
            cand[found] = item;
            found++;
        }
    }
    if (found <= limit) {
        for (j = 0; j < found; j++) {
            q->slot[q->count] = func_19CCE8(cand[j]);
            if (q->slot[q->count] == 0)
                return;
            q->count++;
        }
    } else {
        for (k = 0; k < limit; k++) {
            idx = found ? rand() % found : 0;
            q->slot[q->count] = func_19CCE8(cand[idx]);
            if (q->slot[q->count] == 0)
                return;
            q->count++;
            found--;
            cand[idx] = cand[found];
        }
    }
}
