/* LEVEL_07:0x1B7790 -- walks five 12-byte table entries and calls a helper with a shared string pair and an int table entry. */

extern char D_0021D810[];
extern int D_0021D858[];
extern char D_0021D870[];
extern char D_0021D888[];
void func_1C3A90(char *a, char *b, int c, void *d, char *e);

void func_1B7790(void *self)
{
    unsigned int i;
    char *t;
    int *p;

    i = 0;
    p = D_0021D858;
    t = D_0021D810;
    do {
        func_1C3A90(D_0021D888, D_0021D870, *p++, self, t);
        t += 12;
        i++;
    } while (i < 5);
}
