/* LEVEL_01.REL:0x0893F0, bounded 176-byte candidate.
 * Isolated pinned C object: 176 bytes; first linked
 * difference at body byte +4. Not linked into the accepted
 * gate or counted.
 * Reopen: The size is correct; $s1/$s2 are permuted between the parameter and the loop counter. Reopen by changing the local declaration order.
 */
extern void func_089CB8(int *p);

void func_0893F0(int param_1)
{
    int index;
    int *piVar2;
    int iVar1;
    int count;

    if (*(int *)(param_1 + 0x18) == 0) {
        index = *(int *)(param_1 + 0x10);
        if (index != -1) {
            piVar2 = *(int **)(param_1 + 0x14);
            if (piVar2 != 0 && *(int *)(index * 4 + *piVar2) != 0) {
                *(int *)(param_1 + 0xC) = index;
                *(int *)(param_1 + 0x10) = -1;
                count = 0;
                func_089CB8(piVar2);
                piVar2 = (int *)(param_1 + 0x20);
                if (0 < *(int *)(param_1 + 0x1C)) {
                    iVar1 = *piVar2;
                    while (1) {
                        count = count + 1;
                        piVar2 = piVar2 + 1;
                        func_089CB8(*(int **)(iVar1 + 8));
                        if (*(int *)(param_1 + 0x1C) <= count)
                            break;
                        iVar1 = *piVar2;
                    }
                }
            }
        }
    }
}
