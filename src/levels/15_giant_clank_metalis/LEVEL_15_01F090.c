extern int func_01F230(int category, int selector);
extern int func_01F000(unsigned int category, void *context, int selector);
extern int func_01EE70(unsigned int category, void *context, unsigned int slot, int selector);
extern int func_01E990(int category, int selector);

unsigned int func_01F090(void *context)
{
    unsigned int category;
    for (category = 0; category < 25; category++) {
        if (func_01F230(category, -1) != 0) {
            unsigned int slot;
            for (slot = 0; slot < 3; slot++) {
                if (func_01F000(category, context, -1) == 0 &&
                    func_01EE70(category, context, slot, -1) != 0) {
                    int entry = func_01E990(category, -1);
                    return *(unsigned char *)(entry + slot + 0x4f) != 0;
                }
            }
        }
    }
    return 0;
}
