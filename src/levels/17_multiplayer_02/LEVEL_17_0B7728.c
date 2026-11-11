/* LEVEL_17:0x0B7728 -- placement copy of LEVEL_16_0B81E8.c: formats a string from a helper result, collects two helper results and makes two final calls. */

extern char D_0026B0E8[];
extern void *func_10E8A8(int a0);
extern int sprintf(char *s, const char *fmt, ...);
extern void func_0C5B88(int a0, void *a1, void *a2, void *a3);
extern void func_0C5BC0(int a0);

void func_0B7728(void)
{
    char *s1;
    char *v;

    sprintf(D_0026B0E8, (char *)func_10E8A8(0xA3F));
    s1 = (char *)func_10E8A8(0x9FE);
    v = (char *)func_10E8A8(0x218);
    func_0C5B88(3, D_0026B0E8, s1, v);
    func_0C5BC0(0xA);
}
