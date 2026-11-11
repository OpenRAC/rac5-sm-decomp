extern int func_01FD00(int category, int selector);
extern int func_01FAD0(unsigned int category, void *context, int selector);
extern int func_01F940(unsigned int category, void *context, unsigned int slot, int selector);
extern int func_01F460(int category, int selector);

unsigned int func_01FB60(void *context)
{
    unsigned int category;
    for (category = 0; category < 25; category++) {
        if (func_01FD00(category, -1) != 0) {
            unsigned int slot;
            for (slot = 0; slot < 3; slot++) {
                if (func_01FAD0(category, context, -1) == 0 &&
                    func_01F940(category, context, slot, -1) != 0) {
                    int entry = func_01F460(category, -1);
                    return *(unsigned char *)(entry + slot + 0x4f) != 0;
                }
            }
        }
    }
    return 0;
}
