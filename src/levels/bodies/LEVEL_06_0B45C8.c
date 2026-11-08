extern unsigned int func_0B4610(unsigned int *object);

void func_0B45C8(unsigned int *object) {
    object[0x74 / 4] = object[0x54 / 4] - object[0x50 / 4];
    object[0x74 / 4] /= func_0B4610(object);
}
