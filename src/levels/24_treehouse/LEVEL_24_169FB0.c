/* LEVEL_24:0x169FB0 -- placement copy of LEVEL_01_184F80.c: runs the level setup passes, stores the packed settings handle, starts the sound set and releases the four assigned slots. */
typedef struct {
    char pad0[0xD8];
    int wD8;
    char padDC[0x14C - 0xDC];
    int w14C;
    char pad150[0x250 - 0x150];
} Slot;

extern char D_001D93C0[];
extern unsigned int D_001D91C4;
extern unsigned int D_00263EAC;
extern int D_00360AA8;
extern Slot D_0035FFC8[];

extern void func_162268(void);
extern void func_162DC0(void);
extern void func_166AA8(void);
extern void func_1630A8(void);
extern void func_1B9AC0(char *a0);
extern void func_1B9B50(char *record);
extern void func_16D2E0(void *arg);
extern void func_1A5948(char *p, int a1);
extern void func_0E7358(int index);
extern void func_000E7BC0(int param_1);

void func_169FB0(void)
{
    int i;
    Slot *s;

    func_162268();
    func_162DC0();
    func_166AA8();
    func_1630A8();
    func_1B9AC0(D_001D93C0);
    func_1B9B50(D_001D93C0);
    D_00360AA8 = ((int (*)(void *))func_16D2E0)((void *)((D_001D91C4 & 0xF800FFFFu) | (D_00263EAC << 16)));
    func_1A5948((char *)&D_00360AA8 + 0x50, 0);
    for (i = 0; i != 4; i++) {
        s = &D_0035FFC8[i];
        func_0E7358(s->w14C);
        if (s->wD8 != -1)
            func_000E7BC0(s->wD8);
    }
}
