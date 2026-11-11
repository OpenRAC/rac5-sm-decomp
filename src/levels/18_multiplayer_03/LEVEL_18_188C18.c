/* LEVEL_18:0x188C18 -- placement copy of LEVEL_07_1DC000.c: walks four words; each non-zero word is passed to two helpers and then cleared. */

void func_05D8F8(int a);
void func_05D3C0(int a);

void func_188C18(int unused, int *p)
{
    unsigned int i;
    int v;

    i = 0;
    do {
        v = *p;
        i++;
        if (v != 0) {
            func_05D8F8(v);
            func_05D3C0(*p);
            *p = 0;
        }
        p++;
    } while (i < 4);
}
