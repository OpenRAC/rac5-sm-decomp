extern unsigned int func_093290(unsigned int *object);

void func_093248(unsigned int *object) {
    object[0x74 / 4] = object[0x54 / 4] - object[0x50 / 4];
    object[0x74 / 4] /= func_093290(object);
}
