/* LEVEL_05:0x16B728 -- copies a three-float vector into the object's state records, runs the frame helper and clears two state words. */
extern void func_16BD08(void *a0, void *a1);
extern char D_00206D58[];

void func_16B728(char *a0, float *a1)
{
    char *s;
    char *p;

    s = *(char **)(a0 + 0x54);
    p = *(char **)(a0 + 0x58);
    *(float *)s = a1[0];
    *(float *)(s + 4) = a1[2];
    *(float *)(p + 0x18) = a1[1];
    func_16BD08(a0, D_00206D58);
    *(int *)(s + 0x1C) = 0;
    *(int *)(s + 0x20) = 0;
}
