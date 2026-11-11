typedef struct {
    float pad0[2];
    float f8;
} T;

typedef struct {
    unsigned char pad0[0x45];
    unsigned char state;
    unsigned char pad1[2];
    T *p48;
} S;

extern void func_07ECC0(S *s, int a, float b);

void func_1885C8(S *s)
{
    if (s->state == 0 || s->state == 3) {
        s->state = 1;
        func_07ECC0(s, 2, 0.0f);
        s->p48->f8 = 2.0f;
    }
}
