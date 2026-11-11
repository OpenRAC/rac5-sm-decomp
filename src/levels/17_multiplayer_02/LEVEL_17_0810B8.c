/* LEVEL_17:0x0810B8 -- placement copy of LEVEL_16_080678.c: runs a state change on the object, restoring the shared bit afterwards when it was set before. */
extern int func_08F108(int bit);
extern void func_08F0E0(unsigned int bit);
extern void func_08F0C0(int bit);
extern void func_081130(void *o, int value);

void func_0810B8(void *o, unsigned char value)
{
    int was = func_08F108(7) != 0;

    func_08F0E0(7);
    func_081130(o, value);
    if (was) {
        func_08F0C0(7);
    }
}
