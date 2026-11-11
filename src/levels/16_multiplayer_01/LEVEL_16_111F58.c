extern void func_112388(void);

void func_111F58(char *holder)
{
    unsigned int index;
    func_112388();
    *(int *)(holder + 0x34) = -1;
    *(int *)(holder + 0x30) = 0;
    if (*(int *)(holder + 0x24) != 0) {
        for (index = 0; index < *(unsigned int *)(holder + 0x28); index++) {
            char **table = *(char ***)(holder + 0x24);
            char *object = table[index];
            char *methods = *(char **)(object + 0x14);
            void (*method)(char *) = *(void (**)(char *))(methods + 0x2c);
            method(object + *(short *)(methods + 0x28));
        }
    }
}
