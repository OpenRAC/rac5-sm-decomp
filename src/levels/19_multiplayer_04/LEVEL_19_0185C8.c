/* LEVEL_19:0x0185C8 -- placement copy of LEVEL_16_0188C8.c: forwards its time step to the state handler when the global state is 4 or 6. */
extern int D_001DEA68;
extern void func_113C78(float a);

void func_0185C8(float dt)
{
    if (D_001DEA68 == 4 || D_001DEA68 == 6)
        func_113C78(dt);
}
