/* LEVEL_04:0x0BB080 -- runs the pre-step, stores the byte value for the slot and starts the effect for the slot's record. */
extern int func_0BB060(void);
extern int func_0B3958(int, void *, float);
extern int D_00215B70[];
extern char D_00342DB0[];
void func_0BB080(int index, int unused, unsigned char value, int arg)
{
    func_0BB060();
    D_00215B70[index] = value;
    func_0B3958(arg, D_00342DB0 + index * 16, 0.0f);
}
