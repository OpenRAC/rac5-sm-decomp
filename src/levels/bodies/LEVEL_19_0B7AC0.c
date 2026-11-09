/* LEVEL_19:0x0B7AC0 -- placement copy of LEVEL_16_0B81E8.c: formats a string from a helper result, collects two helper results and makes two final calls. */

extern char D_00279F68[];
extern void *func_10F9D0(int a0);
extern int sprintf(char *s, const char *fmt, ...);
extern void func_0C5F20(int a0, void *a1, void *a2, void *a3);
extern void func_0C5F58(int a0);

void func_0B7AC0(void)
{
    char *s1;
    char *v;

    sprintf(D_00279F68, (char *)func_10F9D0(0xA3F));
    s1 = (char *)func_10F9D0(0x9FE);
    v = (char *)func_10F9D0(0x218);
    func_0C5F20(3, D_00279F68, s1, v);
    func_0C5F58(0xA);
}
