extern unsigned int func_0BBD70(unsigned int *object);

void func_0BBD28(unsigned int *object) {
    object[0x74 / 4] = object[0x54 / 4] - object[0x50 / 4];
    object[0x74 / 4] /= func_0BBD70(object);
}
