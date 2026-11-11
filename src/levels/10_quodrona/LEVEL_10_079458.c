extern unsigned char D_001FF0F4;
extern int D_001FF0EC;
extern void func_0793F8(void);
extern void func_079608(void);

typedef struct {
    int f0;
    int f1;
    int f2;
    int f3;
} Slot;

extern Slot D_002436A0[];

void func_079458(int param_1, int param_2, int param_3)
{
    unsigned int i;
    Slot *p;

    if (D_001FF0F4 == 0)
        func_0793F8();
    if (D_001FF0EC == 0x10)
        return;
    p = D_002436A0;
    i = 0;
    do {
        i++;
        if (p->f0 == 0) {
            p->f2 = param_2;
            p->f0 = param_1;
            p->f1 = *(int *)(*(int *)(param_1 + 0x48) + 0xDC);
            p->f3 = param_3;
            *(int *)(*(int *)(param_1 + 0x48) + 0xDC) = (int)func_079608;
            D_001FF0EC++;
            return;
        }
        p++;
    } while (i < 0x10);
}
