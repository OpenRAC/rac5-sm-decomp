/* LEVEL_16:0x0188C8 -- forwards its time step to the state handler when the global state is 4 or 6. */
extern int D_001DE8E8;
extern void func_1134D0(float a);

void func_0188C8(float dt)
{
    if (D_001DE8E8 == 4 || D_001DE8E8 == 6)
        func_1134D0(dt);
}
