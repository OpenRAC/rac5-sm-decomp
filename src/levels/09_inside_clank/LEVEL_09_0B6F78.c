extern unsigned int func_0B6FC0(unsigned int *object);

void func_0B6F78(unsigned int *object) {
    object[0x74 / 4] = object[0x54 / 4] - object[0x50 / 4];
    object[0x74 / 4] /= func_0B6FC0(object);
}
