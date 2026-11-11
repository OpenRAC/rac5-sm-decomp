/* LEVEL_18:0x0C9588 -- placement copy of LEVEL_16_0CA5B0.c: runs a guarded two-step check and calls a follow-up when both pass. */
extern int func_024500(int a0, int a1);
extern int func_10E8D8(int a0);
extern int func_018220(int a0);
extern unsigned int func_0A9DF8(void);

void func_0C9588(void)
{
    if (func_024500(0x91, 1) == 0) {
        if (func_10E8D8(0) == 3) {
            if (func_018220(6) != 0) {
                func_0A9DF8();
            }
        }
    }
}
