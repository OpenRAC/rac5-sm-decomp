/* LEVEL_10:0x0B3438 -- runs the shared reset, then stores the mode byte and the two float parameters in globals. */
extern int D_002051B8;
extern float D_002051C8;
extern float D_002051CC;
extern unsigned int func_0B33A0(void);

void func_0B3438(unsigned char mode, float a, float b)
{
    func_0B33A0();
    D_002051B8 = mode;
    D_002051C8 = a;
    D_002051CC = b;
}
