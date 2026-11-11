extern unsigned char D_001C94F4;
extern int D_001C94EC;
extern void func_070030(void);
extern void func_070240(void);

typedef struct {
    int f0;
    int f1;
    int f2;
    int f3;
} Slot;

extern Slot D_00207720[];

void func_070090(int param_1, int param_2, int param_3)
{
    unsigned int i;
    Slot *p;

    if (D_001C94F4 == 0)
        func_070030();
    if (D_001C94EC == 0x10)
        return;
    p = D_00207720;
    i = 0;
    do {
        i++;
        if (p->f0 == 0) {
            p->f2 = param_2;
            p->f0 = param_1;
            p->f1 = *(int *)(*(int *)(param_1 + 0x48) + 0xDC);
            p->f3 = param_3;
            *(int *)(*(int *)(param_1 + 0x48) + 0xDC) = (int)func_070240;
            D_001C94EC++;
            return;
        }
        p++;
    } while (i < 0x10);
}
