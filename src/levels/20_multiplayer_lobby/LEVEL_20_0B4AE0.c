/* LEVEL_20:0x0B4AE0 -- placement copy of LEVEL_16_0CA5B0.c: runs a guarded two-step check and calls a follow-up when both pass. */
extern int func_021AC8(int a0, int a1);
extern int func_0E2A10(int a0);
extern int func_016990(int a0);
extern unsigned int func_095350(void);

void func_0B4AE0(void)
{
    if (func_021AC8(0x91, 1) == 0) {
        if (func_0E2A10(0) == 3) {
            if (func_016990(6) != 0) {
                func_095350();
            }
        }
    }
}
