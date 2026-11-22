/* LEVEL_20:0x09E378 -- placement copy of LEVEL_16_0B3E48.c: reads the pad input and reacts to the menu: the cancel/accept bits (0x1008) play sound 0 and then sounds 7 and the close request; the select bit (0x4000) plays sound 1 for a selectable entry and either activates its link (sound 6) or closes like cancel; any other input is passed to the menu handler; the tail rebuilds the cached list handle. */
struct Obj;

typedef struct {
    char **table;
    int pad4;
    int index;
    char pad0C[0x10];
    int handle;
} Menu;

extern Menu D_001111B0;
extern char D_0010D190[];

extern unsigned int func_096550(void);
extern unsigned int func_067270(int first, int second);
extern int func_08F6B0(int index);
extern void func_016950(int a, int b);
extern int func_096438(int a0);
extern int func_092C28(struct Obj *o, int arg);
extern int func_08BB18(char *list);

void func_09E378(void)
{
    unsigned int input;
    int link;

    input = func_067270(0x6B10, func_096550());
    if ((input & 0x1008) != 0) {
        func_08F6B0(0);
        func_08F6B0(7);
        func_016950(4, 0);
    } else if ((input & 0x4000) != 0) {
        if (*(unsigned char *)(D_001111B0.table[D_001111B0.index] + 0xCC) != 0) {
            func_08F6B0(1);
            link = *(int *)(D_001111B0.table[D_001111B0.index] + 0xD0);
            if (link == 0) {
                func_08F6B0(7);
                func_016950(4, 0);
            } else {
                func_08F6B0(6);
                func_096438(link);
            }
        }
    } else {
        func_092C28((struct Obj *)&D_001111B0, input);
    }
    D_001111B0.handle = func_08BB18(D_0010D190);
}
