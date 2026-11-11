/* LEVEL_19:0x15D0C0 -- bumps a byte counter, calls two helpers. */
extern void func_11E2E8(void *a, float f, float g);
extern void func_15D2A8(void *o, int v, int w);

int func_15D0C0(void *o)
{
    unsigned char *s;
    int v;

    s = *(unsigned char **)((char *)o + 0x58);
    v = s[0x3D] + 1;
    s[0x3D] = v;
    func_11E2E8(*(void **)(s + 0x28), (float)(v & 0xFF), 3.0f);
    if (s[0x3D] >= 3) {
        func_15D2A8(o, 1, 0);
    }
    return s[0x3D] - 1;
}
