/* LEVEL_07:0x1DC000 -- walks four words; each non-zero word is passed to two helpers and then cleared. */

void func_06F280(int a);
void func_06ED48(int a);

void func_1DC000(int unused, int *p)
{
    unsigned int i;
    int v;

    i = 0;
    do {
        v = *p;
        i++;
        if (v != 0) {
            func_06F280(v);
            func_06ED48(*p);
            *p = 0;
        }
        p++;
    } while (i < 4);
}
