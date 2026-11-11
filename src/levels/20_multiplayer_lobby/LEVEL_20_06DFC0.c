/* LEVEL_20:0x06DFC0 -- placement copy of LEVEL_16_080678.c: runs a state change on the object, restoring the shared bit afterwards when it was set before. */
extern int func_07A310(int bit);
extern void func_07A2E8(unsigned int bit);
extern void func_07A2C8(int bit);
extern void func_06E038(void *o, int value);

void func_06DFC0(void *o, unsigned char value)
{
    int was = func_07A310(7) != 0;

    func_07A2E8(7);
    func_06E038(o, value);
    if (was) {
        func_07A2C8(7);
    }
}
