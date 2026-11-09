/* LEVEL_16:0x0B81E8 -- formats a string from a helper result, collects two helper results and makes two final calls. */

extern char D_00279DE8[];
extern void *func_10F330(int a0);
extern int sprintf(char *s, const char *fmt, ...);
extern void func_0C6648(int a0, void *a1, void *a2, void *a3);
extern void func_0C6680(int a0);

void func_0B81E8(void)
{
    char *s1;
    char *v;

    sprintf(D_00279DE8, (char *)func_10F330(0xA3F));
    s1 = (char *)func_10F330(0x9FE);
    v = (char *)func_10F330(0x218);
    func_0C6648(3, D_00279DE8, s1, v);
    func_0C6680(0xA);
}
