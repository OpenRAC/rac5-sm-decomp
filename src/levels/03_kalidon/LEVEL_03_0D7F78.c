typedef struct {
    float f[2];
    int flag;
} Elem;

typedef struct {
    Elem slots[8];
    int cur;
    int count;
} Ring;

extern void func_0D7F00(Ring *q);

int func_0D7F78(Ring *q, Elem *out)
{
    if (q->cur == q->count)
        return 0;
    if (!out)
        return 0;
    *out = q->slots[q->count];
    func_0D7F00(q);
    return 1;
}
