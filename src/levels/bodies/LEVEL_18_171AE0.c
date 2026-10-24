/* LEVEL_18.REL:0x171AE0 -- ticks the +0x58 countdown of the record's +0x58
   owner down by one and, once it reaches zero or below, reports the owner's
   first word to func_1720C0. */
typedef struct {
    int a_0;
    unsigned char pad0[0x54];
    float v_58;
} Inner;

typedef struct {
    unsigned char pad0[0x58];
    Inner *p_58;
} Rec;

extern void func_1720C0(Rec *a0, int value);

void func_171AE0(Rec *a0)
{
    Inner *p = a0->p_58;
    int value = p->a_0;
    float left = p->v_58 - 1.0f;

    p->v_58 = left;
    if (left <= 0.0f) {
        func_1720C0(a0, value);
    }
}
