/* LEVEL_18:0x07FFC0 -- placement copy of LEVEL_16_080678.c: runs a state change on the object, restoring the shared bit afterwards when it was set before. */
extern int func_08EC28(int bit);
extern void func_08EC00(unsigned int bit);
extern void func_08EBE0(int bit);
extern void func_080038(void *o, int value);

void func_07FFC0(void *o, unsigned char value)
{
    int was = func_08EC28(7) != 0;

    func_08EC00(7);
    func_080038(o, value);
    if (was) {
        func_08EBE0(7);
    }
}
