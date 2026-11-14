/* LEVEL_01:0x19CE20 -- binds two records and sets a float field and a state byte. */

extern void func_0DD9D0(char *a, int b, float c, float d);
extern void func_19CEB0(char *o);
extern void func_19CAA8(int *p);
extern int func_03C298(char *record);

void func_19CE20(char *a0, char *a1)
{
    char *s3;
    char *s2;
    float tmp[4];

    s3 = *(char **)(a0 + 0x58);
    s2 = *(char **)(a0 + 0x54);
    func_0DD9D0(s3 + 0x28, *(int *)(a1 + 0x59C), 4.0f, *(float *)(a1 + 0x368));
    func_19CEB0(a0);
    func_19CAA8((int *)a0);
    func_03C298(a1);
    *(float *)(s2 + 0x18) = 45.00089645385742f;
    *(char **)s3 = a1;
    a0[0x45] = 3;
}
