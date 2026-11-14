/* LEVEL_04:0x1D6478 -- resets the object's state block and records the three looked-up byte values from its data. */
extern unsigned int func_014810(int *p, unsigned int n);

void func_1D6478(char *object)
{
    int *data;
    char *state;

    state = *(char **)(object + 0x58);
    data = *(int **)(object + 0x54);
    *(unsigned char *)(state + 0x44) = 0;
    *(unsigned char *)(state + 0x45) = 0;
    *(unsigned char *)(state + 0x46) = 0;
    *(unsigned char *)(state + 0x4A) = 0;
    *(int *)(state + 0x40) = 0;
    *(unsigned char *)(state + 0x47) = func_014810(data, 0x10);
    *(unsigned char *)(state + 0x48) = func_014810(data + 0x10, 4);
    *(unsigned char *)(state + 0x49) = func_014810(data + 0x14, 4);
}
