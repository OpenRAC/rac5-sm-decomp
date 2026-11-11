/* LEVEL_08:0x2032D0 -- resolves a table entry and, when one was found, rescales a random offset into the record. */

extern char *func_0AA518(void *a, void *b, int c);
extern void func_13A208(char *obj, void *a, char *b, float c, float d, float e);
extern int rand(void);
extern float D_003EB0BC;
extern char D_003EB180[];

void func_2032D0(char *a0, float fx)
{
    int slot[2];
    char *s1;
    float base;
    float r;

    s1 = func_0AA518(slot, D_003EB180, 1);
    if (slot[0] != 0) {
        r = 38.0f;
        base = D_003EB0BC / fx;
        func_13A208(s1, 0, a0, base, base, base);
        *(float *)(s1 + 0x30) = (float)rand() * 4.656612873077393e-10f * 2.0f + r;
    }
}
