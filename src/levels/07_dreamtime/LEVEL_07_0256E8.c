/* LEVEL_07:0x0256E8 -- placement copy of LEVEL_01_025120.c: applies a mode change to a slot if the owner matches. */
struct Slot {
    char pad[0x54];
    int mode;
};
extern int D_002082C4;
extern struct Slot *func_024BF0(int slot, int y);
extern int func_0254E0(int index, int apply);
extern int func_027BF8(int id);
extern void func_027CE0(unsigned int a, int c, int d);

int func_0256E8(unsigned int a, int b, int c, int d)
{
    if (a < 0x19) {
        func_024BF0(a, c)->mode = b;
        if (D_002082C4 == -1 || D_002082C4 == c) {
            switch (b) {
            case 0:
            case 2:
                func_027CE0(a, c, b == 2);
                break;
            case 1:
                func_0254E0(a, 1);
                if (d != 0)
                    ((int (*)(int id, int c))func_027BF8)(a, c);
                break;
            }
        }
        return 1;
    }
    return 0;
}
