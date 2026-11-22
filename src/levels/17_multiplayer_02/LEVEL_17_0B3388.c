/* LEVEL_17:0x0B3388 -- placement copy of LEVEL_16_0B3E48.c: reads the pad input and reacts to the menu: the cancel/accept bits (0x1008) play sound 0 and then sounds 7 and the close request; the select bit (0x4000) plays sound 1 for a selectable entry and either activates its link (sound 6) or closes like cancel; any other input is passed to the menu handler; the tail rebuilds the cached list handle. */
struct Obj;

typedef struct {
    char **table;
    int pad4;
    int index;
    char pad0C[0x10];
    int handle;
} Menu;

extern Menu D_001A20D0;
extern char D_0019E0B0[];

extern unsigned int func_0AB560(void);
extern unsigned int func_07A078(int first, int second);
extern int func_0A4590(int index);
extern void func_018518(int a, int b);
extern int func_0AB448(int a0);
extern int func_0A7C38(struct Obj *o, int arg);
extern int func_0A0918(char *list);

void func_0B3388(void)
{
    unsigned int input;
    int link;

    input = func_07A078(0x6B10, func_0AB560());
    if ((input & 0x1008) != 0) {
        func_0A4590(0);
        func_0A4590(7);
        func_018518(4, 0);
    } else if ((input & 0x4000) != 0) {
        if (*(unsigned char *)(D_001A20D0.table[D_001A20D0.index] + 0xCC) != 0) {
            func_0A4590(1);
            link = *(int *)(D_001A20D0.table[D_001A20D0.index] + 0xD0);
            if (link == 0) {
                func_0A4590(7);
                func_018518(4, 0);
            } else {
                func_0A4590(6);
                func_0AB448(link);
            }
        }
    } else {
        func_0A7C38((struct Obj *)&D_001A20D0, input);
    }
    D_001A20D0.handle = func_0A0918(D_0019E0B0);
}
