/* LEVEL_22:0x0119B0 -- placement copy of LEVEL_20_0117E0.c: calls func_0FB498 with a fixed target, 62.831852 and 20.0 plus a float read from a neighbouring global. */
extern float D_00181168;
extern char D_001811A0[];

extern void func_0FB498(void *, float, float, float);

void func_0119B0(void)
{
    func_0FB498(D_001811A0, 62.831852f, 20.0f, D_00181168);
}
