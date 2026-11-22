/* LEVEL_03:0x185690 -- placement copy of LEVEL_01_184F80.c: runs the level setup passes, stores the packed settings handle, starts the sound set and releases the four assigned slots. */
typedef struct {
    char pad0[0xD8];
    int wD8;
    char padDC[0x14C - 0xDC];
    int w14C;
    char pad150[0x250 - 0x150];
} Slot;

extern char D_00220D10[];
extern unsigned int D_00220B14;
extern unsigned int D_002B2E6C;
extern int D_003B1988;
extern Slot D_003B0EA8[];

extern void func_17D948(void);
extern void func_17E4A0(void);
extern void func_182188(void);
extern void func_17E788(void);
extern void func_201478(char *a0);
extern void func_201508(char *record);
extern void func_1889C0(void *arg);
extern void func_1E5BE0(char *p, int a1);
extern void func_0EDFE0(int index);
extern void func_000EE848(int param_1);

void func_185690(void)
{
    int i;
    Slot *s;

    func_17D948();
    func_17E4A0();
    func_182188();
    func_17E788();
    func_201478(D_00220D10);
    func_201508(D_00220D10);
    D_003B1988 = ((int (*)(void *))func_1889C0)((void *)((D_00220B14 & 0xF800FFFFu) | (D_002B2E6C << 16)));
    func_1E5BE0((char *)&D_003B1988 + 0x50, 0);
    for (i = 0; i != 4; i++) {
        s = &D_003B0EA8[i];
        func_0EDFE0(s->w14C);
        if (s->wD8 != -1)
            func_000EE848(s->wD8);
    }
}
