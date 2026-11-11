/* LEVEL_18:0x17FB60 -- placement copy of LEVEL_16_160DC0.c: visits two slots, calling a check then an action on the first match. */

void *func_111AA0(int i);
int func_17FBE0(char *a, void *b);
void func_17F438(char *a, void *b);

int func_17FB60(char *a0)
{
    unsigned int s1;
    void *s0;

    for (s1 = 0; s1 < 2; s1++) {
        s0 = func_111AA0(s1);
        if (s0 != 0) {
            if (func_17FBE0(a0, s0) != 0) {
                func_17F438(a0, s0);
                return 1;
            }
        }
    }
    return 0;
}
