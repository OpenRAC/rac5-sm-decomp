extern int func_024830(int category, int selector);
extern int func_024600(unsigned int category, void *context, int selector);
extern int func_024470(unsigned int category, void *context, unsigned int slot, int selector);
extern int func_023F90(int category, int selector);

unsigned int func_024690(void *context)
{
    unsigned int category;
    for (category = 0; category < 25; category++) {
        if (func_024830(category, -1) != 0) {
            unsigned int slot;
            for (slot = 0; slot < 3; slot++) {
                if (func_024600(category, context, -1) == 0 &&
                    func_024470(category, context, slot, -1) != 0) {
                    int entry = func_023F90(category, -1);
                    return *(unsigned char *)(entry + slot + 0x4f) != 0;
                }
            }
        }
    }
    return 0;
}
