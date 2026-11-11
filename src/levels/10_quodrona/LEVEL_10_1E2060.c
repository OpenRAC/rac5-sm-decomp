/* LEVEL_10:0x1E2060 -- calls a virtual slot of a child record when its member flag equals 2. */
void func_1E2060(char *object)
{
    char *child = *(char **)(object + 0x58);
    char *member = *(char **)(child + 0x60);
    unsigned int flag = *(unsigned char *)(member + 0x45) ^ 2u;
    if (flag == 0) {
        char *vtable = *(char **)child;
        void (*fn)(char *, int) = *(void (**)(char *, int))(vtable + 4);
        fn(object, 12);
    }
}
