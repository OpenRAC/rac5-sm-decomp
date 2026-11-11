/* LEVEL_23:0x1B7070 -- placement copy of LEVEL_01_1E8FB8.c: calls a helper with an offset pointer, then fills two floats with scaled random values. */

extern void func_0F7B90(void *a0, void *a1, int a2);
extern int rand(void);

void func_1B7070(char *a0, char *a1)
{
    char *o;
    float *p;
    float k;
    unsigned int i;

    o = a0;
    k = 4.6566123179658803e-10f;
    func_0F7B90(a0, a1 + 0x10, 2);
    p = (float *)(o + 0x60);
    i = 0;
    do {
        i++;
        *p = (float)rand() * k;
        p++;
    } while (i < 2);
}
