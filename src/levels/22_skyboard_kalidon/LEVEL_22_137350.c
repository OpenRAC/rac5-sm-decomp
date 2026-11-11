/* LEVEL_22:0x137350 -- releases an optional handle, then runs two helpers on the object. */

extern void func_073510(void *p);
extern void func_136F60(void *p);
extern void func_134D70(void *p, unsigned int a1, int a2);

void func_137350(char *a0)
{
    char *v;
    void *h;

    v = *(char **)(a0 + 0x58);
    h = *(void **)(v + 0xBC);
    if (h != 0) {
        func_073510(h);
    }
    func_136F60(a0);
    func_134D70(a0, *(unsigned char *)(a0 + 0x45), 0);
}
