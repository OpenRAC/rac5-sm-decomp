extern char *func_0243D0(int, int);
extern char *func_024540(int, int);

void func_024178(int a, int b)
{
    unsigned int i;
    char *obj;
    char *other;

    for (i = 0; i < 0x19; i++) {
        if (i == 7 && b == 0) {
            continue;
        }
        obj = func_0243D0(i, -1);
        if (obj != 0) {
            if (i == 0xC) {
                if (a != 0) {
                    *(int *)(obj + 0x40) = 0;
                } else {
                    continue;
                }
            } else {
                other = func_024540(i, -1);
                if (other == 0) {
                    continue;
                }
                *(int *)(obj + 0x40) = *(int *)(other + 0x38);
            }
        }
    }
}
