/* LEVEL_02:0x19AF10 -- placement copy of LEVEL_01_184F80.c: runs the level setup passes, stores the packed settings handle, starts the sound set and releases the four assigned slots. */
typedef struct {
    char pad0[0xD8];
    int wD8;
    char padDC[0x14C - 0xDC];
    int w14C;
    char pad150[0x250 - 0x150];
} Slot;

extern char D_0021D408[];
extern unsigned int D_0021D20C;
extern unsigned int D_002AF4EC;
extern int D_003AEAD0;
extern Slot D_003ADFF0[];

extern void func_1931C8(void);
extern void func_193D20(void);
extern void func_197A08(void);
extern void func_194008(void);
extern void func_1FDA80(char *a0);
extern void func_1FDB10(char *record);
extern void func_19E240(void *arg);
extern void func_1E8878(char *p, int a1);
extern void func_0F58F8(int index);
extern void func_000F6160(int param_1);

void func_19AF10(void)
{
    int i;
    Slot *s;

    func_1931C8();
    func_193D20();
    func_197A08();
    func_194008();
    func_1FDA80(D_0021D408);
    func_1FDB10(D_0021D408);
    D_003AEAD0 = ((int (*)(void *))func_19E240)((void *)((D_0021D20C & 0xF800FFFFu) | (D_002AF4EC << 16)));
    func_1E8878((char *)&D_003AEAD0 + 0x50, 0);
    for (i = 0; i != 4; i++) {
        s = &D_003ADFF0[i];
        func_0F58F8(s->w14C);
        if (s->wD8 != -1)
            func_000F6160(s->wD8);
    }
}
