extern int func_023E60(int category, int selector);
extern int func_023C30(unsigned int category, void *context, int selector);
extern int func_023AA0(unsigned int category, void *context, unsigned int slot, int selector);
extern int func_0235C0(int category, int selector);

unsigned int func_023CC0(void *context)
{
    unsigned int category;
    for (category = 0; category < 25; category++) {
        if (func_023E60(category, -1) != 0) {
            unsigned int slot;
            for (slot = 0; slot < 3; slot++) {
                if (func_023C30(category, context, -1) == 0 &&
                    func_023AA0(category, context, slot, -1) != 0) {
                    int entry = func_0235C0(category, -1);
                    return *(unsigned char *)(entry + slot + 0x4f) != 0;
                }
            }
        }
    }
    return 0;
}
