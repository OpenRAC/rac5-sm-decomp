extern int func_024B48(int category, int selector);
extern int func_024918(unsigned int category, void *context, int selector);
extern int func_024788(unsigned int category, void *context, unsigned int slot, int selector);
extern int func_0242A8(int category, int selector);

unsigned int func_0249A8(void *context)
{
    unsigned int category;
    for (category = 0; category < 25; category++) {
        if (func_024B48(category, -1) != 0) {
            unsigned int slot;
            for (slot = 0; slot < 3; slot++) {
                if (func_024918(category, context, -1) == 0 &&
                    func_024788(category, context, slot, -1) != 0) {
                    int entry = func_0242A8(category, -1);
                    return *(unsigned char *)(entry + slot + 0x4f) != 0;
                }
            }
        }
    }
    return 0;
}
