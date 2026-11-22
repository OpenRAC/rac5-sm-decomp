/* LEVEL_18:0x0B2E20 -- placement copy of LEVEL_16_0B3E48.c: reads the pad input and reacts to the menu: the cancel/accept bits (0x1008) play sound 0 and then sounds 7 and the close request; the select bit (0x4000) plays sound 1 for a selectable entry and either activates its link (sound 6) or closes like cancel; any other input is passed to the menu handler; the tail rebuilds the cached list handle. */
struct Obj;

typedef struct {
    char **table;
    int pad4;
    int index;
    char pad0C[0x10];
    int handle;
} Menu;

extern Menu D_001AFF50;
extern char D_001ABF30[];

extern unsigned int func_0AAFF8(void);
extern unsigned int func_078F80(int first, int second);
extern int func_0A40A8(int index);
extern void func_0181E0(int a, int b);
extern int func_0AAEE0(int a0);
extern int func_0A76D0(struct Obj *o, int arg);
extern int func_0A0430(char *list);

void func_0B2E20(void)
{
    unsigned int input;
    int link;

    input = func_078F80(0x6B10, func_0AAFF8());
    if ((input & 0x1008) != 0) {
        func_0A40A8(0);
        func_0A40A8(7);
        func_0181E0(4, 0);
    } else if ((input & 0x4000) != 0) {
        if (*(unsigned char *)(D_001AFF50.table[D_001AFF50.index] + 0xCC) != 0) {
            func_0A40A8(1);
            link = *(int *)(D_001AFF50.table[D_001AFF50.index] + 0xD0);
            if (link == 0) {
                func_0A40A8(7);
                func_0181E0(4, 0);
            } else {
                func_0A40A8(6);
                func_0AAEE0(link);
            }
        }
    } else {
        func_0A76D0((struct Obj *)&D_001AFF50, input);
    }
    D_001AFF50.handle = func_0A0430(D_001ABF30);
}
