extern int func_025828(int category, int selector);
extern int func_0255F8(unsigned int category, void *context, int selector);
extern int func_025468(unsigned int category, void *context, unsigned int slot, int selector);
extern int func_024F88(int category, int selector);

unsigned int func_025688(void *context)
{
    unsigned int category;
    for (category = 0; category < 25; category++) {
        if (func_025828(category, -1) != 0) {
            unsigned int slot;
            for (slot = 0; slot < 3; slot++) {
                if (func_0255F8(category, context, -1) == 0 &&
                    func_025468(category, context, slot, -1) != 0) {
                    int entry = func_024F88(category, -1);
                    return *(unsigned char *)(entry + slot + 0x4f) != 0;
                }
            }
        }
    }
    return 0;
}
