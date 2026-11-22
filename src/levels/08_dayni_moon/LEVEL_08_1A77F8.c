/* LEVEL_08:0x1A77F8 -- placement copy of LEVEL_01_184F80.c: runs the level setup passes, stores the packed settings handle, starts the sound set and releases the four assigned slots. */
typedef struct {
    char pad0[0xD8];
    int wD8;
    char padDC[0x14C - 0xDC];
    int w14C;
    char pad150[0x250 - 0x150];
} Slot;

extern char D_002518A8[];
extern unsigned int D_002516AC;
extern unsigned int D_002E726C;
extern int D_003E79D8;
extern Slot D_003E6EF8[];

extern void func_19FAB0(void);
extern void func_1A0608(void);
extern void func_1A42F0(void);
extern void func_1A08F0(void);
extern void func_22FF20(char *a0);
extern void func_22FFB0(char *record);
extern void func_1AAB28(void *arg);
extern void func_214F38(char *p, int a1);
extern void func_0FB190(int index);
extern void func_000FB9F8(int param_1);

void func_1A77F8(void)
{
    int i;
    Slot *s;

    func_19FAB0();
    func_1A0608();
    func_1A42F0();
    func_1A08F0();
    func_22FF20(D_002518A8);
    func_22FFB0(D_002518A8);
    D_003E79D8 = ((int (*)(void *))func_1AAB28)((void *)((D_002516AC & 0xF800FFFFu) | (D_002E726C << 16)));
    func_214F38((char *)&D_003E79D8 + 0x50, 0);
    for (i = 0; i != 4; i++) {
        s = &D_003E6EF8[i];
        func_0FB190(s->w14C);
        if (s->wD8 != -1)
            func_000FB9F8(s->wD8);
    }
}
