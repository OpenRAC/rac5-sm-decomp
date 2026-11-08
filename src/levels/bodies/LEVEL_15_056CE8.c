extern void func_0F4DF8(void *object);
extern void func_057FA8(void *context);

unsigned int func_056CE8(unsigned char *self, unsigned int value) {
    if (*(unsigned short *)(self + 0x108) != 999) {
        *(unsigned short *)(self + 0x108) = 999;
        *(unsigned short *)(self + 0x10A) = 999;
        if (self[0xBC8] == 0) {
            func_0F4DF8(*(void **)(self + 0x5A4));
            self[0xBC8] = 1;
        }
        *(void (**)(void *))(*(char **)(*(char **)(self + 0x5A4) + 0x48) + 0xDC) = func_057FA8;
        *(unsigned char **)(*(char **)(*(char **)(self + 0x5A4) + 0x48) + 0xE4) = self;
        *(unsigned int *)(self + 0xB8C) = value;
        *(unsigned int *)(self + 0xB94) = 0;
        *(unsigned int *)(self + 0xB90) = 0;
    }
    return 0;
}
