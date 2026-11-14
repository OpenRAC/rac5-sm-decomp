/* LEVEL_01:0x165DC0 -- pushes the object's flag byte to the channel when it differs from the channel's current value. */
extern int D_0021A7F0;
extern int func_027EB8(int a, int b);
extern void func_027DE8(int a, int b, int c);

void func_165DC0(char *object)
{
    int flag;

    flag = *(unsigned char *)(object + 0x46);
    if (flag != func_027EB8(D_0021A7F0, *(int *)(object + 0x5C))) {
        func_027DE8(D_0021A7F0, *(int *)(object + 0x5C), *(unsigned char *)(object + 0x46) != 0);
    }
}
