/* LEVEL_09:0x0D5440 -- the slot of the ring is copied out; the routine
   returns zero when the ring holds nothing yet. */
typedef struct {
    float f[2];
    int flag;
} Elem;

typedef struct {
    Elem slots[8];
    int cur;
    int count;
} Ring;

extern void func_0D53C8(Ring *q);

int func_0D5440(Ring *q, Elem *out)
{
    if (q->cur == q->count)
        return 0;
    if (!out)
        return 0;
    *out = q->slots[q->count];
    func_0D53C8(q);
    return 1;
}
