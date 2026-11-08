extern int func_022F68(int category, int selector);
extern int func_022D38(unsigned int category, void *context, int selector);
extern int func_022BA8(unsigned int category, void *context, unsigned int slot, int selector);
extern int func_0226C8(int category, int selector);

unsigned int func_022DC8(void *context)
{
    unsigned int category;
    for (category = 0; category < 25; category++) {
        if (func_022F68(category, -1) != 0) {
            unsigned int slot;
            for (slot = 0; slot < 3; slot++) {
                if (func_022D38(category, context, -1) == 0 &&
                    func_022BA8(category, context, slot, -1) != 0) {
                    int entry = func_0226C8(category, -1);
                    return *(unsigned char *)(entry + slot + 0x4f) != 0;
                }
            }
        }
    }
    return 0;
}
