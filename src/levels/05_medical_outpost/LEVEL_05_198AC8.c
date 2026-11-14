/* LEVEL_05:0x198AC8 -- placement copy of LEVEL_01_19CE20.c: binds two records and sets a float field and a state byte. */

extern void func_0DBD08(char *a, int b, float c, float d);
extern void func_198B58(char *o);
extern void func_198750(int *p);
extern int func_039E78(char *record);

void func_198AC8(char *a0, char *a1)
{
    char *s3;
    char *s2;
    float tmp[4];

    s3 = *(char **)(a0 + 0x58);
    s2 = *(char **)(a0 + 0x54);
    func_0DBD08(s3 + 0x28, *(int *)(a1 + 0x59C), 4.0f, *(float *)(a1 + 0x368));
    func_198B58(a0);
    func_198750((int *)a0);
    func_039E78(a1);
    *(float *)(s2 + 0x18) = 45.00089645385742f;
    *(char **)s3 = a1;
    a0[0x45] = 3;
}
