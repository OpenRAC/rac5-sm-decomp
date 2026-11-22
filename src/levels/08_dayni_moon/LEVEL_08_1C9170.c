/* LEVEL_08:0x1C9170 -- toggles an object's three sub-records: when enabled it attaches each from its global descriptor and clears three four-word tables, otherwise it releases them and the owned record; then forwards to the common handler. */
typedef struct Obj {
    char pad_00[0x58];
    char *block_58;
} Obj;

extern unsigned int D_0025203C;
extern unsigned int D_00252040;
extern unsigned int D_00252044;
extern void func_09F4F0(void *a0, unsigned int a1, int a2);
extern void func_09F668(void *a0);
extern void func_088AA8(char *record);
extern void func_21CFF0(Obj *a0, int a1);

void func_1C9170(Obj *o, int enable)
{
    char *b;
    int *p0;
    int *p1;
    int *p2;
    unsigned int i;

    b = o->block_58;
    if (enable != 0) {
        func_09F4F0(b + 0x38, D_0025203C, 0);
        func_09F4F0(b + 0x4C, D_00252040, 0);
        func_09F4F0(b + 0x60, D_00252044, 0);
        i = 0;
        p2 = (int *)(b + 0x28);
        p1 = (int *)(b + 0x18);
        p0 = (int *)(b + 8);
        do {
            *p0 = 0;
            i++;
            *p1 = 0;
            p0++;
            *p2 = 0;
            p1++;
            p2++;
        } while (i < 4);
    } else {
        func_09F668(b + 0x38);
        func_09F668(b + 0x4C);
        func_09F668(b + 0x60);
        func_088AA8(*(char **)(b + 0x74));
    }
    func_21CFF0(o, enable);
}
