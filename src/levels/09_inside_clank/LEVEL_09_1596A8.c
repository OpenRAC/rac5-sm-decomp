/* LEVEL_09:0x1596A8 -- placement copy of LEVEL_01_165DC0.c: pushes the object's flag byte to the channel when it differs from the channel's current value. */
extern int D_002043F0;
extern int func_026EC0(int a, int b);
extern void func_026DF0(int a, int b, int c);

void func_1596A8(char *object)
{
    int flag;

    flag = *(unsigned char *)(object + 0x46);
    if (flag != func_026EC0(D_002043F0, *(int *)(object + 0x5C))) {
        func_026DF0(D_002043F0, *(int *)(object + 0x5C), *(unsigned char *)(object + 0x46) != 0);
    }
}
