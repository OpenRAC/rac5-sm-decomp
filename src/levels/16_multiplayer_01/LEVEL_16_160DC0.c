/* LEVEL_16:0x160DC0 -- visits two slots, calling a check then an action on the first match. */

void *func_112CE8(int i);
int func_160E40(char *a, void *b);
void func_160F00(char *a, void *b);

int func_160DC0(char *a0)
{
    unsigned int s1;
    void *s0;

    for (s1 = 0; s1 < 2; s1++) {
        s0 = func_112CE8(s1);
        if (s0 != 0) {
            if (func_160E40(a0, s0) != 0) {
                func_160F00(a0, s0);
                return 1;
            }
        }
    }
    return 0;
}
