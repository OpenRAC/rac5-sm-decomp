extern unsigned int func_0A8638(unsigned int *object);

void func_0A85F0(unsigned int *object) {
    object[0x74 / 4] = object[0x54 / 4] - object[0x50 / 4];
    object[0x74 / 4] /= func_0A8638(object);
}
