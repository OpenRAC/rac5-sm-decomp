/* LEVEL_15:0x1377B8 -- while the mode word is 1, starts effect 3 with a zero start and a 0.15 rate. */
extern int D_002F50E8;
extern void func_134680(int index, float start, float rate);

void func_1377B8(void)
{
    if (D_002F50E8 == 1) {
        func_134680(3, 0.0f, 0.15f);
    }
}
