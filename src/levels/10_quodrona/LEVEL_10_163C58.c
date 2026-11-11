/* LEVEL_10:0x163C58 -- clears the object's 100-byte state block; when the setup record (+0x54) has no word at +0x34 it asks the helper for a handle (stored at state +0x4C, failing with 0 when none) and installs the handler pointer in the linked block (+0x48), otherwise it only sets the flag bits; then updates the flag words (+0x64, +0x78) and returns 1. */
extern void *memset(void *s, int c, unsigned int n);
extern int func_165480(void);
extern void func_164FD8(void);

int func_163C58(char *object)
{
    char *state;
    char *info;
    int handle;

    state = *(char **)(object + 0x58);
    info = *(char **)(object + 0x54);
    memset(state, 0, 100);
    if (*(int *)(info + 0x34) != 0) {
        *(unsigned int *)(object + 0x64) |= 0xC30;
    } else {
        handle = func_165480();
        *(int *)(state + 0x4C) = handle;
        if (handle == 0) {
            return 0;
        }
        *(void (**)(void))(*(char **)(object + 0x48) + 0xDC) = func_164FD8;
        *(unsigned int *)(object + 0x64) |= 0x40000;
    }

    *(unsigned int *)(object + 0x78) = (*(unsigned int *)(object + 0x78) & 0xFFF0FFFFU) | 0x20000;
    return 1;
}
