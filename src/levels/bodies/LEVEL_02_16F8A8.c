/* LEVEL_02:0x16F8A8 -- updates a packed byte from a float threshold and triggers a callback. */
typedef struct S {
    char pad0[0x68];
    unsigned int w;
    char pad6C[4];
    float t;
} S;
extern unsigned int func_1FFF10(float);
extern void func_082F58(S *, int);
void func_16F8A8(S *s)
{
    float v = (float)(s->w >> 24) - 11.333333f;
    if (v >= 0.0f)
        s->w = (func_1FFF10(v) << 24) | (s->w & 0xFFFFFF);
    if (s->t >= 22.5f)
        func_082F58(s, 1);
}
