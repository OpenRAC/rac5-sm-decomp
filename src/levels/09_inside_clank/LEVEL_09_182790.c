/* LEVEL_09:0x182790 -- stores a new mode byte and clears dependent words for modes 4 and 5. */

void func_182790(unsigned char *a0, int a1)
{
    char *v1;

    a1 = (unsigned char)a1;
    v1 = *(char **)(a0 + 0x58);
    if (a0[0x45] != a1) {
        switch (a1) {
        case 0:
            break;
        case 4:
            *(int *)(a0 + 0x70) = 0;
            break;
        case 5:
            *(int *)(a0 + 0x70) = 0;
            *(int *)(v1 + 0x10) = 0;
            break;
        }
        a0[0x45] = a1;
    }
}
