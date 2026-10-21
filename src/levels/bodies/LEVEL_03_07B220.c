/* LEVEL_03:0x07B220 -- builds the call record on the stack and hands it
   over to the shared player code. */
typedef struct {
    float x;
    float y;
} Vec2;

typedef struct {
    Vec2 v;
    int i;
} Small;

typedef struct {
    Small s;
    float w;
} Big;

void func_07B258(Big *b);

void func_07B220(Small *src, float w)
{
    Big b;

    b.s = *src;
    b.w = w;
    func_07B258(&b);
}
