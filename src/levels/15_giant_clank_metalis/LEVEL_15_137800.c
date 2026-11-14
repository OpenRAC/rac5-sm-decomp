/* LEVEL_15:0x137800 -- depending on the global mode (-1: nothing, 1 or other) checks the shared state and starts effect 3 or 2; returns 0 for mode -1 and -1 otherwise. */
extern int D_002F50E8;
extern unsigned int func_1345E8(void);
extern void func_134680(int id, float a, float b);

int func_137800(void)
{
    int mode = D_002F50E8;

    if (mode == -1) {
        return 0;
    }
    if (mode == 1) {
        if (func_1345E8() != 3) {
            func_134680(3, 0.0f, 0.15f);
        }
    } else {
        if (func_1345E8() == 3) {
            func_134680(2, 0.0f, 0.15f);
        }
    }
    return -1;
}
