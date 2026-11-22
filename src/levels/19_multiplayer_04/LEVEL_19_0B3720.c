/* LEVEL_19:0x0B3720 -- placement copy of LEVEL_16_0B3E48.c: reads the pad input and reacts to the menu: the cancel/accept bits (0x1008) play sound 0 and then sounds 7 and the close request; the select bit (0x4000) plays sound 1 for a selectable entry and either activates its link (sound 6) or closes like cancel; any other input is passed to the menu handler; the tail rebuilds the cached list handle. */
struct Obj;

typedef struct {
    char **table;
    int pad4;
    int index;
    char pad0C[0x10];
    int handle;
} Menu;

extern Menu D_001AFC50;
extern char D_001ABC30[];

extern unsigned int func_0AB8F8(void);
extern unsigned int func_079AE8(int first, int second);
extern int func_0A4928(int index);
extern void func_018898(int a, int b);
extern int func_0AB7E0(int a0);
extern int func_0A7FD0(struct Obj *o, int arg);
extern int func_0A0CB0(char *list);

void func_0B3720(void)
{
    unsigned int input;
    int link;

    input = func_079AE8(0x6B10, func_0AB8F8());
    if ((input & 0x1008) != 0) {
        func_0A4928(0);
        func_0A4928(7);
        func_018898(4, 0);
    } else if ((input & 0x4000) != 0) {
        if (*(unsigned char *)(D_001AFC50.table[D_001AFC50.index] + 0xCC) != 0) {
            func_0A4928(1);
            link = *(int *)(D_001AFC50.table[D_001AFC50.index] + 0xD0);
            if (link == 0) {
                func_0A4928(7);
                func_018898(4, 0);
            } else {
                func_0A4928(6);
                func_0AB7E0(link);
            }
        }
    } else {
        func_0A7FD0((struct Obj *)&D_001AFC50, input);
    }
    D_001AFC50.handle = func_0A0CB0(D_001ABC30);
}
