/* LEVEL_10:0x1E2648 -- runs a helper, then when a float is not positive calls two slots of a record. */
extern char D_002167C0[];
extern char D_00234340[];
extern void func_02FD88(float amount, void *out, void *actor, void *other, unsigned long flags);

void func_1E2648(char *a0)
{
    char *s0;
    char *p;
    int r;
    void **fn;

    s0 = *(char **)(a0 + 0x58);
    func_02FD88(*(float *)D_002167C0, *(void **)(a0 + 0x54), a0, D_00234340, 2);
    if (*(float *)(a0 + 0x70) <= 0.0f) {
        p = *(char **)s0;
        fn = (void **)p;
        r = ((int (*)(void *))fn[0])(a0);
        ((void (*)(void *, int))fn[1])(a0, r);
    }
}
