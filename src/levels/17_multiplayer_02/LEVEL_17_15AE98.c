/* LEVEL_17:0x15AE98 -- placement copy of LEVEL_16_164070.c: initialises the object's data block: clears 0x2C bytes, raises the two flag bytes at +0x1A, sets the two scale floats to 1 and runs the shared start helper; reports success. */
extern void *memset(void *, int, unsigned int);
extern void func_117E78(char *obj, int a, unsigned int b, int c, int d);

int func_15AE98(char *obj)
{
    char *data;
    char *flags;
    unsigned int i;

    data = *(char **)(obj + 0x58);
    memset(data, 0, 0x2C);
    flags = data + 0x1A;
    for (i = 0; i < 2; i++) {
        flags[i] = 1;
    }
    *(float *)(data + 0x24) = 1.0f;
    *(float *)(data + 0x28) = 1.0f;
    func_117E78(obj, 0x53, 0xFFFFFFFFu, 6, 6);
    *(unsigned char *)(obj + 0x46) = 0;
    return 1;
}
