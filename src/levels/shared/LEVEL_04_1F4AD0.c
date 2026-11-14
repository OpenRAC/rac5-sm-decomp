/* LEVEL_04:0x1F4AD0 -- counts down the timer of every queued entry and removes the expired ones by moving the last entry into their slot. */
typedef struct {
    int val[8];
    unsigned char timer[8];
    unsigned char count;
} Queue;

void func_1F4AD0(Queue *q)
{
    unsigned int i;
    unsigned char *t;

    i = 0;
    if (q->count != 0) {
        t = q->timer;
        do {
            *t -= 1;
            if (*t == 0) {
                q->count -= 1;
                q->val[i] = q->val[q->count];
                i--;
                *t = q->timer[q->count];
                t--;
            }
            i++;
            t++;
        } while (i < q->count);
    }
}
