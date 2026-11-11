/* LEVEL_01:0x1A0F48 -- selects one of four word pairs from the record's list by a byte field; stores the pair into two outputs, or returns 1 for field zero. */
int func_1A0F48(char *a0, int *a1, int *a2)
{
    int *p;

    p = *(int **)(a0 + 0x54);
    switch (*(unsigned char *)(a0 + 0x45)) {
    case 0:
        return 1;
    case 1:
        *a1 = p[0];
        *a2 = p[1];
        break;
    case 2:
        *a1 = p[2];
        *a2 = p[3];
        break;
    }
    return 0;
}
