/* LEVEL_16:0x0CA5B0 -- runs a guarded two-step check and calls a follow-up when both pass. */
extern int func_024F50(int a0, int a1);
extern int func_10FC28(int a0);
extern int func_018BD8(int a0);
extern unsigned int func_0AAE20(void);

void func_0CA5B0(void)
{
    if (func_024F50(0x91, 1) == 0) {
        if (func_10FC28(0) == 3) {
            if (func_018BD8(6) != 0) {
                func_0AAE20();
            }
        }
    }
}
