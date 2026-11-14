/* LEVEL_08:0x1FB3F8 -- placement copy of LEVEL_04_1D6478.c: resets the object's state block and records the three looked-up byte values from its data. */
extern unsigned int func_015290(int *p, unsigned int n);

void func_1FB3F8(char *object)
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
    *(unsigned char *)(state + 0x47) = func_015290(data, 0x10);
    *(unsigned char *)(state + 0x48) = func_015290(data + 0x10, 4);
    *(unsigned char *)(state + 0x49) = func_015290(data + 0x14, 4);
}
