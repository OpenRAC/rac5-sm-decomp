/* FRONTEND:0x01B4C8 -- reads the pad bits, plays the confirm cue or the select cue when the highlighted entry is of kind 0x60 or 0x61, otherwise steps the menu, then refreshes the three list objects and stores the final result in the menu block. */
typedef struct {
    char pad00[0xD0];
    int kind;
} Entry;

typedef struct {
    Entry **list;
    char pad04[0x04];
    int index;
    char pad0C[0x10];
    int result;
} Menu;

extern Menu D_00030C88;
extern unsigned int func_0056E8(int pad);
extern int func_0145C8(int index);
extern int func_001B40(int a0, int a1);
extern void func_001AE0(int state, int arg);
extern int func_012200(Menu *m, unsigned int bits);
extern void *func_019500(void);
extern int func_019510(void);
extern void func_011F40(void *obj);
extern int func_011FD8(void *obj);

void func_01B4C8(void)
{
    unsigned int bits;
    int kind;
    Menu *m;

    bits = func_0056E8(1);
    if (bits & 0x1000) {
        func_0145C8(0);
        func_0145C8(7);
        func_001AE0(0xB, 0);
    } else if (bits & 0x4000) {
        m = &D_00030C88;
        kind = m->list[m->index]->kind;
        if (kind == 0x61) {
            func_0145C8(1);
            func_001B40(0x10, 1);
        } else if (kind == 0x60) {
            func_0145C8(1);
            func_001B40(0x10, 1);
        }
    } else {
        func_012200(&D_00030C88, bits);
    }
    func_011F40(func_019500());
    func_011F40((void *)func_019510());
    D_00030C88.result = func_011FD8(func_019500());
}
