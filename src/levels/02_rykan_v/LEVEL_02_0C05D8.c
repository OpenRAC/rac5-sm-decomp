extern unsigned int func_0C0620(unsigned int *object);

void func_0C05D8(unsigned int *object) {
    object[0x74 / 4] = object[0x54 / 4] - object[0x50 / 4];
    object[0x74 / 4] /= func_0C0620(object);
}
