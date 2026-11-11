extern long long func_0AB770(void);
extern unsigned int D_00276970[];

void func_0AB780(void)
{
    if (func_0AB770() != 0) {
        D_00276970[2]--;
        if (D_00276970[2] == 0) D_00276970[0] = 3;
    }
    if (D_00276970[3] != 0) {
        if (D_00276970[3] != 0xffffffffu) D_00276970[3]--;
    }
}
