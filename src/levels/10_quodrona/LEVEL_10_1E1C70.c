/* LEVEL_10:0x1E1C70 -- refreshes two sub-objects, then dispatches through the object's handler table. */

extern void func_013620(char *a0, char *a1, char *a2, char *a3, char *t0);
extern int func_07D0E8(char *a0, int a1);
extern char D_002342F8[];

void func_1E1C70(char *s)
{
    char *p;
    char *o;
    char *q;
    int r;

    p = *(char **)(s + 0x54);
    o = *(char **)(s + 0x58);
    func_013620(s, p + 8, p + 0xC, o + 0x28, D_002342F8);
    if (func_07D0E8(s, 0)) {
        q = *(char **)o;
        if ((unsigned char)s[0x46] == 0xFF) {
            r = ((int (*)(char *))*(int *)q)(s);
            ((void (*)(char *, int))*(int *)(q + 4))(s, r);
        } else {
            ((void (*)(char *, int))*(int *)(q + 4))(s, (unsigned char)s[0x46]);
        }
    }
}
