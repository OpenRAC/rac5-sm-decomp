/* LEVEL_01:0x18D750 -- when the global switch is on and the counter is not positive, bumps the counter and starts the effect for the first word of the object's linked record. */
extern unsigned char D_001F616C;
extern int D_0020870C;
extern void func_02B760(unsigned int value);

void func_18D750(char *o)
{
    if (D_001F616C != 0) {
        if (D_0020870C <= 0) {
            D_0020870C = D_0020870C + 1;
            func_02B760(**(int **)(o + 0x54));
        }
    }
}
