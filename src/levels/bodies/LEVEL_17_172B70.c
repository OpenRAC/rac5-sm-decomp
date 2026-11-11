/* LEVEL_17:0x172B70 -- placement copy of LEVEL_16_160DC0.c: visits two slots, calling a check then an action on the first match. */

void *func_112478(int i);
int func_172BF0(char *a, void *b);
void func_172448(char *a, void *b);

int func_172B70(char *a0)
{
    unsigned int s1;
    void *s0;

    for (s1 = 0; s1 < 2; s1++) {
        s0 = func_112478(s1);
        if (s0 != 0) {
            if (func_172BF0(a0, s0) != 0) {
                func_172448(a0, s0);
                return 1;
            }
        }
    }
    return 0;
}
