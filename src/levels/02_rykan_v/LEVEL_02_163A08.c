/* LEVEL_02:0x163A08 -- refreshes an entry, sets a flag when a float test passes, then calls a helper. */

void func_163AA8(void *a);
float func_083378(void *a);
int func_0833A0(void *a, int b);
int func_163DC0(void *a);
void func_163700(void *a, int b, int c);

void func_163A08(char *a0)
{
    char *s1;
    int v;

    s1 = *(char **)(a0 + 0x58);
    func_163AA8(a0);
    if (*(unsigned char *)(a0 + 0x46) == 0) {
        if (0.33333334f <= func_083378(a0)) {
            *(int *)(a0 + 0x64) |= 0x40000;
        }
    }
    if (func_0833A0(a0, 0) != 0) {
        *(int *)(s1 + 0x68) = 7;
        v = func_163DC0(a0);
        func_163700(a0, *(unsigned char *)(a0 + 0x45), v & 0xFF);
    }
}
