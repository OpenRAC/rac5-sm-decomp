/* LEVEL_03.REL:0B3018 -- corps repris d une vague precedente, seuls les appels changent. */
/* LEVEL_19.REL:0A1428 -- reads two 0x10-byte records (ids 0x6C then 0x6B)
   and returns the difference of their words at 0xC, or zero when
   func_0B070 reports nothing to do. */
extern void func_0AE488(int a0, void *a1, float a2);
extern int func_0B070(void) __asm__("func_0B2070");

int func_0B3018(void)
{
    char buf[0x20];

    func_0AE488(0x6C, buf, 0.0f);
    if (!func_0B070()) {
        return 0;
    }
    func_0AE488(0x6B, buf + 0x10, 0.0f);
    return *(int *)(buf + 0x1C) - *(int *)(buf + 0x0C);
}
