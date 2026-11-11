/* LEVEL_15:0x1141B8 -- runs three sub-object helpers, and a fourth when the flag is nonzero. */
extern void func_114050(char *p);
extern void func_114080(char *p);
extern void func_1140C8(char *p);
extern void func_1140E0(char *p);

void func_1141B8(char *a0, int a1)
{
    func_114050(a0 + 4);
    func_114080(a0 + 0x4C);
    func_1140C8(a0 + 0x98);
    if (a1 != 0) {
        func_1140E0(a0 + 0x108);
    }
}
