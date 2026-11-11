/* LEVEL_17:0x13A3D0 -- placement copy of LEVEL_16_13E9C0.c: copies a 4-float block into a fresh record, nudges one float, then calls a follow-up helper. */

extern int func_137A10(void *s, int a, int b);
extern void func_176B98(void *s);
extern void *func_181450(unsigned int a, unsigned int b, void *c);
extern void func_13A498(void *s, void *p, void *r);
extern char D_001C0100[];

int func_13A3D0(char *s, char *p, int flag)
{
    char *r;
    float *src;
    float *dst;

    if (flag == 0) {
        func_137A10(s, 5, 0);
        func_176B98(s);
    }
    r = (char *) func_181450(0x16CFACDC, 0x16CFACDC, D_001C0100);
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
    func_13A498(s, p, r);
    return 1;
}
