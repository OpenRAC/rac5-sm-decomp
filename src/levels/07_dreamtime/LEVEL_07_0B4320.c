/* LEVEL_07:0x0B4320 -- starts a new request: runs the shared reset, stores the mode byte and the two float parameters in globals and raises the pending flag. */
extern int D_002104B4;
extern float D_002104C0;
extern float D_002104C4;
extern char D_00210558;
extern unsigned int func_0B4288(void);

void func_0B4320(unsigned char mode, float a, float b)
{
    func_0B4288();
    D_002104B4 = mode;
    D_002104C0 = a;
    D_002104C4 = b;
    D_00210558 = 1;
}
