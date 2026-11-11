/* LEVEL_19:0x0C9E88 -- placement copy of LEVEL_16_0CA5B0.c: runs a guarded two-step check and calls a follow-up when both pass. */
extern int func_024AF8(int a0, int a1);
extern int func_1102C8(int a0);
extern int func_0188D8(int a0);
extern unsigned int func_0AA6F8(void);

void func_0C9E88(void)
{
    if (func_024AF8(0x91, 1) == 0) {
        if (func_1102C8(0) == 3) {
            if (func_0188D8(6) != 0) {
                func_0AA6F8();
            }
        }
    }
}
