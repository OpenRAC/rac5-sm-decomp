extern int func_025490(int category, int selector);
extern int func_025260(unsigned int category, void *context, int selector);
extern int func_0250D0(unsigned int category, void *context, unsigned int slot, int selector);
extern int func_024BF0(int category, int selector);

unsigned int func_0252F0(void *context)
{
    unsigned int category;
    for (category = 0; category < 25; category++) {
        if (func_025490(category, -1) != 0) {
            unsigned int slot;
            for (slot = 0; slot < 3; slot++) {
                if (func_025260(category, context, -1) == 0 &&
                    func_0250D0(category, context, slot, -1) != 0) {
                    int entry = func_024BF0(category, -1);
                    return *(unsigned char *)(entry + slot + 0x4f) != 0;
                }
            }
        }
    }
    return 0;
}
