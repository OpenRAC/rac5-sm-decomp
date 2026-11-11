/* LEVEL_16:0x13EEB0 -- copies a 4-float block into a fresh record, nudges one float, then calls a follow-up helper. */

extern int func_13C000(void *s, int a, int b);
extern void func_183550(void *s);
extern void *func_18DE08(unsigned int a, unsigned int b, void *c);
extern void func_13EF78(void *s, void *p, void *r);
extern char D_001CCC80[];

int func_13EEB0(char *s, char *p, int flag)
{
    char *r;
    float *src;
    float *dst;

    if (flag == 0) {
        func_13C000(s, 6, 0);
        func_183550(s);
    }
    r = (char *) func_18DE08(0x46FC041E, 0x46FC041E, D_001CCC80);
    if (r == 0) {
        return 0;
    }
    src = (float *)(s + 0x30);
    dst = (float *)(r + 0x30);
    dst[0] = *(float *)(s + 0x30);
    dst[1] = src[1];
    dst[2] = src[2];
    dst[3] = src[3];
    *(float *)(r + 0x34) = *(float *)(r + 0x34) + 0.2f;
    func_13EF78(s, p, r);
    return 1;
}
