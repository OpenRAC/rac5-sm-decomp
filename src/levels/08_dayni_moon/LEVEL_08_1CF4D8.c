/* LEVEL_08:0x1CF4D8 -- placement copy of LEVEL_01_19CE20.c: binds two records and sets a float field and a state byte. */

extern void func_0E89A0(char *a, int b, float c, float d);
extern void func_1CF568(char *o);
extern void func_1CF160(int *p);
extern void func_041380(char *record);

void func_1CF4D8(char *a0, char *a1)
{
    char *s3;
    char *s2;
    float tmp[4];

    s3 = *(char **)(a0 + 0x58);
    s2 = *(char **)(a0 + 0x54);
    func_0E89A0(s3 + 0x28, *(int *)(a1 + 0x59C), 4.0f, *(float *)(a1 + 0x368));
    func_1CF568(a0);
    func_1CF160((int *)a0);
    ((int (*)(char *record))func_041380)(a1);
    *(float *)(s2 + 0x18) = 45.00089645385742f;
    *(char **)s3 = a1;
    a0[0x45] = 3;
}
