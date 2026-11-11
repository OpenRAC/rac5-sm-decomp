extern int func_024D98(int category, int selector);
extern int func_024B68(unsigned int category, void *context, int selector);
extern int func_0249D8(unsigned int category, void *context, unsigned int slot, int selector);
extern int func_0244F8(int category, int selector);

unsigned int func_024BF8(void *context)
{
    unsigned int category;
    for (category = 0; category < 25; category++) {
        if (func_024D98(category, -1) != 0) {
            unsigned int slot;
            for (slot = 0; slot < 3; slot++) {
                if (func_024B68(category, context, -1) == 0 &&
                    func_0249D8(category, context, slot, -1) != 0) {
                    int entry = func_0244F8(category, -1);
                    return *(unsigned char *)(entry + slot + 0x4f) != 0;
                }
            }
        }
    }
    return 0;
}
