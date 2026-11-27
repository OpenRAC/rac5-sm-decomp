/* LEVEL_15:0x01F430 -- placement copy of LEVEL_01_025120.c: applies a mode change to a slot if the owner matches. */
struct Slot {
    char pad[0x54];
    int mode;
};
extern int D_00148C44;
extern struct Slot *func_01E990(int slot, int y);
extern int func_01F280(int index, int apply);
extern int func_021848(int id);
extern void func_021930(unsigned int a, int c, int d);

int func_01F430(unsigned int a, int b, int c, int d)
{
    if (a < 0x19) {
        func_01E990(a, c)->mode = b;
        if (D_00148C44 == -1 || D_00148C44 == c) {
            switch (b) {
            case 0:
            case 2:
                func_021930(a, c, b == 2);
                break;
            case 1:
                func_01F280(a, 1);
                if (d != 0)
                    ((int (*)(int id, int c))func_021848)(a, c);
                break;
            }
        }
        return 1;
    }
    return 0;
}
