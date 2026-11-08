extern int func_022CA0(int category, int selector);
extern int func_022A70(unsigned int category, void *context, int selector);
extern int func_0228E0(unsigned int category, void *context, unsigned int slot, int selector);
extern int func_022400(int category, int selector);

unsigned int func_022B00(void *context)
{
    unsigned int category;
    for (category = 0; category < 25; category++) {
        if (func_022CA0(category, -1) != 0) {
            unsigned int slot;
            for (slot = 0; slot < 3; slot++) {
                if (func_022A70(category, context, -1) == 0 &&
                    func_0228E0(category, context, slot, -1) != 0) {
                    int entry = func_022400(category, -1);
                    return *(unsigned char *)(entry + slot + 0x4f) != 0;
                }
            }
        }
    }
    return 0;
}
