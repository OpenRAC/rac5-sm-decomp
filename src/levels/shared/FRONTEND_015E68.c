/* FRONTEND:0x015E68 -- pushes a 12-byte item into an 8-entry ring, returns 1 if stored. */
typedef struct { int a; int b; int c; } Item;
typedef struct { Item items[8]; int head; int pad_64; int count; } Q;
int func_015E68(void *a0, void *a1)
{
    Q *q = (Q *)a0;
    Item tmp;
    tmp = *(Item *)a1;
    if ((q->count ^ 8) == 0) return 0;
    q->items[q->head] = tmp;
    q->head++;
    if (q->head == 8) q->head = 0;
    q->count++;
    return 1;
}
