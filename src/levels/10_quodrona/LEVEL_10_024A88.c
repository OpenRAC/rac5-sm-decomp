/* LEVEL_10:0x024A88 -- placement copy of LEVEL_01_025120.c: applies a mode change to a slot if the owner matches. */
struct Slot {
    char pad[0x54];
    int mode;
};
extern int D_001FCFC4;
extern struct Slot *func_023F90(int slot, int y);
extern int func_024880(int index, int apply);
extern int func_027178(int id);
extern void func_027260(unsigned int a, int c, int d);

int func_024A88(unsigned int a, int b, int c, int d)
{
    if (a < 0x19) {
        func_023F90(a, c)->mode = b;
        if (D_001FCFC4 == -1 || D_001FCFC4 == c) {
            switch (b) {
            case 0:
            case 2:
                func_027260(a, c, b == 2);
                break;
            case 1:
                func_024880(a, 1);
                if (d != 0)
                    ((int (*)(int id, int c))func_027178)(a, c);
                break;
            }
        }
        return 1;
    }
    return 0;
}
