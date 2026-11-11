/* LEVEL_09:0x1B5FB0 -- placement copy of LEVEL_07_1DC000.c: walks four words; each non-zero word is passed to two helpers and then cleared. */

void func_06B000(int a);
void func_06AAC8(int a);

void func_1B5FB0(int unused, int *p)
{
    unsigned int i;
    int v;

    i = 0;
    do {
        v = *p;
        i++;
        if (v != 0) {
            func_06B000(v);
            func_06AAC8(*p);
            *p = 0;
        }
        p++;
    } while (i < 4);
}
