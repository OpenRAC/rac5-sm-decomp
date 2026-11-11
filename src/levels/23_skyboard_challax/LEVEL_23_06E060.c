/* LEVEL_23:06E060 -- forwards the selected table row's values to the level's
   routine. */
extern char D_001EBED8[];
extern void func_06DEA8(void *a0, void *a1, void *a2, void *a3, float f12,
                        float f13);
void func_06E060(void *a0, int a1, void *a2, void *a3, float f12)
{
    char *p = D_001EBED8 + (a1 << 4);

    func_06DEA8(a0, a2, a3, *(void **)(p + 0xC), *(float *)(p + 0x4), f12);
}
