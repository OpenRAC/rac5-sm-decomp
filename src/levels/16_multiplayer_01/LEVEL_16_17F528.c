/* LEVEL_16:0x17F528 -- placement copy of LEVEL_16_160DC0.c: visits two slots, calling a check then an action on the first match. */

void *func_112CE8(int i);
int func_17F5A8(char *a, void *b);
void func_17EE00(char *a, void *b);

int func_17F528(char *a0)
{
    unsigned int s1;
    void *s0;

    for (s1 = 0; s1 < 2; s1++) {
        s0 = func_112CE8(s1);
        if (s0 != 0) {
            if (func_17F5A8(a0, s0) != 0) {
                func_17EE00(a0, s0);
                return 1;
            }
        }
    }
    return 0;
}
