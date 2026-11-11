/* LEVEL_01:0x1866F8 -- raises the flag byte of the record and sets the
   scalar carried by the inner object to 2.0. */
struct Inner {
    char pad000[0x290];
    float f;
};

struct Outer {
    char pad000[0x46];
    unsigned char flag;
    char pad047[0x58 - 0x47];
    struct Inner *inner;
};

void func_1866F8(struct Outer *a0)
{
    a0->flag = 3;
    a0->inner->f = 2.0f;
}
