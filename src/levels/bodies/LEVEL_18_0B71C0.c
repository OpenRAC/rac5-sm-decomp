/* LEVEL_18:0x0B71C0 -- placement copy of LEVEL_16_0B81E8.c: formats a string from a helper result, collects two helper results and makes two final calls. */

extern char D_0027A168[];
extern void *func_10DFE0(int a0);
extern int sprintf(char *s, const char *fmt, ...);
extern void func_0C5620(int a0, void *a1, void *a2, void *a3);
extern void func_0C5658(int a0);

void func_0B71C0(void)
{
    char *s1;
    char *v;

    sprintf(D_0027A168, (char *)func_10DFE0(0xA3F));
    s1 = (char *)func_10DFE0(0x9FE);
    v = (char *)func_10DFE0(0x218);
    func_0C5620(3, D_0027A168, s1, v);
    func_0C5658(0xA);
}
