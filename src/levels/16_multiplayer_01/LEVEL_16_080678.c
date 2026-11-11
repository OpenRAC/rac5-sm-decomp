/* LEVEL_16:0x080678 -- runs a state change on the object, restoring the shared bit afterwards when it was set before. */
extern int func_08FC10(int bit);
extern void func_08FBE8(unsigned int bit);
extern void func_08FBC8(int bit);
extern void func_0806F0(void *o, int value);

void func_080678(void *o, unsigned char value)
{
    int was = func_08FC10(7) != 0;

    func_08FBE8(7);
    func_0806F0(o, value);
    if (was) {
        func_08FBC8(7);
    }
}
