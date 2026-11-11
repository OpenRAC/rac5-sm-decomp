/* LEVEL_10:0x19F538 -- clears a table of pending handles, releasing every handle other than the current global slot. */

extern const unsigned int D_0022E48C;
extern int D_001FF398;

void func_097D08(int handle);
float func_07D5E8(char *a0, char *a1, int a2);

void func_19F538(char *obj)
{
    char *state = *(char **)(obj + 0x58);
    unsigned int i = 0;

    if (D_0022E48C != 0) {
        int *arr = (int *)(state + 0xE8);
        do {
            if (arr[i] != 0) {
                if (arr[i] == D_001FF398) {
                    D_001FF398 = 0;
                } else {
                    func_097D08(arr[i]);
                }
                arr[i] = 0;
            }
            i++;
        } while (i < D_0022E48C);
    }
}

void func_19F5C0(char *obj)
{
    char *p;

    p = *(char **)(*(char **)(obj + 0x58) + 0x58);
    if (p != 0) {
        func_07D5E8(obj, p, 0x56);
    }
}
