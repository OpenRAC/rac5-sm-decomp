/* LEVEL_06.REL:0x192978 -- ticks the +0x18 countdown of the +0x54 owner down by
   one and, once it reaches zero or below, reports the +0x58 owner's first word
   to func_192F48. */
typedef struct {
    unsigned char pad0[0x18];
    float v_18;
} Owner;

typedef struct {
    int i_0;
} Inner;

typedef struct {
    unsigned char pad0[0x54];
    Owner *p_54;
    Inner *p_58;
} Rec;

extern void func_192F48(Rec *a0, int value);

void func_192978(Rec *a0)
{
    Owner *p = a0->p_54;
    int value = a0->p_58->i_0;
    float left = p->v_18 - 1.0f;

    p->v_18 = left;
    if (left <= 0.0f) {
        func_192F48(a0, value);
    }
}
