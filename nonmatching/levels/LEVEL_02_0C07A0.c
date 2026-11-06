/* LEVEL_02.REL:0x0C07A0, bounded 200-byte candidate.
 * Isolated pinned C object: 200 bytes; first linked
 * difference at body byte +118. Not linked into the accepted
 * gate or counted.
 * Reopen: This form needs -mno-check-zero-division (without it the body links to 208 bytes); $a1/$a2 are swapped between (param_4-0x10) and 2. Reopen by swapping the two temporaries' declaration order.
 */
extern int func_0C0620(void *object);

int func_000C07A0(void *object, short param_2, short param_3, short param_4, short param_5)
{
    char *base = object;
    int iVar1;
    int iVar2;

    *(int *)(base + 0x54) = param_5;
    *(int *)(base + 0x50) = param_3;
    *(int *)(base + 0x5c) = param_4;
    *(int *)(base + 0x80) = param_3;
    *(int *)(base + 0x58) = param_2;
    iVar1 = func_0C0620(object);
    iVar2 = func_0C0620(object);
    *(int *)(base + 0xa0) = 3;
    *(int *)(base + 0x8c) = param_5;
    *(int *)(base + 0x88) = param_3;
    *(int *)(base + 0x94) = param_4;
    *(int *)(base + 0x90) = param_4 - 0x10;
    *(int *)(base + 0x98) = 2;
    *(char *)(base + 0x9c) = 0;
    *(int *)(base + 0x84) = ((param_5 - param_3) / iVar1) * iVar2 + param_3;
    return 1;
}
