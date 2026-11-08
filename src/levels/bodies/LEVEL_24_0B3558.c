extern unsigned int func_0B35A0(unsigned int *object);

void func_0B3558(unsigned int *object) {
    object[0x74 / 4] = object[0x54 / 4] - object[0x50 / 4];
    object[0x74 / 4] /= func_0B35A0(object);
}
