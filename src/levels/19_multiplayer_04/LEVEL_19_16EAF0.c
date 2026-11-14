/* LEVEL_19:0x16EAF0 -- placement copy of LEVEL_16_16CE60.c: copies the source pointer into a record, sets a float and a byte field. */

void func_0CC8E8(char *a, int b, float c, float d);
void func_16EB70(char *a);
void func_16E798(char *a);

void func_16EAF0(char *a0, char *a1)
{
    char *s2;
    float tmp[4];

    s2 = *(char **)(a0 + 0x58);
    func_0CC8E8(s2 + 4, *(int *)(a1 + 0x59C), 4.0f, *(float *)(a1 + 0x368));
    func_16EB70(a0);
    func_16E798(a0);
    *(int *)s2 = (int)a1;
    *(float *)(s2 + 0x58) = 22.50044822692871f;
    a0[0x45] = 3;
}
