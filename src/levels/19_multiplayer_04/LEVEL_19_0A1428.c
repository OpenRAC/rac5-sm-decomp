/* LEVEL_19.REL:0A1428 -- reads two 0x10-byte records (ids 0x6C then 0x6B)
   and returns the difference of their words at 0xC, or zero when
   func_0A0480 reports nothing to do. */
extern void func_09C688(int a0, void *a1, float a2);
extern int func_0A0480(void);

int func_0A1428(void)
{
    char buf[0x20];

    func_09C688(0x6C, buf, 0.0f);
    if (!func_0A0480()) {
        return 0;
    }
    func_09C688(0x6B, buf + 0x10, 0.0f);
    return *(int *)(buf + 0x1C) - *(int *)(buf + 0x0C);
}
