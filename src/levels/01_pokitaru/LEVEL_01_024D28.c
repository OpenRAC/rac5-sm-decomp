extern int func_024EC8(int category, int selector);
extern int func_024C98(unsigned int category, void *context, int selector);
extern int func_024B08(unsigned int category, void *context, unsigned int slot, int selector);
extern int func_024628(int category, int selector);

unsigned int func_024D28(void *context)
{
    unsigned int category;
    for (category = 0; category < 25; category++) {
        if (func_024EC8(category, -1) != 0) {
            unsigned int slot;
            for (slot = 0; slot < 3; slot++) {
                if (func_024C98(category, context, -1) == 0 &&
                    func_024B08(category, context, slot, -1) != 0) {
                    int entry = func_024628(category, -1);
                    return *(unsigned char *)(entry + slot + 0x4f) != 0;
                }
            }
        }
    }
    return 0;
}
