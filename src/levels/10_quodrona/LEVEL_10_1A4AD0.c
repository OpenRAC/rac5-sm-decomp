/* LEVEL_10:0x1A4AD0 -- placement copy of LEVEL_01_19CE20.c: binds two records and sets a float field and a state byte. */

extern void func_0DEE10(char *a, int b, float c, float d);
extern void func_1A4B60(char *o);
extern void func_1A4758(int *p);
extern int func_03A980(char *record);

void func_1A4AD0(char *a0, char *a1)
{
    char *s3;
    char *s2;
    float tmp[4];

    s3 = *(char **)(a0 + 0x58);
    s2 = *(char **)(a0 + 0x54);
    func_0DEE10(s3 + 0x28, *(int *)(a1 + 0x59C), 4.0f, *(float *)(a1 + 0x368));
    func_1A4B60(a0);
    func_1A4758((int *)a0);
    func_03A980(a1);
    *(float *)(s2 + 0x18) = 45.00089645385742f;
    *(char **)s3 = a1;
    a0[0x45] = 3;
}
