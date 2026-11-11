extern int func_025748(int category, int selector);
extern int func_025518(unsigned int category, void *context, int selector);
extern int func_025388(unsigned int category, void *context, unsigned int slot, int selector);
extern int func_024EA8(int category, int selector);

unsigned int func_0255A8(void *context)
{
    unsigned int category;
    for (category = 0; category < 25; category++) {
        if (func_025748(category, -1) != 0) {
            unsigned int slot;
            for (slot = 0; slot < 3; slot++) {
                if (func_025518(category, context, -1) == 0 &&
                    func_025388(category, context, slot, -1) != 0) {
                    int entry = func_024EA8(category, -1);
                    return *(unsigned char *)(entry + slot + 0x4f) != 0;
                }
            }
        }
    }
    return 0;
}
