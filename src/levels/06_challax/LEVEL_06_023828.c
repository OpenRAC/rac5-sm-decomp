/* LEVEL_06:0x023828 -- placement copy of LEVEL_01_025120.c: applies a mode change to a slot if the owner matches. */
struct Slot {
    char pad[0x54];
    int mode;
};
extern int D_001E2EC4;
extern struct Slot *func_022D30(int slot, int y);
extern int func_023620(int index, int apply);
extern int func_025D48(int id);
extern void func_025E30(unsigned int a, int c, int d);

int func_023828(unsigned int a, int b, int c, int d)
{
    if (a < 0x19) {
        func_022D30(a, c)->mode = b;
        if (D_001E2EC4 == -1 || D_001E2EC4 == c) {
            switch (b) {
            case 0:
            case 2:
                func_025E30(a, c, b == 2);
                break;
            case 1:
                func_023620(a, 1);
                if (d != 0)
                    ((int (*)(int id, int c))func_025D48)(a, c);
                break;
            }
        }
        return 1;
    }
    return 0;
}
