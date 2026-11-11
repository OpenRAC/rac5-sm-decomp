extern unsigned char D_0023EFB4;
extern int D_0023EFAC;
extern void func_0805E0(void);
extern void func_0807F0(void);

typedef struct {
    int f0;
    int f1;
    int f2;
    int f3;
} Slot;

extern Slot D_00289530[];

void func_080640(int param_1, int param_2, int param_3)
{
    unsigned int i;
    Slot *p;

    if (D_0023EFB4 == 0)
        func_0805E0();
    if (D_0023EFAC == 0x10)
        return;
    p = D_00289530;
    i = 0;
    do {
        i++;
        if (p->f0 == 0) {
            p->f2 = param_2;
            p->f0 = param_1;
            p->f1 = *(int *)(*(int *)(param_1 + 0x48) + 0xDC);
            p->f3 = param_3;
            *(int *)(*(int *)(param_1 + 0x48) + 0xDC) = (int)func_0807F0;
            D_0023EFAC++;
            return;
        }
        p++;
    } while (i < 0x10);
}
