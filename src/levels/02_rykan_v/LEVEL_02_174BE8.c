/* LEVEL_02:0x174BE8 -- placement copy of LEVEL_01_15EEE8.c: runs two update helpers on the object, hands it to a registration helper with two globals, then links it. */
extern char D_003AD470[];
extern char D_00236A38[];

extern void func_1DFB40(void);
extern void func_1DFD30(void *object);
extern void func_1E0848(char *a, char *b, void *object);
extern void func_1E0B48(char *object);

void func_174BE8(void *object)
{
    ((void (*)(void *))func_1DFB40)(object);
    func_1DFD30(object);
    func_1E0848(D_003AD470, D_00236A38, object);
    func_1E0B48(D_003AD470);
}
