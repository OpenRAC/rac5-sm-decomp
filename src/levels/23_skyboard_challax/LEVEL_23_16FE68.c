/* LEVEL_23:0x16FE68 -- placement copy of LEVEL_01_184F80.c: runs the level setup passes, stores the packed settings handle, starts the sound set and releases the four assigned slots. */
typedef struct {
    char pad0[0xD8];
    int wD8;
    char padDC[0x14C - 0xDC];
    int w14C;
    char pad150[0x250 - 0x150];
} Slot;

extern char D_001DB968[];
extern unsigned int D_001DB76C;
extern unsigned int D_0026942C;
extern int D_00364F58;
extern Slot D_00364478[];

extern void func_168120(void);
extern void func_168C78(void);
extern void func_16C960(void);
extern void func_168F60(void);
extern void func_1B6EA0(char *a0);
extern void func_1B6F30(char *record);
extern void func_173198(void *arg);
extern void func_1A5578(char *p, int a1);
extern void func_0E2630(int index);
extern void func_000E2E98(int param_1);

void func_16FE68(void)
{
    int i;
    Slot *s;

    func_168120();
    func_168C78();
    func_16C960();
    func_168F60();
    func_1B6EA0(D_001DB968);
    func_1B6F30(D_001DB968);
    D_00364F58 = ((int (*)(void *))func_173198)((void *)((D_001DB76C & 0xF800FFFFu) | (D_0026942C << 16)));
    func_1A5578((char *)&D_00364F58 + 0x50, 0);
    for (i = 0; i != 4; i++) {
        s = &D_00364478[i];
        func_0E2630(s->w14C);
        if (s->wD8 != -1)
            func_000E2E98(s->wD8);
    }
}
