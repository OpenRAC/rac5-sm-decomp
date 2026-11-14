/* LEVEL_16:0x16CE60 -- copies the source pointer into a record, sets a float and a byte field. */

void func_0CD010(char *a, int b, float c, float d);
void func_16CEE0(char *a);
void func_16CB10(char *a);

void func_16CE60(char *a0, char *a1)
{
    char *s2;
    float tmp[4];

    s2 = *(char **)(a0 + 0x58);
    func_0CD010(s2 + 4, *(int *)(a1 + 0x59C), 4.0f, *(float *)(a1 + 0x368));
    func_16CEE0(a0);
    func_16CB10(a0);
    *(int *)s2 = (int)a1;
    *(float *)(s2 + 0x58) = 22.50044822692871f;
    a0[0x45] = 3;
}
