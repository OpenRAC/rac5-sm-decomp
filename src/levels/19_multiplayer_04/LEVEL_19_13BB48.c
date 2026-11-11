/* LEVEL_19:0x13BB48 -- placement copy of LEVEL_16_13EEB0.c: copies a 4-float block into a fresh record, nudges one float, then calls a follow-up helper. */

extern int func_1385E0(void *s, int a, int b);
extern void func_1801E8(void *s);
extern void *func_18CE70(unsigned int a, unsigned int b, void *c);
extern void func_13BC10(void *s, void *p, void *r);
extern char D_001CDE80[];

int func_13BB48(char *s, char *p, int flag)
{
    char *r;
    float *src;
    float *dst;

    if (flag == 0) {
        func_1385E0(s, 6, 0);
        func_1801E8(s);
    }
    r = (char *) func_18CE70(0x46FC041E, 0x46FC041E, D_001CDE80);
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
    func_13BC10(s, p, r);
    return 1;
}
