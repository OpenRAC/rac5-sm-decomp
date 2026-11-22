/* LEVEL_07:0x192060 -- placement copy of LEVEL_01_184F80.c: runs the level setup passes, stores the packed settings handle, starts the sound set and releases the four assigned slots. */
typedef struct {
    char pad0[0xD8];
    int wD8;
    char padDC[0x14C - 0xDC];
    int w14C;
    char pad150[0x250 - 0x150];
} Slot;

extern char D_0021CC60[];
extern unsigned int D_0021CA64;
extern unsigned int D_002AD8EC;
extern int D_003AC408;
extern Slot D_003AB928[];

extern void func_18A318(void);
extern void func_18AE70(void);
extern void func_18EB58(void);
extern void func_18B158(void);
extern void func_1FD0B8(char *a0);
extern void func_1FD148(char *record);
extern void func_195390(void *arg);
extern void func_1E2398(char *p, int a1);
extern void func_0F0548(int index);
extern void func_000F0DB0(int param_1);

void func_192060(void)
{
    int i;
    Slot *s;

    func_18A318();
    func_18AE70();
    func_18EB58();
    func_18B158();
    func_1FD0B8(D_0021CC60);
    func_1FD148(D_0021CC60);
    D_003AC408 = ((int (*)(void *))func_195390)((void *)((D_0021CA64 & 0xF800FFFFu) | (D_002AD8EC << 16)));
    func_1E2398((char *)&D_003AC408 + 0x50, 0);
    for (i = 0; i != 4; i++) {
        s = &D_003AB928[i];
        func_0F0548(s->w14C);
        if (s->wD8 != -1)
            func_000F0DB0(s->wD8);
    }
}
