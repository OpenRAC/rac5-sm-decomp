/* LEVEL_04:0x024DA0 -- placement copy of LEVEL_01_025120.c: applies a mode change to a slot if the owner matches. */
struct Slot {
    char pad[0x54];
    int mode;
};
extern int D_0020D144;
extern struct Slot *func_0242A8(int slot, int y);
extern int func_024B98(int index, int apply);
extern int func_027528(int id);
extern void func_027610(unsigned int a, int c, int d);

int func_024DA0(unsigned int a, int b, int c, int d)
{
    if (a < 0x19) {
        func_0242A8(a, c)->mode = b;
        if (D_0020D144 == -1 || D_0020D144 == c) {
            switch (b) {
            case 0:
            case 2:
                func_027610(a, c, b == 2);
                break;
            case 1:
                func_024B98(a, 1);
                if (d != 0)
                    ((int (*)(int id, int c))func_027528)(a, c);
                break;
            }
        }
        return 1;
    }
    return 0;
}
