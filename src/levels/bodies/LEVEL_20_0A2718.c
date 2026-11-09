/* LEVEL_20:0x0A2718 -- placement copy of LEVEL_16_0B81E8.c: formats a string from a helper result, collects two helper results and makes two final calls. */

extern char D_0019D628[];
extern void *func_0E2118(int a0);
extern int sprintf(char *s, const char *fmt, ...);
extern void func_0B0B78(int a0, void *a1, void *a2, void *a3);
extern void func_0B0BB0(int a0);

void func_0A2718(void)
{
    char *s1;
    char *v;

    sprintf(D_0019D628, (char *)func_0E2118(0xA3F));
    s1 = (char *)func_0E2118(0x9FE);
    v = (char *)func_0E2118(0x218);
    func_0B0B78(3, D_0019D628, s1, v);
    func_0B0BB0(0xA);
}
