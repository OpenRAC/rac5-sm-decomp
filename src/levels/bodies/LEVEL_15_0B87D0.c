typedef struct {
    float f[2];
    int flag;
} Elem;

typedef struct {
    Elem slots[8];
    int cur;
    int count;
} Ring;

extern void func_0B8758(Ring *q);

int func_0B87D0(Ring *q, Elem *out)
{
    if (q->cur == q->count)
        return 0;
    if (!out)
        return 0;
    *out = q->slots[q->count];
    func_0B8758(q);
    return 1;
}
