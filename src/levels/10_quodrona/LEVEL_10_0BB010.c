extern unsigned int func_0BB058(unsigned int *object);

void func_0BB010(unsigned int *object) {
    object[0x74 / 4] = object[0x54 / 4] - object[0x50 / 4];
    object[0x74 / 4] /= func_0BB058(object);
}
