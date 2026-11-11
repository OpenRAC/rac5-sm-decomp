/* LEVEL_02:0x169C78 -- calls a data-address helper, a probe, and two object helpers; the probe result and byte fields are passed on. */
extern char D_0024C650[];
extern void func_01AB40(char *p);
extern int func_16B2F0(char *obj);
extern void func_1698B8(char *obj, int a1, int a2);
extern void func_16BD98(char *a0, int a1, int a2);

void func_169C78(char *a0)
{
    char *s1;
    char *base;
    int r;

    s1 = *(char **)(a0 + 0x54);
    base = D_0024C650;
    func_01AB40(base + 0x30);
    r = func_16B2F0(a0);
    func_1698B8(a0, *(unsigned char *)(a0 + 0x45), r);
    func_16BD98(*(char **)(s1 + 0x10), *(unsigned char *)(s1 + 0x58), 0);
}
