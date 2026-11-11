/* LEVEL_15:0x114940 -- stores four resolved handles from a source table into the object. */

void func_080488(void *a0, int a1);
void func_114100(int a0);
int func_12BFB0(int a0);
int func_12E158(int a0);
int func_11A8C0(int a0);
int func_0CDAD8(int a0);

void func_114940(char *a0, int a1, char *a2, int a3)
{
    int v;

    func_080488(a0, a3);
    func_114100(a1);
    *(int *)(a0 + 0x2C) = a1;
    v = func_12BFB0(*(int *)(a2 + 0));
    *(int *)(a0 + 0x1C) = v;
    v = func_12E158(*(int *)(a2 + 4));
    *(int *)(a0 + 0x20) = v;
    v = func_11A8C0(*(int *)(a2 + 8));
    *(int *)(a0 + 0x24) = v;
    if (*(int *)(a2 + 0xC) != 0) {
        v = func_0CDAD8(*(int *)(a2 + 0xC));
    } else {
        v = -1;
    }
    *(int *)(a0 + 0x28) = v;
}
