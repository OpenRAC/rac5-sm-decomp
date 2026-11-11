/* LEVEL_23:0x193F78 -- placement copy of LEVEL_22_137350.c: releases an optional handle, then runs two helpers on the object. */

extern void func_077F38(void *p);
extern void func_193B88(void *p);
extern void func_191998(void *p, unsigned int a1, int a2);

void func_193F78(char *a0)
{
    char *v;
    void *h;

    v = *(char **)(a0 + 0x58);
    h = *(void **)(v + 0xBC);
    if (h != 0) {
        func_077F38(h);
    }
    func_193B88(a0);
    func_191998(a0, *(unsigned char *)(a0 + 0x45), 0);
}
