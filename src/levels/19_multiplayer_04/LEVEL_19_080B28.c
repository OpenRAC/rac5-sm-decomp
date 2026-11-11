/* LEVEL_19:0x080B28 -- placement copy of LEVEL_16_080678.c: runs a state change on the object, restoring the shared bit afterwards when it was set before. */
extern int func_08F4A8(int bit);
extern void func_08F480(unsigned int bit);
extern void func_08F460(int bit);
extern void func_080BA0(void *o, int value);

void func_080B28(void *o, unsigned char value)
{
    int was = func_08F4A8(7) != 0;

    func_08F480(7);
    func_080BA0(o, value);
    if (was) {
        func_08F460(7);
    }
}
