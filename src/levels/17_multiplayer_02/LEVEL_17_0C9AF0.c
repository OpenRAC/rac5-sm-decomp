/* LEVEL_17:0x0C9AF0 -- placement copy of LEVEL_16_0CA5B0.c: runs a guarded two-step check and calls a follow-up when both pass. */
extern int func_0248D0(int a0, int a1);
extern int func_10F1A0(int a0);
extern int func_018558(int a0);
extern unsigned int func_0AA360(void);

void func_0C9AF0(void)
{
    if (func_0248D0(0x91, 1) == 0) {
        if (func_10F1A0(0) == 3) {
            if (func_018558(6) != 0) {
                func_0AA360();
            }
        }
    }
}
