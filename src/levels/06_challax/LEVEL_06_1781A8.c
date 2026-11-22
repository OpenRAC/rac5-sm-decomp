/* LEVEL_06:0x1781A8 -- placement copy of LEVEL_01_184F80.c: runs the level setup passes, stores the packed settings handle, starts the sound set and releases the four assigned slots. */
typedef struct {
    char pad0[0xD8];
    int wD8;
    char padDC[0x14C - 0xDC];
    int w14C;
    char pad150[0x250 - 0x150];
} Slot;

extern char D_001F7250[];
extern unsigned int D_001F7054;
extern unsigned int D_00284D6C;
extern int D_003837F8;
extern Slot D_00382D18[];

extern void func_170460(void);
extern void func_170FB8(void);
extern void func_174CA0(void);
extern void func_1712A0(void);
extern void func_1D7D30(char *a0);
extern void func_1D7DC0(char *record);
extern void func_17B4D8(void *arg);
extern void func_1C1428(char *p, int a1);
extern void func_0E8808(int index);
extern void func_000E9070(int param_1);

void func_1781A8(void)
{
    int i;
    Slot *s;

    func_170460();
    func_170FB8();
    func_174CA0();
    func_1712A0();
    func_1D7D30(D_001F7250);
    func_1D7DC0(D_001F7250);
    D_003837F8 = ((int (*)(void *))func_17B4D8)((void *)((D_001F7054 & 0xF800FFFFu) | (D_00284D6C << 16)));
    func_1C1428((char *)&D_003837F8 + 0x50, 0);
    for (i = 0; i != 4; i++) {
        s = &D_00382D18[i];
        func_0E8808(s->w14C);
        if (s->wD8 != -1)
            func_000E9070(s->wD8);
    }
}
