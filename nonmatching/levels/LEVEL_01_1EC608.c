/* LEVEL_01.REL:0x1EC608, bounded 196-byte candidate.
 * Isolated pinned C object: 212 bytes; first linked
 * difference at body byte +8. Not linked into the accepted
 * gate or counted.
 * Reopen: The chained destructor needs the extraout_a0_lo path and both +0x18 search outputs modelled. Reopen from the full disassembly of that destructor.
 */
extern int *func_1EB560(void);
extern int *func_1EC3E0(void);
extern int func_1EE858(int param);
extern void func_1EC4E8(void *param);

void func_1EC608(int param_1)
{
    int *piVar3;
    long lVar5;
    int iVar4;
    int iVar1;
    void (*pcVar2)(int, int);

    piVar3 = func_1EB560();
    lVar5 = *(long *)(param_1 + 0x20) - 1;
    *(long *)(param_1 + 0x20) = lVar5;
    if (lVar5 != 0)
        return;
    iVar4 = *piVar3;
    if (iVar4 == param_1 && *(int *)(param_1 + 0x14) == 0)
        return;
    if (iVar4 != 0) {
        if (iVar4 == param_1) {
            iVar4 = *(int *)(param_1 + 0x18);
            goto store;
        }
        iVar1 = *(int *)(iVar4 + 0x18);
        while (iVar1 != 0) {
            piVar3 = (int *)(iVar4 + 0x18);
            iVar4 = *piVar3;
            if (iVar1 == param_1) {
                iVar4 = *(int *)(param_1 + 0x18);
                goto store;
            }
            iVar1 = *(int *)(iVar4 + 0x18);
        }
    }
    iVar4 = (int)func_1EC3E0();
store:
    pcVar2 = *(void (**)(int, int))(param_1 + 0x10);
    *piVar3 = iVar4;
    if (pcVar2 != 0)
        pcVar2(*(int *)(param_1 + 8), 2);
    if (func_1EE858(*(int *)(param_1 + 0xC)) == 0)
        func_1EC4E8(*(void **)(param_1 + 0x28));
    func_1EC4E8((void *)param_1);
}
