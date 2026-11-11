extern int func_0241C0(int category, int selector);
extern int func_023F90(unsigned int category, void *context, int selector);
extern int func_023E00(unsigned int category, void *context, unsigned int slot, int selector);
extern int func_023920(int category, int selector);

unsigned int func_024020(void *context)
{
    unsigned int category;
    for (category = 0; category < 25; category++) {
        if (func_0241C0(category, -1) != 0) {
            unsigned int slot;
            for (slot = 0; slot < 3; slot++) {
                if (func_023F90(category, context, -1) == 0 &&
                    func_023E00(category, context, slot, -1) != 0) {
                    int entry = func_023920(category, -1);
                    return *(unsigned char *)(entry + slot + 0x4f) != 0;
                }
            }
        }
    }
    return 0;
}
