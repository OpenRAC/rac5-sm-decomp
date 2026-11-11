extern unsigned int func_09A358(unsigned int *object);

void func_09A310(unsigned int *object) {
    object[0x74 / 4] = object[0x54 / 4] - object[0x50 / 4];
    object[0x74 / 4] /= func_09A358(object);
}
