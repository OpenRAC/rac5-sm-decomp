/* LEVEL_17:0x018248 -- placement copy of LEVEL_16_0188C8.c: forwards its time step to the state handler when the global state is 4 or 6. */
extern int D_001CFBE8;
extern void func_112C60(float a);

void func_018248(float dt)
{
    if (D_001CFBE8 == 4 || D_001CFBE8 == 6)
        func_112C60(dt);
}
