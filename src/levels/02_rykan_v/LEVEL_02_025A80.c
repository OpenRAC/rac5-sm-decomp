/* LEVEL_02:0x025A80 -- placement copy of LEVEL_01_025120.c: applies a mode change to a slot if the owner matches. */
struct Slot {
    char pad[0x54];
    int mode;
};
extern int D_00208C44;
extern struct Slot *func_024F88(int slot, int y);
extern int func_025878(int index, int apply);
extern int func_028080(int id);
extern void func_028168(unsigned int a, int c, int d);

int func_025A80(unsigned int a, int b, int c, int d)
{
    if (a < 0x19) {
        func_024F88(a, c)->mode = b;
        if (D_00208C44 == -1 || D_00208C44 == c) {
            switch (b) {
            case 0:
            case 2:
                func_028168(a, c, b == 2);
                break;
            case 1:
                func_025878(a, 1);
                if (d != 0)
                    ((int (*)(int id, int c))func_028080)(a, c);
                break;
            }
        }
        return 1;
    }
    return 0;
}
