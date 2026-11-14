/* LEVEL_03:0x18C190 -- clears five slot ids of the object's linked record, calling the slot release for each id that is in use. */
extern void func_0180C0(int id, int mode);

void func_18C190(unsigned char *object)
{
    unsigned int i;
    unsigned char *id = *(unsigned char **)(object + 0x54) + 0x21;

    for (i = 0; i < 5; ++i, ++id) {
        if (*id != 255) {
            func_0180C0(*id, 0);
        }
    }
}
