/* LEVEL_16:0x0B3E48 -- reads the pad input and reacts to the menu: the cancel/accept bits (0x1008) play sound 0 and then sounds 7 and the close request; the select bit (0x4000) plays sound 1 for a selectable entry and either activates its link (sound 6) or closes like cancel; any other input is passed to the menu handler; the tail rebuilds the cached list handle. */
struct Obj;

typedef struct {
    char **table;
    int pad4;
    int index;
    char pad0C[0x10];
    int handle;
} Menu;

extern Menu D_001AEAD0;
extern char D_001AAAB0[];

extern unsigned int func_0AC020(void);
extern unsigned int func_079600(int first, int second);
extern int func_0A50B0(int index);
extern void func_018B98(int a, int b);
extern int func_0ABF08(int a0);
extern int func_0A86F8(struct Obj *o, int arg);
extern int func_0A1420(char *list);

void func_0B3E48(void)
{
    unsigned int input;
    int link;

    input = func_079600(0x6B10, func_0AC020());
    if ((input & 0x1008) != 0) {
        func_0A50B0(0);
        func_0A50B0(7);
        func_018B98(4, 0);
    } else if ((input & 0x4000) != 0) {
        if (*(unsigned char *)(D_001AEAD0.table[D_001AEAD0.index] + 0xCC) != 0) {
            func_0A50B0(1);
            link = *(int *)(D_001AEAD0.table[D_001AEAD0.index] + 0xD0);
            if (link == 0) {
                func_0A50B0(7);
                func_018B98(4, 0);
            } else {
                func_0A50B0(6);
                func_0ABF08(link);
            }
        }
    } else {
        func_0A86F8((struct Obj *)&D_001AEAD0, input);
    }
    D_001AEAD0.handle = func_0A1420(D_001AAAB0);
}
