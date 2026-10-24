/* LEVEL_10:000508 -- resolves the global handle and reads its field at +0x10. */
extern int D_0023EB10;
extern void *func_000638(int a0);
float func_000508(void)
{
    return *(float *)((char *)func_000638(D_0023EB10) + 0x10);
}
