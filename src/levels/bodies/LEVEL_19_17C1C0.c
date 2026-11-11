/* LEVEL_19:0x17C1C0 -- placement copy of LEVEL_16_160DC0.c: visits two slots, calling a check then an action on the first match. */

void *func_113490(int i);
int func_17C240(char *a, void *b);
void func_17BA98(char *a, void *b);

int func_17C1C0(char *a0)
{
    unsigned int s1;
    void *s0;

    for (s1 = 0; s1 < 2; s1++) {
        s0 = func_113490(s1);
        if (s0 != 0) {
            if (func_17C240(a0, s0) != 0) {
                func_17BA98(a0, s0);
                return 1;
            }
        }
    }
    return 0;
}
