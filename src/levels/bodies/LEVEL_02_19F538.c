/* LEVEL_02:0x19F538 -- bumps a float field, clears a flag and a word when the old value is above a threshold, then runs two helpers. */

struct Obj10 {
    char pad0[0x45];
    unsigned char b45;
    char pad1[0x70 - 0x46];
    float f70;
};

void func_19F808(struct Obj10 *p, int v);
void func_19F998(struct Obj10 *p);

void func_19F538(struct Obj10 *a0)
{
    float tmp;
    float old;

    tmp = a0->f70;
    old = tmp;
    tmp = tmp + 1.0f;
    a0->f70 = tmp;
    if (20.0001010894775390625f < old) {
        a0->b45 = 0;
        *(int *)&a0->f70 = 0;
    }
    func_19F808(a0, 0);
    func_19F998(a0);
}
