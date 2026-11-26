/* LEVEL_20:0x016680 -- placement copy of LEVEL_16_0188C8.c: forwards its time step to the state handler when the global state is 4 or 6. */
extern int D_00136268;
extern void func_0E6040(float a);

void func_016680(float dt)
{
    if (D_00136268 == 4 || D_00136268 == 6)
        func_0E6040(dt);
}
