/* LEVEL_02:0x17BF70 -- placement copy of LEVEL_01_165DC0.c: pushes the object's flag byte to the channel when it differs from the channel's current value. */
extern int D_0022F770;
extern int func_0286A0(int a, int b);
extern void func_0285D0(int a, int b, int c);

void func_17BF70(char *object)
{
    int flag;

    flag = *(unsigned char *)(object + 0x46);
    if (flag != func_0286A0(D_0022F770, *(int *)(object + 0x5C))) {
        func_0285D0(D_0022F770, *(int *)(object + 0x5C), *(unsigned char *)(object + 0x46) != 0);
    }
}
