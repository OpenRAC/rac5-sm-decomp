/* LEVEL_05:0x1768F8 -- placement copy of LEVEL_01_184F80.c: runs the level setup passes, stores the packed settings handle, starts the sound set and releases the four assigned slots. */
typedef struct {
    char pad0[0xD8];
    int wD8;
    char padDC[0x14C - 0xDC];
    int w14C;
    char pad150[0x250 - 0x150];
} Slot;

extern char D_001F7358[];
extern unsigned int D_001F715C;
extern unsigned int D_00283EAC;
extern int D_003827B0;
extern Slot D_00381CD0[];

extern void func_16EBB0(void);
extern void func_16F708(void);
extern void func_1733F0(void);
extern void func_16F9F0(void);
extern void func_1D81E0(char *a0);
extern void func_1D8270(char *record);
extern void func_179C28(void *arg);
extern void func_1C2FD8(char *p, int a1);
extern void func_0EB888(int index);
extern void func_000EC0F0(int param_1);

void func_1768F8(void)
{
    int i;
    Slot *s;

    func_16EBB0();
    func_16F708();
    func_1733F0();
    func_16F9F0();
    func_1D81E0(D_001F7358);
    func_1D8270(D_001F7358);
    D_003827B0 = ((int (*)(void *))func_179C28)((void *)((D_001F715C & 0xF800FFFFu) | (D_00283EAC << 16)));
    func_1C2FD8((char *)&D_003827B0 + 0x50, 0);
    for (i = 0; i != 4; i++) {
        s = &D_00381CD0[i];
        func_0EB888(s->w14C);
        if (s->wD8 != -1)
            func_000EC0F0(s->wD8);
    }
}
