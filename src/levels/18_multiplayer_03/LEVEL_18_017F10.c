/* LEVEL_18:0x017F10 -- placement copy of LEVEL_16_0188C8.c: forwards its time step to the state handler when the global state is 4 or 6. */
extern int D_001DEC68;
extern void func_112288(float a);

void func_017F10(float dt)
{
    if (D_001DEC68 == 4 || D_001DEC68 == 6)
        func_112288(dt);
}
