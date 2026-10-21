/* LEVEL_05:0x078AB0 -- a 12-byte head copied on the stack, a float added,
   and the whole sample handed to the shared code. */
typedef struct {
    float x;
    float y;
    int i;
} Head;

typedef struct {
    Head h;
    float w;
} Sample;

extern void func_078AE8(Sample *s);

void func(Head *src, float w)
{
    Sample local;

    local.h = *src;
    local.w = w;
    func_078AE8(&local);
}
