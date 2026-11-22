/* LEVEL_10:0x1875C0 -- placement copy of LEVEL_01_184F80.c: runs the level setup passes, stores the packed settings handle, starts the sound set and releases the four assigned slots. */
typedef struct {
    char pad0[0xD8];
    int wD8;
    char padDC[0x14C - 0xDC];
    int w14C;
    char pad150[0x250 - 0x150];
} Slot;

extern char D_002112A8[];
extern unsigned int D_002110AC;
extern unsigned int D_002A13EC;
extern int D_0039FEE0;
extern Slot D_0039F400[];

extern void func_17F878(void);
extern void func_1803D0(void);
extern void func_1840B8(void);
extern void func_1806B8(void);
extern void func_1F1E40(char *a0);
extern void func_1F1ED0(char *record);
extern void func_18A8F0(void *arg);
extern void func_1D97F0(char *p, int a1);
extern void func_0EF088(int index);
extern void func_000EF8F0(int param_1);

void func_1875C0(void)
{
    int i;
    Slot *s;

    func_17F878();
    func_1803D0();
    func_1840B8();
    func_1806B8();
    func_1F1E40(D_002112A8);
    func_1F1ED0(D_002112A8);
    D_0039FEE0 = ((int (*)(void *))func_18A8F0)((void *)((D_002110AC & 0xF800FFFFu) | (D_002A13EC << 16)));
    func_1D97F0((char *)&D_0039FEE0 + 0x50, 0);
    for (i = 0; i != 4; i++) {
        s = &D_0039F400[i];
        func_0EF088(s->w14C);
        if (s->wD8 != -1)
            func_000EF8F0(s->wD8);
    }
}
