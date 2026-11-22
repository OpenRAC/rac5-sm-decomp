/* LEVEL_04:0x190520 -- placement copy of LEVEL_01_184F80.c: runs the level setup passes, stores the packed settings handle, starts the sound set and releases the four assigned slots. */
typedef struct {
    char pad0[0xD8];
    int wD8;
    char padDC[0x14C - 0xDC];
    int w14C;
    char pad150[0x250 - 0x150];
} Slot;

extern char D_00221B00[];
extern unsigned int D_00221904;
extern unsigned int D_002B27EC;
extern int D_003B1300;
extern Slot D_003B0820[];

extern void func_1887D8(void);
extern void func_189330(void);
extern void func_18D018(void);
extern void func_189618(void);
extern void func_201FA8(char *a0);
extern void func_202038(char *record);
extern void func_193850(void *arg);
extern void func_1EABC8(char *p, int a1);
extern void func_0F6C80(int index);
extern void func_000F74E8(int param_1);

void func_190520(void)
{
    int i;
    Slot *s;

    func_1887D8();
    func_189330();
    func_18D018();
    func_189618();
    func_201FA8(D_00221B00);
    func_202038(D_00221B00);
    D_003B1300 = ((int (*)(void *))func_193850)((void *)((D_00221904 & 0xF800FFFFu) | (D_002B27EC << 16)));
    func_1EABC8((char *)&D_003B1300 + 0x50, 0);
    for (i = 0; i != 4; i++) {
        s = &D_003B0820[i];
        func_0F6C80(s->w14C);
        if (s->wD8 != -1)
            func_000F74E8(s->wD8);
    }
}
