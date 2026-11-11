/* LEVEL_08:0x19EE78 -- when the pending flag is set, hands the object's value and the cached handle to the queue helper and clears the flag. */
extern unsigned char D_00251084;
extern int D_003E6EAC;
extern char D_0019F050[];
extern void func_0A1578(char *table, int value, int handle, int flags);

void func_19EE78(char *object)
{
    if (D_00251084 != 0) {
        func_0A1578(D_0019F050, *(int *)(object + 0x40), D_003E6EAC, 0);
        D_00251084 = 0;
    }
}
