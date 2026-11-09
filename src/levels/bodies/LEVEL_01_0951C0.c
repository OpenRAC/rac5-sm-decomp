/* LEVEL_01:0x0951C0 -- resets every cell: marks its linked records invalid and clears its node chain. */
void func_0951C0(int *state)
{
    int count = state[0] * state[1];
    int index;
    for (index = 0; index < count; index++) {
        char *cell = (char *)(unsigned int)state[0x18] + index * 8;
        int links = *(unsigned short *)(cell + 6);
        int j;
        for (j = 0; j < links; j++) {
            char *record = (char *)(unsigned int)state[0x19] +
                           *(unsigned short *)(cell + 4) * 0x10 + j * 0x10;
            **(unsigned short **)(record + 0x0c) = 0xffff;
        }
        {
            char *node = *(char **)cell;
            while (node != 0) {
                *(int *)(node + 0x14) = 0;
                node = *(char **)node;
            }
        }
        *(unsigned short *)(cell + 6) = 0;
        *(int *)cell = 0;
    }
}
