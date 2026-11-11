/* LEVEL_06:0x14DF10 -- returns one of four codes from two byte flags after two helper calls. */
struct Inner10 {
    char pad0[0x30];
    void *f30;
    char pad1[0x3C - 0x34];
    unsigned char b3C;
    unsigned char b3D;
};

struct Outer10 {
    char pad0[0x54];
    struct Inner10 *p54;
};

void func_018B30(int *p);
int func_07D818(void *a, int *b);

int func_14DF10(struct Outer10 *a0)
{
    struct Inner10 *s0;
    int tmp;

    s0 = a0->p54;
    func_018B30(&tmp);
    if (func_07D818(s0->f30, &tmp) == 0) {
        return s0->b3D == 0 ? 3 : 4;
    }
    return s0->b3C == 0 ? 6 : 7;
}
