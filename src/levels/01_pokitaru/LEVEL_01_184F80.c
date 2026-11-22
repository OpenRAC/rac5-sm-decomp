/* LEVEL_01:0x184F80 -- runs the level setup passes, stores the packed settings handle, starts the sound set and releases the four assigned slots. */
typedef struct {
    char pad0[0xD8];
    int wD8;
    char padDC[0x14C - 0xDC];
    int w14C;
    char pad150[0x250 - 0x150];
} Slot;

extern char D_002083F0[];
extern unsigned int D_002081F4;
extern unsigned int D_00297FEC;
extern int D_00396AC0;
extern Slot D_00395FE0[];

extern void func_17D238(void);
extern void func_17DD90(void);
extern void func_181A78(void);
extern void func_17E078(void);
extern void func_1E8DE8(char *a0);
extern void func_1E8E78(char *record);
extern void func_1882B0(void *arg);
extern void func_1D3BE0(char *p, int a1);
extern void func_0EF748(int index);
extern void func_000EFFB0(int param_1);

void func_184F80(void)
{
    int i;
    Slot *s;

    func_17D238();
    func_17DD90();
    func_181A78();
    func_17E078();
    func_1E8DE8(D_002083F0);
    func_1E8E78(D_002083F0);
    D_00396AC0 = ((int (*)(void *))func_1882B0)((void *)((D_002081F4 & 0xF800FFFFu) | (D_00297FEC << 16)));
    func_1D3BE0((char *)&D_00396AC0 + 0x50, 0);
    for (i = 0; i != 4; i++) {
        s = &D_00395FE0[i];
        func_0EF748(s->w14C);
        if (s->wD8 != -1)
            func_000EFFB0(s->wD8);
    }
}
